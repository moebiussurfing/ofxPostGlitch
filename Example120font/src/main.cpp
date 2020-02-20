#include "ofMain.h"
#include "ofApp.h"
//#include "ofAppGLFWWindow.h"

//========================================================================
int main()
{
    ofSetupOpenGL(1920, 1080, OF_WINDOW);
    ofRunApp(new ofApp());

    //ofGLFWWindowSettings settings;
    //settings.setGLVersion(3, 2);
    //settings.setSize(1920, 1080);
    //settings.setPosition(ofVec2f(0,0));
    //settings.resizable = true;
    //shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);
    //shared_ptr<ofApp> mainApp(new ofApp);
    //ofRunApp(mainWindow, mainApp);
    //ofRunMainLoop();

    //ofGLFWWindowSettings settings;
    //settings.setGLVersion(2, 1);
    //settings.setSize(1920, 1080);
    //settings.resizable = true;
    //shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);
    //shared_ptr<ofApp> mainApp(new ofApp);
    //ofRunApp(mainWindow, mainApp);
    //ofRunMainLoop();

}
