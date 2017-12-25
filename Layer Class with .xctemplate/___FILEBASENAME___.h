//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#ifndef ___FILEBASENAMEASIDENTIFIER____h
#define ___FILEBASENAMEASIDENTIFIER____h

#define WINSIZE Director::getInstance()->getWinSize()
#define VISIBLESIZE Director::getInstance()->getVisibleSize()
#define VISIBLEORIGIN Director::getInstance()->getVisibleOrigin()

#include <cocos2d.h>

class ___FILEBASENAMEASIDENTIFIER___ : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
    virtual bool init();
    CREATE_FUNC(___FILEBASENAMEASIDENTIFIER___);
};

#endif /* defined(_____PROJECTNAMEASIDENTIFIER________FILEBASENAMEASIDENTIFIER_____) */