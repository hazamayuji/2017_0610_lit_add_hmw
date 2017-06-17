//
//  move_camera.cpp
//  2017_0610_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/14.
//
//

#include "move_camera.hpp"
using namespace std;

//課題
//swith文かwhile文で書いて同じような処理を全てまとめれるようにする?


void move_camera::move_right(){
    //right = 'd' = [1]
    if (press_move_key[1] == true){
        cam_pos[0] += spe_cam_pos[1];
        
          //早すぎる
//        spe_cam_pos[1] += acc_cam_pos[1];
//        acc_cam_pos[1] += 0.1;

    }
    cam.setPosition(cam_pos[0], cam_pos[1], cam_pos[2]);

    
}

void move_camera::cout_over(){
    if ( cam_pos[0] > 1000 ){
        //画面で行きすぎ！ということを言ってあげる
    } else if ( cam_pos[0] < 1000 && spe_cam_pos[1] > 0) {
        //とくになにもしない
    }
    
}
