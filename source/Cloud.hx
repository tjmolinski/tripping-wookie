package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxRandom;

class Cloud extends ExtendedSprite {

	public function new() {
		x = FlxRandom.float()*FlxG.width;
		y = (FlxRandom.float()*-50) - 64;
		super(x, y);
		loadGraphic("images/cloud.png", true, 64, 64);

		var depthRNG : Float = FlxRandom.float();
		if(depthRNG < .3) {
			z = 4;
			velocity.y = 100;
		} else if(depthRNG < .6) {
			z = 3;
			scale.set(.75, .75);
			velocity.y = 75;
		} else if(depthRNG < .8) {
			z = 2;
			scale.set(.5, .5);
			velocity.y = 50;
		} else {
			z = 1;
			scale.set(.25, .25);
			velocity.y = 30;
		}
	}

	override public function update():Void {
		super.update();
		if(y > FlxG.height+64) {
			destroy();
		}
	}
}
