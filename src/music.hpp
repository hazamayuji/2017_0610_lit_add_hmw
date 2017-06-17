//
//  music.hpp
//  2017_0610_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/17.
//
//

#pragma once
#include "ofMain.h"

class music{

public:
    void setup();
    void update();

    //音楽に関すること
    int music_volume = 0;
    float *volume;
    ofSoundPlayer soundplayer;

};
