package;

import flixel.FlxSprite;
import flixel.util.FlxRandom;
import flixel.FlxG;

class Food extends ExtendedSprite {
	public function new() {
		super(0, 0);
		spawn();
	}

	public function spawn() {
		x = (FlxRandom.float()*(FlxG.width-50))+50;
		y = -20;
		velocity.y = 200;
	}
}
