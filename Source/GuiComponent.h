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
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
#define BUFLEN 512  //Max length of buffer

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class GuiComponent  : public Component,
                      public Thread,
                      public TextEditor::Listener,
                      public ButtonListener
{
public:
    //==============================================================================
    GuiComponent ();
    ~GuiComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void run();
	void textEditorReturnKeyPressed(TextEditor &editor);
	void update();
	HRESULT InitializeDefaultSensor();
	void GuiComponent::send_data_with_labels(Joint* joints);
	void GuiComponent::send_data_without_labels(Joint* joints);
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
	bool send_relative = true;
	ScopedPointer<bool> joints_availability = new bool[JointType_Count] { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
	ScopedPointer<bool> coordinates_availability = new bool[3]{ true, true, true };
	int total_joints = 0;
	long long int current_frame = 0;
	char server[15]; //ip address of udp server
	int port = 8888;   //The port on which to listen for incoming data

	struct sockaddr_in si_other;
	int s, slen = sizeof(si_other);
	char buf[BUFLEN];
	char message[BUFLEN];
	WSADATA wsa;

	const string joint_names[25]{ "SpineBase",
		"SpineMid",
		"Neck",
		"Head",
		"ShoulderLeft",
		"ElbowLeft",
		"WristLeft",
		"HandLeft",
		"ShoulderRight",
		"ElbowRight",
		"WristRight",
		"HandRight",
		"HipLeft",
		"KneeLeft",
		"AnkleLeft",
		"FootLeft",
		"HipRight",
		"KneeRight",
		"AnkleRight",
		"FootRight",
		"SpineShoulder",
		"HandTipLeft",
		"ThumbLeft",
		"HandTipRight",
		"ThumbRight" };
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
    ScopedPointer<TextEditor> ip_editor;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;
    ScopedPointer<TextEditor> port_editor;
    ScopedPointer<TextButton> textButton;
    ScopedPointer<TextButton> textButton2;
    ScopedPointer<TextButton> textButton3;
    ScopedPointer<TextButton> textButton4;
    ScopedPointer<ToggleButton> footRight;
    ScopedPointer<ToggleButton> handTipLeft;
    ScopedPointer<ToggleButton> thumbLeft;
    ScopedPointer<ToggleButton> handTipRight;
    ScopedPointer<ToggleButton> thumbRight;
    ScopedPointer<ToggleButton> X;
    ScopedPointer<ToggleButton> Y;
    ScopedPointer<ToggleButton> Z;
    ScopedPointer<ToggleButton> send_labels;
    ScopedPointer<ToggleButton> send_relative_position;
    Image cachedImage_kinect2_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GuiComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_F1E5D9BB3E654E28__
