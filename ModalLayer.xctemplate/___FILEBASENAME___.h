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
#include <ui/CocosGUI.h>

class ___FILEBASENAMEASIDENTIFIER___ : public cocos2d::Layer
{
public:
    virtual bool init();
    CREATE_FUNC(___FILEBASENAMEASIDENTIFIER___);
	
private:
	enum ZOder {
		Z_Bg = 0,
		Z_Button,
	};
};

#endif /* defined(_____PROJECTNAMEASIDENTIFIER________FILEBASENAMEASIDENTIFIER_____) */