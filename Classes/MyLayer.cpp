#include "MyLayer.h"

USING_NS_CC;

bool MyLayer::init()
{
	if(!CCLayer::init())
	{
		return false;
	}

	CCSprite* sprite = CCSprite::create("Player.png");
	sprite->setPosition(ccp(160,240));
	this->addChild(sprite);
	return true;
}