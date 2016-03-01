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
	auto listener = EventListenerTouchOneByOne::create();
	listener->onTouchBegan = CC_CALLBACK_2(___FILEBASENAMEASIDENTIFIER___::onTouchBegan, this);
	listener->onTouchMoved = CC_CALLBACK_2(___FILEBASENAMEASIDENTIFIER___::onTouchMoved, this);
	listener->onTouchEnded = CC_CALLBACK_2(___FILEBASENAMEASIDENTIFIER___::onTouchEnded, this);
	this->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    
    return true;
}

bool ___FILEBASENAMEASIDENTIFIER___::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
	return true;
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *event)
{
	
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event)
{
	
}

void ___FILEBASENAMEASIDENTIFIER___::onTouchCancelled(cocos2d::Touch *touch, cocos2d::Event *event)
{
	
}
