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
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class GuiComponent  : public Component,
                      public ButtonListener
{
public:
    //==============================================================================
    GuiComponent ();
    ~GuiComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* _7_png;
    static const int _7_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ToggleButton> toggleButton8;
    ScopedPointer<ToggleButton> toggleButton2;
    ScopedPointer<ToggleButton> toggleButton3;
    ScopedPointer<ToggleButton> toggleButton4;
    ScopedPointer<ToggleButton> toggleButton5;
    ScopedPointer<ToggleButton> toggleButton6;
    ScopedPointer<ToggleButton> toggleButton7;
    ScopedPointer<ToggleButton> toggleButton9;
    ScopedPointer<ToggleButton> toggleButton10;
    ScopedPointer<ToggleButton> toggleButton11;
    ScopedPointer<ToggleButton> toggleButton12;
    ScopedPointer<ToggleButton> toggleButton13;
    ScopedPointer<ToggleButton> toggleButton14;
    ScopedPointer<ToggleButton> toggleButton15;
    ScopedPointer<ToggleButton> toggleButton16;
    ScopedPointer<ToggleButton> toggleButton17;
    ScopedPointer<ToggleButton> toggleButton18;
    ScopedPointer<ToggleButton> toggleButton19;
    ScopedPointer<ToggleButton> toggleButton20;
    ScopedPointer<ToggleButton> toggleButton21;
    ScopedPointer<TextEditor> textEditor;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;
    ScopedPointer<TextEditor> textEditor2;
    ScopedPointer<TextButton> textButton;
    ScopedPointer<TextButton> textButton2;
    ScopedPointer<TextButton> textButton3;
    ScopedPointer<TextButton> textButton4;
    Image cachedImage__7_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GuiComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_F1E5D9BB3E654E28__
