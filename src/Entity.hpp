#pragma once
#include "ofMain.h"
namespace ph2d{
	class Entity{
	public:
		double mass;
		ofVec2f pos;
		ofVec2f vel;
		ofVec2f acc;
		
		Entity(){};
		virtual ~Entity(){};
		
		void draw();
	};
}