#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60); //フレームレートを60fpsにする
    ofBackground(0, 0, 0); //背景を黒色にする
    ofSetCircleResolution(32); //円の解像度
    
    //色のスライダーの設定
    ofColor initColor = ofColor(0,127,255,255); //colorの初期値
    ofColor minColor = ofColor(0,0,0,0); //colorの最小値
    ofColor maxColor = ofColor(255,255,255,255); //colorの最大値
    
    //位置のスライダーの設定
    ofVec2f initPos = ofVec2f(ofGetWidth()/2, ofGetHeight()/2); //positionの初期値
    ofVec2f minPos = ofVec2f(0,0); //positionの最小値
    ofVec2f maxPos = ofVec2f(ofGetWidth(), ofGetHeight()); //positionの最大値
    
    
    gui.setup(); //GUIのパネルを設置
    gui.add(radius.setup("radius", 200, 0, 400)); //radiusのラベル
    gui.add(color.setup("color", initColor, minColor, maxColor)); //colorのラベル
    gui.add(position.setup("position", initPos, minPos, maxPos)); //positionのラベル
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //パラメータを適用して円を描く
    ofSetColor(color); //色を適用する
    ofDrawCircle(ofVec2f(position),radius); //円を描く
    
    //GUIを表示
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
