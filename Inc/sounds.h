/*
 * sounds.h
 *
 *  Created on: May 13, 2020
 *      Author: Alka
 */

#ifndef SOUNDS_H_
#define SOUNDS_H_

#include "main.h"

void playStartupTune(void);
void playPowerDownTune(void);
void playThermalWarningTune(void);
void playInputTune(void);
void playBrushedStartupTune(void);
void playInputTune2(void);
void playBeaconTune3(void);
void playDuskingTune(void);
void playDefaultTone(void);
void playChangedTone(void);
void playEnterLearnModeTune(void);
void playValueSetTune(void);
void playLearnModeTune(void);
void playEndLearnModeTune(void);
void playSingleBeep(void);

void saveEEpromSettings(void);
void setVolume(uint8_t volume);

extern void delayMillis();




#endif /* SOUNDS_H_ */




