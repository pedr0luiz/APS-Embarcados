#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "structs.h"

// Configs do Led
#define LED_PIO PIOC
#define LED_PIO_ID 12
#define LED_PIO_IDX 8
#define LED_PIO_IDX_MASK (1 << LED_PIO_IDX)

// Configs do speaker -> PD26
#define OUT_PIO PIOD
#define OUT_PIO_ID ID_PIOD
#define OUT_PIO_IDX 26
#define OUT_PIO_IDX_MASK (1 << OUT_PIO_IDX)

// Configs do botao (play) -> PD28
#define PLAY_BTN_PIO PIOD
#define PLAY_BTN_PIO_ID ID_PIOD
#define PLAY_BTN_PIO_IDX 28
#define PLAY_BTN_PIO_IDX_MASK (1 << PLAY_BTN_PIO_IDX)

// Configs do botao (pause) -> PC31
#define PAUSE_BTN_PIO PIOC
#define PAUSE_BTN_PIO_ID ID_PIOC
#define PAUSE_BTN_PIO_IDX 31
#define PAUSE_BTN_PIO_IDX_MASK (1 << PAUSE_BTN_PIO_IDX)

// Configs do botao (next) -> PA19
#define NEXT_BTN_PIO PIOA
#define NEXT_BTN_PIO_ID ID_PIOA
#define NEXT_BTN_PIO_IDX 19
#define NEXT_BTN_PIO_IDX_MASK (1 << NEXT_BTN_PIO_IDX)

// LED1 PA0
#define LED1_PIO      PIOA
#define LED1_PIO_ID   ID_PIOA
#define LED1_IDX      0
#define LED1_IDX_MASK (1 << LED1_IDX)

// LED2 PC30
#define LED2_PIO      PIOC
#define LED2_PIO_ID   ID_PIOC
#define LED2_IDX      30
#define LED2_IDX_MASK (1 << LED2_IDX)

// LED3 PB2
#define LED3_PIO      PIOB
#define LED3_PIO_ID   ID_PIOB
#define LED3_IDX      2
#define LED3_IDX_MASK (1 << LED3_IDX)

#endif // CONSTANTS_H