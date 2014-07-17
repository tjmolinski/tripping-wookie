package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.tweens.FlxTween;
import flixel.text.FlxText;

class Hero extends ExtendedSprite {

	public var shitSpeed : Int = 0;

	var shitting : Bool = false;
	var vel : Vector2 = new Vector2(0, 0);
	var TILT_SPEED : Float = 50;
	var FRICTION : Float = 0.8;
	var SHIT_SPEED_DECAY : Int = 1;
	var STOMACH_INTERVAL : Int = 20;

	var floating : Bool = false;
	var FLOAT_SPEED : Int = 200;

	var shitDecayBuffer : Float = 0.0;
	var shitDecayTimer : Float = 0.25;

	var shitEatBuffer : Float = 0.0;
	var shitEatTimer : Float = 5.0;

	var metabolism : Int;
	var sphincterStrength : Int;
	var stomachSize : Int;
	var food : Int;
	var cash : Int;

	var timer : FlxText;
	var startedEating : Bool = false;

	public function new(newX : Int, newY : Int) {
		super(newX, newY);
		loadGraphic("images/poopman.png", true, 44, 108);

		timer = new FlxText(0, 100, FlxG.width, shitEatTimer+" sec");
		timer.setFormat(null, 24, FlxColor.BLACK, "center");
		timer.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		timer.addFormat(new FlxTextFormat(0x000000, false, false, 0xffffff, 0, 12));
		cast(FlxG.state, PlayState).add(timer);

		//TODO: Implement a depth value
		//TODO: Implement different states with enums

		metabolism = Reg.metabolism;
		sphincterStrength = Reg.sphincterStrength;
		stomachSize = Reg.stomachSize;
		food = Reg.food;
		cash = Reg.cash;
	}	

	override public function update():Void {
		if(shitting) {
			//We need the inverse of the sensor
			var sphincterControl = (sphincterStrength/(TILT_SPEED/10)) * TILT_SPEED;
			vel.x -= (FlxG.accelerometer.x * sphincterControl);

			//TODO: Put in variable
			//44 for width of image
			if(x > FlxG.width-44) {
				x = FlxG.width-44;
				vel.x = 0;
			} else if(x < 0) {
				x = 0;
				vel.x = 0;
			} else {
				x += vel.x * FlxG.elapsed;
			}

			vel.x *= FRICTION;

			//This makes it look like the character is leaning into turns
			angle = vel.x * 0.07;

			if(shitDecayBuffer > shitDecayTimer) {
				shitDecayBuffer = 0;
				shitSpeed -= SHIT_SPEED_DECAY;
			} else {
				shitDecayBuffer += (FlxG.elapsed/metabolism);
			}

			if(floating) {
				//TODO: Ease out so not sudden stop when reaching middle
				y -= FLOAT_SPEED * FlxG.elapsed;
				if(y <= (FlxG.height/2)) {
					floating = false;
				}
			}
		} else {
			if(shitEatBuffer > shitEatTimer) {
				color = FlxColor.WHITE;
				floating = true;
				shitting = true;
				timer.destroy();
			} else {
				color = FlxColor.BLUE;
				if(shitSpeed < stomachSize*STOMACH_INTERVAL) {
					for(touch in FlxG.touches.list) {
						if(touch.justPressed) {
							shitSpeed += food;
							color = FlxColor.RED;
							startedEating = true;
						}
					}
					if(shitSpeed > stomachSize*STOMACH_INTERVAL) {
						shitSpeed = stomachSize*STOMACH_INTERVAL;
					}
				}

				if(startedEating) {
					shitEatBuffer += FlxG.elapsed;
					timer.text = (shitEatTimer - shitEatBuffer)+" sec";
				}
			}
		}
		super.update();
	}

	public function ateSpoiledFood():Void {
		shitSpeed -= 10;
	}

	public function ateFood():Void {
		if(shitSpeed < stomachSize*STOMACH_INTERVAL) {
			shitSpeed += 20;
		}

		if(shitSpeed > stomachSize*STOMACH_INTERVAL) {
			shitSpeed = stomachSize*STOMACH_INTERVAL;
		}
	}

	public function gotCash():Void {
		Reg.cash += 10;
	}
}
