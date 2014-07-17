package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.util.FlxColor;

class EndMenu {

	var metabolism : FlxText;
	var metabolismBtn : FlxSprite;

	var sphincterStrength : FlxText;
	var sphincterBtn : FlxSprite;

	var stomachSize : FlxText;
	var stomachBtn : FlxSprite;

	var food : FlxText;
	var foodBtn : FlxSprite;

	var playAgain : FlxText;
	var playAgainBtn : FlxSprite;

	public function new() {
		food = new FlxText(0, FlxG.height/2 - 140, FlxG.width, "Food: " + Reg.food);
		food.setFormat(null, 48, FlxColor.BLACK, "center");
		food.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		food.addFormat(new FlxTextFormat(0x000000, false, false, 0xffffff, 0, 11));

		foodBtn = new FlxSprite(0, FlxG.height/2 - 140);
		foodBtn.makeGraphic(FlxG.width, 60, FlxColor.WHITE);

		FlxG.state.add(foodBtn);
		FlxG.state.add(food);

		stomachSize = new FlxText(0, FlxG.height/2 - 70, FlxG.width, "Stomach: " + Reg.stomachSize);
		stomachSize.setFormat(null, 48, FlxColor.BLACK, "center");
		stomachSize.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		stomachSize.addFormat(new FlxTextFormat(0x000000, false, false, 0xffffff, 0, 11));

		stomachBtn = new FlxSprite(0, FlxG.height/2 - 70);
		stomachBtn.makeGraphic(FlxG.width, 60, FlxColor.WHITE);

		FlxG.state.add(stomachBtn);
		FlxG.state.add(stomachSize);

		metabolism = new FlxText(0, FlxG.height/2, FlxG.width, "Metabolism: " + Reg.metabolism);
		metabolism.setFormat(null, 48, FlxColor.BLACK, "center");
		metabolism.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		metabolism.addFormat(new FlxTextFormat(0x000000, false, false, 0xffffff, 0, 11));

		metabolismBtn = new FlxSprite(0, FlxG.height/2);
		metabolismBtn.makeGraphic(FlxG.width, 60, FlxColor.WHITE);

		FlxG.state.add(metabolismBtn);
		FlxG.state.add(metabolism);

		sphincterStrength = new FlxText(0, FlxG.height/2 + 70, FlxG.width, "Sphincter: " + Reg.sphincterStrength);
		sphincterStrength.setFormat(null, 48, FlxColor.BLACK, "center");
		sphincterStrength.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		sphincterStrength.addFormat(new FlxTextFormat(0x000000, false, false, 0xffffff, 0, 11));

		sphincterBtn = new FlxSprite(0, FlxG.height/2 + 70);
		sphincterBtn.makeGraphic(FlxG.width, 60, FlxColor.WHITE);

		FlxG.state.add(sphincterBtn);
		FlxG.state.add(sphincterStrength);

		playAgain = new FlxText(0, FlxG.height-160, FlxG.width, "Play Again");
		playAgain.setFormat(null, 48, FlxColor.BLACK, "center");
		playAgain.setBorderStyle(FlxText.BORDER_OUTLINE, FlxColor.WHITE, 2);
		playAgain.addFormat(new FlxTextFormat(0x000000, false, false, 0xffffff, 0, 11));

		playAgainBtn = new FlxSprite(0, FlxG.height-160);
		playAgainBtn.makeGraphic(FlxG.width, 60, FlxColor.WHITE);

		FlxG.state.add(playAgainBtn);
		FlxG.state.add(playAgain);
	}

	public function destroy():Void {
		metabolism.destroy();
		metabolismBtn.destroy();
		playAgain.destroy();
		playAgainBtn.destroy();
		sphincterStrength.destroy();
		sphincterBtn.destroy();
		stomachSize.destroy();
		stomachBtn.destroy();
		food.destroy();
		foodBtn.destroy();
	}

	public function update():Void {
		for(touch in FlxG.touches.list) {
			//Food button
			if(touch.overlaps(food) && touch.justReleased) {
				Reg.food += 1;
				food.text = "Food: " + Reg.food;
			}
			if(touch.overlaps(food) && touch.pressed) {
				foodBtn.color = FlxColor.RED;
			} else {
				foodBtn.color = FlxColor.WHITE;
			}

			//Stomach button
			if(touch.overlaps(stomachSize) && touch.justReleased) {
				Reg.stomachSize += 1;
				stomachSize.text = "Stomach: " + Reg.stomachSize;
			}
			if(touch.overlaps(stomachSize) && touch.pressed) {
				stomachBtn.color = FlxColor.RED;
			} else {
				stomachBtn.color = FlxColor.WHITE;
			}

			//Metabolism button
			if(touch.overlaps(metabolism) && touch.justReleased) {
				Reg.metabolism += 1;
				metabolism.text = "Metabolism: " + Reg.metabolism;
			}
			if(touch.overlaps(metabolism) && touch.pressed) {
				metabolismBtn.color = FlxColor.RED;
			} else {
				metabolismBtn.color = FlxColor.WHITE;
			}

			//Sphincter button
			if(touch.overlaps(sphincterStrength) && touch.justReleased) {
				Reg.sphincterStrength += 1;
				sphincterStrength.text = "Sphincter: " + Reg.sphincterStrength;
			}
			if(touch.overlaps(sphincterStrength) && touch.pressed) {
				sphincterBtn.color = FlxColor.RED;
			} else {
				sphincterBtn.color = FlxColor.WHITE;
			}

			//Play again button
			if(touch.overlaps(playAgain) && touch.justReleased) {
				FlxG.switchState(new PlayState());
			}
			if(touch.overlaps(playAgain) && touch.pressed) {
				playAgainBtn.color = FlxColor.RED;
			} else {
				playAgainBtn.color = FlxColor.WHITE;
			}
		}
	}

}
