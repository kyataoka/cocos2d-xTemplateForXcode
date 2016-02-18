//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

#define WINSIZE Director::getInstance()->getWinSize()
#define VISIBLESIZE Director::getInstance()->getVisibleSize()
#define VISIBLEORIGIN Director::getInstance()->getVisibleOrigin()

USING_NS_CC;

Scene* ___FILEBASENAMEASIDENTIFIER___::createScene() {
	auto scene = Scene::create();
	auto layer = ___FILEBASENAMEASIDENTIFIER___::create();
	scene->addChild(layer);
	
    return scene;
}

bool ___FILEBASENAMEASIDENTIFIER___::init() {
    if (!Layer::init()) {
        return false;
    }
    
    // 初期化
    
    return true;
}