//
//  Sphere.hpp
//  2017_0610_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/17.
//
//

#pragma once
#include "ofMain.h"
#include "music.hpp"

#define  NUM 1500

class sphere{

public:
    void setup();
    void draw();
    
    
    //球体の色を変える
    void func_t(int &u);
    
    //球体を表示
    ofSpherePrimitive sphere[NUM];
    
    
    //色を生成
    //配列化できる?
    int red[NUM];
    int green[NUM];
    int blue[NUM];
    
    //keyを押して切り替えれるようにする
    int count_press[3] = {0, 0, 0};
    
    music mus;


};
