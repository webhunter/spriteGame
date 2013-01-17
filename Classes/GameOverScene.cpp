/*
 * GameOverScene.cpp
 *
 *  Created on: 2013-1-14
 *      Author: allin.dev
 */

#include "GameOverScene.h"
#include "SceneManager.h"

USING_NS_CC;

GameOverScene::GameOverScene() {
}
GameOverScene::~GameOverScene() {
}

bool GameOverScene::init() {

	if (!GameBaseDialog::init()) {
		return false;
	}
	CCMenuItemImage* btnOk = CCMenuItemImage::create("btnOk.png", "btnOk.png",
			this, menu_selector(GameOverScene::menuOkCallback));
	CCMenuItemImage* btnCancel = CCMenuItemImage::create("btnCancel.png",
			"btnCancel.png", this,
			menu_selector(GameOverScene::menuCancelCallback));

	addMenuItem(btnOk, btnCancel);
	return true;

}

void GameOverScene::drawView() {
	CCLog("GameOverScene::drawView...");
	if (!m_pDialogBg) {
		return;
	}

	CCSprite* sprite = CCSprite::create("menu4.jpg");
	sprite->setPosition(
			ccp(m_pDialogBg->getPositionX(), m_pDialogBg->getPositionY()));
	this->addChild(sprite, 1);

}

void GameOverScene::back() {
	SceneManager::sharedGameManager()->runScene(SceneManager::SCENE_MENU);
}


void GameOverScene::playAgain() {
	SceneManager::sharedGameManager()->runScene(SceneManager::SCENE_PLAY);
}

void GameOverScene::menuOkCallback(CCObject* pSender) {

}
void GameOverScene::menuCancelCallback(CCObject* pSender) {
	cancel();
}

