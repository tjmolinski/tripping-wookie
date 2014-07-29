package;

import flixel.FlxSprite;

class Cheese extends Food {
	public function new() {
		super();
		loadGraphic("images/cheese.png", true, 64, 64);
		scale.set(0.5, 0.5);
	}
}
