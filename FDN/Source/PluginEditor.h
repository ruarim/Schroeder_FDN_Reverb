/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "ReverbControls.h"

//==============================================================================
/**
*/
class FDNAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    FDNAudioProcessorEditor (FDNAudioProcessor&);
    ~FDNAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    FDNAudioProcessor& audioProcessor;
    ReverbControls revControls;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FDNAudioProcessorEditor)
};
