#pragma once
#include "ofMain.h"
#include "Chip.hpp"
class ofApp : public ofBaseApp{
	private:
		py2d::Chip chip;
	public:
		void setup(){
			ofSetWindowTitle("py2d");
		};
		void update(){
			// entity.AddForce(ofVec3f(0,9.8,0));
			// entity.update();
			chip.update();
		};
		void draw(){
			// entity.draw();
			chip.draw();
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
