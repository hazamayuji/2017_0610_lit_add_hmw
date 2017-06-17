//
//  move_camera.hpp
//  2017_0610_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/14.
//
//

#pragma once
#include "ofMain.h"
//#include "virtual_function.hpp"

class move_camera{

public:
    void move_right();
    void cout_over();
    
    
    //押されたか判定
    bool press_move_key[4] = {false, false, false, false};

    //カメラの座標
    float cam_pos[3] = {0,0,0};
    float spe_cam_pos[3] = {7,5,2};
    float acc_cam_pos[3] = {1,1,1};

    //インスタンス化
    ofCamera cam;

};

