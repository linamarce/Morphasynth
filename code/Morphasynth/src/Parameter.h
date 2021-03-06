/**
 * Morphasynth
 * 
 * Copyright (C) 2012 Rafael Vega González
 * Copyright (C) 2012 Daniel Gómez Marín
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// TODO: The assignment of numeric values for these is not trivial and needs more discussion

enum Parameter {
   NOISE_LEVEL =0,

   OSCILLATOR1_AMPLITUDE,
   OSCILLATOR1_WAVEFORM,
   OSCILLATOR1_FINETUNE,

   OSCILLATOR2_AMPLITUDE,
   OSCILLATOR2_WAVEFORM,
   OSCILLATOR2_FINETUNE,

   OSCILLATOR3_AMPLITUDE,
   OSCILLATOR3_WAVEFORM,
   OSCILLATOR3_FINETUNE,

   LFO_OSC1_WAVEFORM,
   LFO_OSC1_FREQUENCY,
   LFO_OSC1_TO_AMPLITUDE,
   LFO_OSC1_TO_FREQUENCY,

   LFO_OSC2_WAVEFORM,
   LFO_OSC2_FREQUENCY,
   LFO_OSC2_TO_AMPLITUDE,
   LFO_OSC2_TO_FREQUENCY,

   LFO_OSC3_WAVEFORM,
   LFO_OSC3_FREQUENCY,
   LFO_OSC3_TO_AMPLITUDE,
   LFO_OSC3_TO_FREQUENCY,

	HI_PASS_FREQUENCY,
   HI_PASS_RESONANCE,
   HI_PASS_KEYFOLLOW,
   HI_PASS_CONTOUR,

	HI_PASS_ATTACK,
   HI_PASS_DECAY,
   HI_PASS_SUSTAIN,
   HI_PASS_RELEASE,

   LFO_HI_PASS_WAVEFORM,
   LFO_HI_PASS_FREQUENCY,
   LFO_HI_PASS_AMPLITUDE,

	LO_PASS_FREQUENCY,
   LO_PASS_RESONANCE,
   LO_PASS_KEYFOLLOW,
   LO_PASS_CONTOUR,

	LO_PASS_ATTACK,
   LO_PASS_DECAY,
   LO_PASS_SUSTAIN,
   LO_PASS_RELEASE,

   LFO_LO_PASS_WAVEFORM,
   LFO_LO_PASS_FREQUENCY,
   LFO_LO_PASS_AMPLITUDE,

	ENVELOPE_ATTACK,
   ENVELOPE_DECAY,
   ENVELOPE_SUSTAIN,
   ENVELOPE_RELEASE
};


// The following allows to do stuff like: 
//     std::cout << ENVELOPE_RELEASE << "\n" 
// which will print "ENVELOPE_RELEASE" instead of "18"
// std::ostream& operator<<(std::ostream &o,Parameter n) {
//    switch(n){
//       case NOTE_ON: return o<<"NOTE_ON";
//       case NOTE_OFF: return o<<"NOTE_OFF";
//       case NOISE_LEVEL: return o<<"NOISE_LEVEL";
//       case OSCILLATOR_FREQUENCY: return o<<"OSCILLATOR_FREQUENCY";
//       case OSCILLATOR_AMPLITUDE: return o<<"OSCILLATOR_AMPLITUDE";
//       case OSCILLATOR_WAVEFORM: return o<<"OSCILLATOR_WAVEFORM";
//       case OSCILLATOR_PHASE: return o<<"OSCILLATOR_PHASE";
//       case LOW_PASS_FREQUENCY: return o<<"LOW_PASS_FREQUENCY";
//       case LOW_PASS_RESONANCE: return o<<"LOW_PASS_RESONANCE";
//       case LOW_PASS_GAIN: return o<<"LOW_PASS_GAIN";
//       case LOW_PASS_KEYFOLLOW: return o<<"LOW_PASS_KEYFOLLOW";
//       case HI_PASS_FREQUENCY: return o<<"HI_PASS_FREQUENCY";
//       case HI_PASS_RESONANCE: return o<<"HI_PASS_RESONANCE";
//       case HI_PASS_GAIN: return o<<"HI_PASS_GAIN";
//       case HI_PASS_KEYFOLLOW: return o<<"HI_PASS_KEYFOLLOW";
//       case ENVELOPE_ATTACK: return o<<"ENVELOPE_ATTACK";
//       case ENVELOPE_DECAY: return o<<"ENVELOPE_DECAY";
//       case ENVELOPE_SUSTAIN: return o<<"ENVELOPE_SUSTAIN";
//       case ENVELOPE_RELEASE: return o<<"ENVELOPE_RELEASE";
//       default: return o<<("invalid value"); 
//    }
// }
