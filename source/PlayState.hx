package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxRandom;
import flixel.util.FlxSort;
import flixel.group.FlxGroup;
import flixel.effects.particles.FlxEmitter;
import flixel.effects.particles.FlxParticle;
import flixel.group.FlxTypedGroup;

class PlayState extends FlxState {
	var hero : Hero;
	var speed : FlxText;
	var level : FlxText;
	var cash : FlxText;
	var powerups : FlxGroup;
	var powerdowns : FlxGroup;
	var cashitems : FlxGroup;
	var pickupBuffer : Float = 0.0;
	var pickupTimer : Float = 10.0;

	var brownPixel : FlxParticle;
	var emitter : FlxEmitter;

	var endMenu : EndMenu;
	var cloudManager : CloudManager;

	public var container : FlxTypedGroup<ExtendedSprite>;

	//TODO: Implement states with enums

	private function hitStuff(obj1 : FlxObject, obj2 : FlxObject):Void {
		obj1.kill();
		if(Type.getClassName(Type.getClass(obj1))=="PowerDown") {
			hero.ateSpoiledFood();
		} else if(Type.getClassName(Type.getClass(obj1))=="PowerUp") {
			hero.ateFood();
		} else {
			hero.gotCash();
			cash.text = "Cash: $" + Reg.cash;
		}
	}

	private function spawnCashItem():Void {
		var pickup : CashItem = cast(cashitems.recycle(), CashItem);
		pickup.spawn();
	}

	private function spawnPowerDown():Void {
		var pickup : PowerDown = cast(powerdowns.recycle(), PowerDown);
		pickup.spawn();
	}

	private function spawnPowerUp():Void {
		var pickup : PowerUp = cast(powerups.recycle(), PowerUp);
		pickup.spawn();
	}

	override public function create():Void {
		super.create();

		container = new FlxTypedGroup<ExtendedSprite>();
		
		hero = new Hero(cast(FlxG.width/2, Int), cast(FlxG.height-50, Int));
		speed = new FlxText(0, 0, FlxG.width, "0 MPH");
		speed.setFormat(null, 24, FlxColor.BLACK, "left");
		speed.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		speed.addFormat(new FlxTextFormat(0x000000, false, false, 0xffffff, 0, 12));
		level = new FlxText(0, 0, FlxG.width, "Level: "+Reg.level);
		level.setFormat(null, 24, FlxColor.BLACK, "right");
		level.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		level.addFormat(new FlxTextFormat(0x000000, false, false, 0xffffff, 0, 12));

		cash = new FlxText(0, 0, FlxG.width, "Cash: $"+Reg.cash);
		cash.setFormat(null, 24, FlxColor.BLACK, "center");
		cash.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		cash.addFormat(new FlxTextFormat(0x000000, false, false, 0xffffff, 0, 12));

		emitter = new FlxEmitter(hero.x+22, hero.y+54, 200);
		emitter.setXSpeed(-70, 70);
		emitter.setYSpeed(300, 400);
		for(i in 0...(Std.int(emitter.maxSize/2))) {
			brownPixel = new FlxParticle();
			brownPixel.makeGraphic(5, 3, FlxColor.BROWN);
			brownPixel.visible = false;
			emitter.add(brownPixel);
			brownPixel = new FlxParticle();
			brownPixel.makeGraphic(8, 5, FlxColor.BROWN);
			brownPixel.visible = false;
			emitter.add(brownPixel);
		}
		emitter.start(false, 3, .01);

		cloudManager = new CloudManager();
		//TODO: This needs to happen a few seconds after liftoff
		cloudManager.enabled = true;

		//TODO: Make more pickups
		var numPickups : Int = 2;
		powerups = new FlxGroup(numPickups);
		powerdowns = new FlxGroup(numPickups);
		cashitems = new FlxGroup(numPickups);
		var powerup : PowerUp;
		var powerdown : PowerDown;
		var cashitem : CashItem;
		for(i in 0...numPickups) {
			powerup = new PowerUp(-100, -100);
			powerup.z = 100;
			powerups.add(powerup);

			powerdown = new PowerDown(-100, -100);
			powerdown.z = 100;
			powerdowns.add(powerdown);

			cashitem = new CashItem(-100, -100);
			cashitem.z = 100;
			cashitems.add(cashitem);
		}

		hero.z = 50;
		add(powerups);
		add(powerdowns);
		add(cashitems);
		add(emitter);
		add(cash);
		add(level);
		add(speed);
		container.add(hero);
		add(container);
		container.sort(sortByZ);
	}

	private function sortByZ(order : Int, sprite1 : ExtendedSprite, sprite2 : ExtendedSprite) : Int {
		return FlxSort.byValues(order, sprite1.z, sprite2.z);
	}

	public function addToScene(object : ExtendedSprite):Void {
		container.add(object);
		container.sort(sortByZ);
	}
	
	override public function destroy():Void {
		super.destroy();
	}

	override public function update():Void {
		if(endMenu == null) {
			if(hero.shitSpeed < 0) {
				//TODO: Implement upgrade menu here
				endMenu = new EndMenu();
				emitter.destroy();
				Reg.level += 1;
				level.text = "Level: " + Reg.level;
			} else {
				speed.text = hero.shitSpeed + " MPH";
				//TODO: Fix this hack
				emitter.x = hero.x+22;
				emitter.y = hero.y+54;
			}

			if(pickupBuffer > pickupTimer) {
				if(FlxRandom.float() < .25) {
					spawnPowerDown();
				} else if(FlxRandom.float() < .75) {
					spawnPowerUp();
				} else {
					spawnCashItem();
				}
				pickupBuffer = 0;
			} else {
				pickupBuffer += FlxG.elapsed;
			}

			cloudManager.update();

			FlxG.overlap(powerups, hero, hitStuff);
			FlxG.overlap(powerdowns, hero, hitStuff);
			FlxG.overlap(cashitems, hero, hitStuff);
		} else {
			endMenu.update();
		}

		super.update();
	}	
}
