package;

import flixel.FlxSprite;

class Pizza extends Food {
	public function new() {
		super();
		loadGraphic("images/pizza.png", true, 64, 64);
		scale.set(0.5, 0.5);
	}
}
