package;

import flixel.FlxSprite;
import flixel.FlxG;

class CloudManager {

	var spawnBuffer : Float = 0.0;
	var spawnTime : Float = 3.0;
	public var enabled : Bool = false;

	public function new() {
	}	

	public function update() {
		if(!enabled) {
			return;
		}

		if(spawnBuffer > spawnTime) {
			for(i in 0...5) {
				cast(FlxG.state, PlayState).addToScene(new Cloud());
			}
			spawnBuffer = 0.0;
		} else {
			spawnBuffer += FlxG.elapsed;
		}
	}
}
