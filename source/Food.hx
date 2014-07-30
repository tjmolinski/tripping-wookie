package;

import flixel.FlxSprite;
import flixel.util.FlxRandom;
import flixel.FlxG;

class Food extends ExtendedSprite {

	private var life : Int = 0;

	public function new() {
		super(0, 0);
		spawn();
	}

	public function spawn() {
		x = (FlxRandom.float()*(FlxG.width-50))+50;
		y = -20;
		velocity.y = 200;
	}

	public function chew():Bool {
		life -= 1;
		return life <= 0;
	}
}
