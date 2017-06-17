#pragma once
#include "ofMain.h"
#include "move_camera.hpp"
#include "music.hpp"
#include "Sphere.hpp"
//つくる
//#include "virtual_func.hpp"



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
    
    
    //押したか判定
    bool press_key[4] = {false, false, false, false};

    //クラスをインスタンス化
    move_camera mov_cam;
    music mus;
    sphere sph;

  
};
