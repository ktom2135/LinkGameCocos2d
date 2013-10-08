#ifndef __MYLAYER_H__
#define __MYLAYER_H__

#include "cocos2d.h"

USING_NS_CC;


class MyLayer : public CCLayer
{
public:
	bool init();

	CREATE_FUNC(MyLayer);
};

#endif __MYLAYER_H__