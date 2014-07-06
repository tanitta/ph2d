#pragma once

#include "ofMain.h"
#include "KineticModel.hpp"
class ofApp : public ofBaseApp{
	private:
		// entity();
		py2d::KineticModel entity;
	public:
		void setup(){
			ofSetWindowTitle("py2d");
			
			entity.differenceTime = 0.1;
		};
		void update(){
			entity.AddForce(ofVec3f(0,9.8,0));
			entity.update();
		};
		void draw(){
			entity.draw();
		};

		void keyPressed(int key){};
		void keyReleased(int key){};
		void mouseMoved(int x, int y ){};
		void mouseDragged(int x, int y, int button){};
		void mousePressed(int x, int y, int button){};
		void mouseReleased(int x, int y, int button){};
		void windowResized(int w, int h){};
		void dragEvent(ofDragInfo dragInfo){};
		void gotMessage(ofMessage msg){};
		
};
