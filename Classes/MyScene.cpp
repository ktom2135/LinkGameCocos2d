#include "MyScene.h"
#include "MyLayer.h"

USING_NS_CC;

CCScene* MyScene::scene()
{
	CCScene* scene = CCScene::create();
	MyLayer* layer = MyLayer::create();

	scene->addChild(layer);


	return scene;
}
