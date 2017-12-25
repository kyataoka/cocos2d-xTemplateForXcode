//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

USING_NS_CC;
using namespace ui;

bool ___FILEBASENAMEASIDENTIFIER___::init() {
	if (!Layer::init()) {
		return false;
	}
	
	auto listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);
	listener->onTouchBegan = [](Touch*, Event*){return true;};
	Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
	
	float imgSize = 1000.0 / Director::getInstance()->getContentScaleFactor();
	auto bg = Scale9Sprite::create("modal.png", Rect(0, 0, imgSize, imgSize), Rect(imgSize/2, imgSize/2, 0, 0));
	bg->setScale((WINSIZE.width/10) / bg->getContentSize().width);
	bg->setContentSize((VISIBLESIZE*0.7) / bg->getScale());
	bg->setPosition(WINSIZE/2);
	addChild(bg, Z_Bg);
	
	auto resumeLabel = Label::createWithSystemFont("戻る", "Arial", 32);
	resumeLabel->setColor(Color3B::WHITE);
	resumeLabel->enableOutline(Color4B::BLACK, 1);
	auto resumeButton = MenuItemLabel::create(resumeLabel, [=](Ref*){
		Director::getInstance()->startAnimation();
		this->removeFromParentAndCleanup(true);
	});
	resumeButton->setPosition(WINSIZE/2);
	
	auto menu = Menu::create(resumeButton, NULL);
	menu->setPosition(Point::ZERO);
	addChild(menu, Z_Button);
	
	this->runAction(CallFunc::create([](){Director::getInstance()->stopAnimation();}));
	
	return true;
}