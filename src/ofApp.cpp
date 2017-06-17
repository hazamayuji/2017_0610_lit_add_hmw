#include "ofApp.h"
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);
    ofSetFrameRate(60);
    
    //画面の垂直同期をオンに->意味はメモに
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();
    
    //仮想関数をつくる！
    //音楽に関すること
    mus.setup();
    
    //球体に関すること
    sph.setup();
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //音楽
    mus.update();
    
    //移動
    mov_cam.move_right();
}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofcameraは別々にインスタンス化しない
    mov_cam.cam.begin();

    sph.draw();

    mov_cam.cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'f') {
        ofToggleFullscreen();
    }
    
    if (key == 't') {
        sph.count_press[0]++;
        press_key[0] = true;
    }
    
    if (key == 's') {
        sph.count_press[1]++;
        press_key[1] = true;
    }
    
    
    //カメラを動かす
    //前
    if(key == 'w'){
        mov_cam.press_move_key[0] = true;
    }
    
    //右
    if(key == 'd'){
        mov_cam.press_move_key[1] = true;
    }

    //遺産
    //mov_cam.keyPressed(ofKeyEventArgs& eventArgs);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    //カメラを動かす
    //前
    if (key == 'w') {
        mov_cam.press_move_key[3] = false;
    }

    //右
    if (key == 'd') {
        mov_cam.press_move_key[1] = false;
    }
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


//--------------------------------------------------------------
/*
 void ofApp::func_s(){
 if(count_press[1] % 2 == 1){
 y++;
 ofRotateY(-y);
 }
*/


