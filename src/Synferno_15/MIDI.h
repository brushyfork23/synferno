#ifndef MIDI_h
#define MIDI_h

#include <Arduino.h>

#include <SoftwareSerial.h>
#include <Metro.h>

// pins
#define MIDI_RX_PIN 10
#define MIDI_TX_PIN 11

// Relevant MIDI messages
#define MIDI_CLOCK 248
#define MIDI_START 250
#define MIDI_CONTINUE 251
#define MIDI_STOP 252

#define MIDI_CLOCKS_PER_BEAT 24

#define SIMULATE_MIDI 1
#define SIMULATE_BPM 120.0

class MIDI{
  public:
    void begin();

    boolean update();

    byte getCounter();
    
  private:
    byte clockCounter;
  
};

#endif
