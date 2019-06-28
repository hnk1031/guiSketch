#pragma once

#include "ofMain.h"
#include "ofxGui.h" //ofxGui.hの読み込み

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    ofxPanel gui; //GUIパネルの初期化
    
    //GUIスライダーの初期化
    ofxFloatSlider radius; //円の半径
    ofxColorSlider color; //円の色
    ofxVec2Slider position; //円の位置
};
