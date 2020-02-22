//
//  ofxPostGlitch.h
//
//  Created by maxilla inc. on 2013/02/01.
//
//

#ifndef __ofxPostGlitchExample__ofxPostGlitch__
#define __ofxPostGlitchExample__ofxPostGlitch__

#include "ofMain.h"

#define GLITCH_NUM 17

enum ofxPostGlitchType{
	OFXPOSTGLITCH_CONVERGENCE,
	OFXPOSTGLITCH_GLOW,
	OFXPOSTGLITCH_SHAKER,
	OFXPOSTGLITCH_CUTSLIDER,
	OFXPOSTGLITCH_TWIST,
	OFXPOSTGLITCH_OUTLINE,
	OFXPOSTGLITCH_NOISE,
	OFXPOSTGLITCH_SLITSCAN,
    OFXPOSTGLITCH_SLITSCAN_ROT,
	OFXPOSTGLITCH_SWELL,
	OFXPOSTGLITCH_INVERT,
	OFXPOSTGLITCH_CR_HIGHCONTRAST,
	OFXPOSTGLITCH_CR_BLUERAISE,
	OFXPOSTGLITCH_CR_REDRAISE,
	OFXPOSTGLITCH_CR_GREENRAISE,
	OFXPOSTGLITCH_CR_REDINVERT,
	OFXPOSTGLITCH_CR_BLUEINVERT,
	OFXPOSTGLITCH_CR_GREENINVERT
};

class ofxPostGlitch{
public:

	ofxPostGlitch(){
		targetBuffer = NULL;
		shader[0].load("ofxPostGlitch/Shaders/convergence");
		shader[1].load("ofxPostGlitch/Shaders/glow");
		shader[2].load("ofxPostGlitch/Shaders/shaker");
		shader[3].load("ofxPostGlitch/Shaders/cut_slider");
		shader[4].load("ofxPostGlitch/Shaders/twist");
		shader[5].load("ofxPostGlitch/Shaders/outline");
		shader[6].load("ofxPostGlitch/Shaders/noise");
		shader[7].load("ofxPostGlitch/Shaders/slitscan");
		shader[8].load("ofxPostGlitch/Shaders/swell");
		shader[9].load("ofxPostGlitch/Shaders/invert");
		shader[10].load("ofxPostGlitch/Shaders/crHighContrast");
		shader[11].load("ofxPostGlitch/Shaders/crBlueraise");
		shader[12].load("ofxPostGlitch/Shaders/crRedraise");
		shader[13].load("ofxPostGlitch/Shaders/crGreenraise");
		shader[14].load("ofxPostGlitch/Shaders/crRedinvert");
		shader[15].load("ofxPostGlitch/Shaders/crBlueinvert");
		shader[16].load("ofxPostGlitch/Shaders/crGreeninvert");
	}

	/* Initialize & set target Fbo */
	void setup(ofFbo* buffer_);

	/* Set target Fbo */
	void setFbo(ofFbo* buffer_);

	/* Switch each effects on/off */
	void setFx(ofxPostGlitchType type_,bool enabled);

	/* Toggle each effects on/off */
	void toggleFx(ofxPostGlitchType type_);

	/* Return current effect's enabled info*/
	bool getFx(ofxPostGlitchType type_);

	/* Apply enable effects to target Fbo */
	void generateFx();
    
    void loadShader();

protected:
	bool		bShading[GLITCH_NUM];
	ofShader	shader[GLITCH_NUM];
	ofFbo*		targetBuffer;
	ofFbo		ShadingBuffer;
	ofPoint		buffer_size;
	float ShadeVal[4];
};

#endif /* defined(__ofxPostGlitchExample__ofxPostGlitch__) */
