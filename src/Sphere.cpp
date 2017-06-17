
//
//  Sphere.cpp
//  2017_0610_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/17.
//
//

#include "Sphere.hpp"
using namespace std;

void sphere::setup(){
    //たくさんの球体に関すること
    for(int i = 0; i < NUM; i++){
        //立方体の中のランダムな位置に球体を置く
        sphere[i].setPosition(ofRandom(-1000,1000), ofRandom(-1000,1000),ofRandom(-1000, 1000));
        //大きさと解像度をセット
        //resolution->解像度
        sphere[i].set(20, 10);
        
        //色に関すること
        red[i] = ofRandom(0,255);
        green[i] = ofRandom(0,255);
        blue[i] = ofRandom(0,255);
    }
}

void sphere::draw(){
    
    //たくさんの球体に関すること
    for(int i = 0; i < NUM; i++){
        //tを押した時に起こる機能
        func_t(i);
        //今回は枠だけ描画
        sphere[i].drawWireframe();
    }
}

void sphere::func_t(int &u){
    //music_volumeを変更させる
    mus.update();
    
    //球体の色を変える
    if(count_press[0] % 3 == 1){
        ofSetColor(red[u], green[u], blue[u]);
    }else if(count_press[0] % 3 == 2){
        ofSetColor(red[u], green[u], blue[u], mus.music_volume);
    }else{
        ofSetColor(255, 255, 255);
    }
}
