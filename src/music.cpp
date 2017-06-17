//
//  music.cpp
//  2017_0610_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/17.
//
//

#include "music.hpp"
using namespace std;

void music::setup(){
    //音楽に関すること
    soundplayer.load("aa.mp3");
    soundplayer.setLoop(true);
    soundplayer.setVolume(1.0);
    soundplayer.play();

}

void music::update(){

    //音楽に関すること(特に音楽の音量から得る値に関して)
    volume = ofSoundGetSpectrum(1);
    music_volume = volume[0]*800;

}
