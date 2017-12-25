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