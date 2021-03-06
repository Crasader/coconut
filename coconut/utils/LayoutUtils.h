//
//  LayoutUtils.h
//  coconut
//
//  Created by Kubo Ryosuke on 2013/12/04.
//
//

#ifndef coconut_LayoutUtils_h
#define coconut_LayoutUtils_h

#include "cocos2d.h"

namespace coconut {
 
	class LayoutUtils {
	private:
		
		LayoutUtils() {};
		
	public:
		
		static cocos2d::Point visibleOrigin();
		static cocos2d::Size visibleSize();
		static cocos2d::Rect visibleRect();
		
		static cocos2d::Point visibleCenter();
		static cocos2d::Point visibleTopLeft();
		static cocos2d::Point visibleTopRight();
		static cocos2d::Point visibleTopCenter();
		static cocos2d::Point visibleMiddleLeft();
		static cocos2d::Point visibleMiddleRight();
		static cocos2d::Point visibleMiddleCenter();
		static cocos2d::Point visibleBottomLeft();
		static cocos2d::Point visibleBottomRight();
		static cocos2d::Point visibleBottomCenter();
		
		static void alignCenterH(const cocos2d::Point& center, float padding, cocos2d::Node* node0, ...) CC_REQUIRES_NULL_TERMINATION;
		
	};
	
}

#endif
