package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.group.FlxTypedGroup;

enum CloudState {
	IDLE;
	MOVING;
	STOPPED;
}

class CloudManager {

	var idleBuffer : Float = 0.0;
	var idleTime : Float = 5.0;
	var spawnBuffer : Float = 0.0;
	var spawnTime : Float = 3.0;
	var pool : FlxTypedGroup<Cloud>;
	var currentState : CloudState;
	public var enabled : Bool = false;

	public function new() {
		pool = new FlxTypedGroup<Cloud>();
		currentState = CloudState.IDLE;
	}	

	public function update():Void {
		switch(currentState) {
		case CloudState.IDLE:
			updateIdle();
		case CloudState.MOVING:
			updateMoving();
		case CloudState.STOPPED:
			updateStopped();
		}
	}

	private function updateIdle():Void {
		if(idleBuffer > idleTime) {
			currentState = CloudState.MOVING;
		} else {
			idleBuffer += FlxG.elapsed;
		}
	}

	private function updateMoving():Void {
		if(spawnBuffer > spawnTime) {
			for(i in 0...5) {
				var cloud = new Cloud();
				pool.add(cloud);
				cast(FlxG.state, PlayState).addToScene(cloud);
			}
			spawnBuffer = 0.0;
		} else {
			spawnBuffer += FlxG.elapsed;
		}
	}

	private function updateStopped():Void {
	}

	public function stopClouds() {
		currentState = CloudState.STOPPED;
		pool.forEachExists(stopCloud);
	}

	private function stopCloud(cloud : Cloud):Void {
		cloud.stop();
	}
}
