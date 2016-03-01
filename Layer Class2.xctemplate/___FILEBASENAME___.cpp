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
    
    return true;
}