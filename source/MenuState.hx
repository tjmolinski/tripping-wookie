package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxColor;

class MenuState extends FlxState {
	var tapToContinue : FlxText;
	var button : FlxSprite;
	override public function create():Void {
		super.create();

		var title : FlxText = new FlxText(0, 60, FlxG.width, "Shit Rockets");
		title.setFormat(null, 48, FlxColor.BLACK, "center");
		title.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		title.addFormat(new FlxTextFormat(0x008040, false, false, null, 0, 12));

		tapToContinue = new FlxText(0, FlxG.height-160, FlxG.width, "Tap to Play");
		tapToContinue.setFormat(null, 48, FlxColor.BLACK, "center");
		tapToContinue.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		tapToContinue.addFormat(new FlxTextFormat(0x000000, false, false, 0xffffff, 0, 11));

		button = new FlxSprite(0, FlxG.height-160);
		button.makeGraphic(FlxG.width, 60, FlxColor.WHITE);

		add(title);
		add(button);
		add(tapToContinue);
	}
	
	override public function destroy():Void {
		super.destroy();
	}

	override public function update():Void {
		super.update();
		for(touch in FlxG.touches.list) {
			if(touch.overlaps(tapToContinue) && touch.justReleased) {
				FlxG.switchState(new PlayState());
			}
			if(touch.overlaps(tapToContinue) && touch.pressed) {
				button.color = FlxColor.RED;
			} else {
				button.color = FlxColor.WHITE;
			}
		}
	}	
}
