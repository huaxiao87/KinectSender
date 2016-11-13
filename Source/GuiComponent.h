/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.2.4

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_F1E5D9BB3E654E28__
#define __JUCE_HEADER_F1E5D9BB3E654E28__

//[Headers]     -- You can add your own extra header files here --
#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "resource.h"
#include "kinect.h"
#include <vector>

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class GuiComponent  : public Component,
                      public ButtonListener,
					  public Thread
{
public:
    //==============================================================================
    GuiComponent ();
    ~GuiComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void run();
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* _7_png;
    static const int _7_pngSize;
    static const char* kinect2_png;
    static const int kinect2_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	void update();
	HRESULT InitializeDefaultSensor();

	ScopedPointer<bool> joints_availability;
	// Current Kinect
	IKinectSensor*          m_pKinectSensor;
	ICoordinateMapper*      m_pCoordinateMapper;

	// Body reader
	IBodyFrameReader*       m_pBodyFrameReader;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ToggleButton> neck;
    ScopedPointer<ToggleButton> hipLeft;
    ScopedPointer<ToggleButton> handLeft;
    ScopedPointer<ToggleButton> handRight;
    ScopedPointer<ToggleButton> wristRight;
    ScopedPointer<ToggleButton> spineBase;
    ScopedPointer<ToggleButton> spineShoulder;
    ScopedPointer<ToggleButton> head;
    ScopedPointer<ToggleButton> wristLeft;
    ScopedPointer<ToggleButton> elbowRight;
    ScopedPointer<ToggleButton> shoulderLeft;
    ScopedPointer<ToggleButton> shoulderRight;
    ScopedPointer<ToggleButton> spineMid;
    ScopedPointer<ToggleButton> elbowLeft;
    ScopedPointer<ToggleButton> ankleRight;
    ScopedPointer<ToggleButton> kneeLeft;
    ScopedPointer<ToggleButton> footLeft;
    ScopedPointer<ToggleButton> ankleLeft;
    ScopedPointer<ToggleButton> hipRight;
    ScopedPointer<ToggleButton> kneeRight;
    ScopedPointer<TextEditor> textEditor;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;
    ScopedPointer<TextEditor> textEditor2;
    ScopedPointer<TextButton> textButton;
    ScopedPointer<TextButton> textButton2;
    ScopedPointer<TextButton> textButton3;
    ScopedPointer<TextButton> textButton4;
    ScopedPointer<ToggleButton> footRight;
    ScopedPointer<ToggleButton> handTipLeft;
    ScopedPointer<ToggleButton> thumbLeft;
    ScopedPointer<ToggleButton> handTipRight;
    ScopedPointer<ToggleButton> thumbRight;
    Image cachedImage_kinect2_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GuiComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_F1E5D9BB3E654E28__
