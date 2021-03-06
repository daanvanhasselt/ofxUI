/********************************************************************************** 
 
 Copyright (C) 2012 Syed Reza Ali (www.syedrezaali.com)
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of
 this software and associated documentation files (the "Software"), to deal in
 the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 of the Software, and to permit persons to whom the Software is furnished to do
 so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 
 **********************************************************************************/

#ifndef OFXUI_FPS_SLIDER
#define OFXUI_FPS_SLIDER

#include "ofxUISlider.h"

class ofxUIFPSSlider : public ofxUISlider
{
public:        
    ofxUIFPSSlider(string _name, float w, float h, float _max = 400.0, float x = 0, float y = 0) 
        : ofxUISlider(_name, 0.0, _max, 0.0, w, h, x, y)
    {
    }
    
    // DON'T USE THE NEXT CONSTRUCTORS
    // This is maintained for backward compatibility and will be removed on future releases

    ofxUIFPSSlider(float x, float y, float w, float h, float _min, float _max, float _value, string _name) 
        : ofxUISlider(_name, _min, _max, _value, w, h, x, y)
    {
//        ofLogWarning("OFXUIFPSSLIDER: DON'T USE THIS CONSTRUCTOR. THIS WILL BE REMOVED ON FUTURE RELEASES.");
    }
    
    ofxUIFPSSlider(float w, float h, float _min, float _max, float _value, string _name) 
        : ofxUISlider(_name, _min, _max, _value, w, h, 0, 0)
    {
//        ofLogWarning("OFXUIFPSSLIDER: DON'T USE THIS CONSTRUCTOR. THIS WILL BE REMOVED ON FUTURE RELEASES.");
    }
    
    ofxUIFPSSlider(float x, float y, float w, float h, float _min, float _max, float *_value, string _name) 
        : ofxUISlider(_name, _min, _max, _value, w, h, x, y)
    {
//        ofLogWarning("OFXUIFPSSLIDER: DON'T USE THIS CONSTRUCTOR. THIS WILL BE REMOVED ON FUTURE RELEASES.");
    }
    
    ofxUIFPSSlider(float w, float h, float _min, float _max, float *_value, string _name) 
        : ofxUISlider(_name, _min, _max, _value, w, h, 0, 0)
    {
//        ofLogWarning("OFXUIFPSSLIDER: DON'T USE THIS CONSTRUCTOR. THIS WILL BE REMOVED ON FUTURE RELEASES.");
    }

	void update()
	{
        setValue(ofGetFrameRate());   
	}
	
}; 

#endif