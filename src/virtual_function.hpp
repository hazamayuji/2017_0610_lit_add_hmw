//
//  virtual_function.hpp
//  2017_0610_lit_add_hmw
//
//  Created by 狭間祐至 on 2017/06/15.
//
//

#pragma once
#include "ofMain.h"

class virtual_function: public ofBaseApp{
    
public:
    //仮想関数をつくる
    virtual void keyPressed(int key);
    virtual void keyReleased(int key);
    
};
