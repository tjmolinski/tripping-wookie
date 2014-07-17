package;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxRandom;
import flixel.FlxG;

class PowerDown extends ExtendedSprite {

	public function new(newX : Int, newY : Int) {
		super(newX, newY);
		makeGraphic(10, 10, FlxColor.RED);
		exists = false;
	}

	public function spawn() {
		reset((FlxRandom.float()*(FlxG.width-50))+50, -20);
		velocity.y = 200;
	}
}
