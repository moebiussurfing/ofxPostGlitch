#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGLFWWindow.h"

//========================================================================
int main( ){
    
    ofGLFWWindowSettings settings;
    
    settings.setGLVersion(3, 2);
    settings.setSize(1024, 512);
    settings.setPosition(ofVec2f(100,0));
    settings.resizable = true;
    shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);
    
    shared_ptr<ofApp> mainApp(new ofApp);
    ofRunApp(mainWindow, mainApp);
    ofRunMainLoop();
    
}
