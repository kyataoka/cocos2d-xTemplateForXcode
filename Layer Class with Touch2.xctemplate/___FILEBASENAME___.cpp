//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

USING_NS_CC;

Scene* ___FILEBASENAMEASIDENTIFIER___::createScene() {
	auto scene = Scene::create();
	auto layer = ___FILEBASENAMEASIDENTIFIER___::create();
	scene->addChild(layer);
	
    return scene;
}

___FILEBASENAMEASIDENTIFIER___* ___FILEBASENAMEASIDENTIFIER___::create()
{
	___FILEBASENAMEASIDENTIFIER___ *pRet = new ___FILEBASENAMEASIDENTIFIER___;
	if (pRet && pRet->init()) {
		pRet->autorelease();
		return pRet;
	} else {
		delete pRet;
		pRet = nullptr;
		return nullptr;
	}
}

bool ___FILEBASENAMEASIDENTIFIER___::init() {
    if (!Layer::init()) {
        return false;
    }
    
    // 初期化
	auto touchListener = EventListenerTouchOneByOne::create();
	touchListener->onTouchBegan = CC_CALLBACK_2(___FILEBASENAMEASIDENTIFIER___::onTouchBegan, this);
	touchListener->onTouchMoved = CC_CALLBACK_2(___FILEBASENAMEASIDENTIFIER___::onTouchMoved, this);
	touchListener->onTouchEnded = CC_CALLBACK_2(___FILEBASENAMEASIDENTIFIER___::onTouchEnded, this);
	touchListener->onTouchCancelled = CC_CALLBACK_2(___FILEBASENAMEASIDENTIFIER___::onTouchCancelled, this);
	this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(touchListener, this);
    
    return true;
}

bool ___FILEBASENAMEASIDENTIFIER___::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
	CCLOG("onTouchBegan");
	return true;
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *event)
{
	CCLOG("onTouchMoved");
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event)
{
	CCLOG("onTouchEnded");
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchCancelled(cocos2d::Touch *touch, cocos2d::Event *event)
{
	CCLOG("onTouchCancelled");
}
