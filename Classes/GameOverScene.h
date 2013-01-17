/*
 * GameOverScene.h
 *
 *  Created on: 2013-1-14
 *      Author: allin.dev
 */

#ifndef GAMEOVERSCENE_H_
#define GAMEOVERSCENE_H_

#include "GameBaseDialog.h"

class GameOverScene: public GameBaseDialog {
public:
	GameOverScene();
	~GameOverScene();

	virtual bool init();
	virtual void drawView();
	void menuOkCallback(CCObject* pSender);
	void menuCancelCallback(CCObject* pSender);

	void back();
	void playAgain();


	CREATE_FUNC(GameOverScene);

};

#endif /* GAMEOVERSCENE_H_ */
