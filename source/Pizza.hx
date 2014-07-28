package;

import flixel.FlxSprite;
import flixel.util.FlxRandom;
import flixel.FlxG;

class Pizza extends ExtendedSprite {
	public function new() {
		super(0, 0);
		loadGraphic("images/pizza.png", true, 64, 64);
		scale.set(0.5, 0.5);
		spawn();
	}

	public function spawn() {
		x = (FlxRandom.float()*(FlxG.width-50))+50;
		y = -20;
		velocity.y = 200;
	}
}
