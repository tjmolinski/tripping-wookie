package;

import flixel.FlxSprite;

class TurkeyLeg extends Food {
	public function new() {
		super();
		loadGraphic("images/turkeyleg.png", true, 64, 64);
		scale.set(0.5, 0.5);
		life = 10;
	}
}
