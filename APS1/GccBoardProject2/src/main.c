#include "asf.h"
#include "note_frequencies.h"
#include "songs.h"
#include "structs.h"
#include "constants.h"
#include "functions.h"

volatile char play_flag;
volatile char pause_flag;
volatile int song_id;
Pio* oleds[] = {LED2_PIO, LED1_PIO, LED3_PIO};
long oleds_mask[] = {LED2_IDX_MASK, LED1_IDX_MASK, LED3_IDX_MASK};

void play_callback(){
	play_flag = 1;
}

void pause_callback(){
	pause_flag = 1;
}

void next_callback(){
	pin_toggle(oleds[song_id], oleds_mask[song_id]);
	if(song_id == 2){
		song_id = 0;
	} else{
		song_id ++;
	}
	pin_toggle(oleds[song_id], oleds_mask[song_id]);
	pause_flag = 1;
}

void init(){
	// Initialize the board clock
	sysclk_init();

	// Desativa WatchDog Timer
	WDT->WDT_MR = WDT_MR_WDDIS;
	
	pio_struct led_placa_pio = {LED_PIO, LED_PIO_ID, LED_PIO_IDX, LED_PIO_IDX_MASK, 1};
	pio_struct led1_pio = {LED1_PIO, LED1_PIO_ID, LED1_IDX, LED1_IDX_MASK, 1};
	pio_struct led2_pio = {LED2_PIO, LED2_PIO_ID, LED2_IDX, LED2_IDX_MASK, 1};
	pio_struct led3_pio = {LED3_PIO, LED3_PIO_ID, LED3_IDX, LED3_IDX_MASK, 1};
	pio_struct out_pio = {OUT_PIO, OUT_PIO_ID, OUT_PIO_IDX, OUT_PIO_IDX_MASK, 1};
	pio_struct play_pio = {PLAY_BTN_PIO, PLAY_BTN_PIO_ID, PLAY_BTN_PIO_ID, PLAY_BTN_PIO_IDX_MASK, 0};
	pio_struct pause_pio = {PAUSE_BTN_PIO, PAUSE_BTN_PIO_ID, PAUSE_BTN_PIO_IDX, PAUSE_BTN_PIO_IDX_MASK, 0};
	pio_struct next_pio = {NEXT_BTN_PIO, NEXT_BTN_PIO_ID, NEXT_BTN_PIO_IDX, NEXT_BTN_PIO_IDX_MASK, 0};
		
	pio_struct pios[] = {led_placa_pio, led1_pio, led2_pio, led3_pio, out_pio, play_pio, pause_pio, next_pio};
		
	pio_init(pios, 8);
	
	//Configurando callbacks e interrupcoes
	pio_handler_set(PLAY_BTN_PIO, PLAY_BTN_PIO_ID, PLAY_BTN_PIO_IDX_MASK, PIO_IT_FALL_EDGE, play_callback);
	pio_enable_interrupt(PLAY_BTN_PIO, PLAY_BTN_PIO_IDX_MASK);
	NVIC_EnableIRQ(PLAY_BTN_PIO_ID);
	NVIC_SetPriority(PLAY_BTN_PIO_ID, 4);
	
	pio_handler_set(PAUSE_BTN_PIO, PAUSE_BTN_PIO_ID, PAUSE_BTN_PIO_IDX_MASK, PIO_IT_FALL_EDGE, pause_callback);
	pio_enable_interrupt(PAUSE_BTN_PIO, PAUSE_BTN_PIO_IDX_MASK);
	NVIC_EnableIRQ(PAUSE_BTN_PIO_ID);
	NVIC_SetPriority(PAUSE_BTN_PIO_ID, 4);
	
	pio_handler_set(NEXT_BTN_PIO, NEXT_BTN_PIO_ID, NEXT_BTN_PIO_IDX_MASK, PIO_IT_FALL_EDGE, next_callback);
	pio_enable_interrupt(NEXT_BTN_PIO, NEXT_BTN_PIO_IDX_MASK);
	NVIC_EnableIRQ(NEXT_BTN_PIO_ID);
	NVIC_SetPriority(NEXT_BTN_PIO_ID, 4);
	
	pio_set(PIOC, LED_PIO_IDX_MASK);
	pio_clear(PIOD, OUT_PIO_IDX_MASK);
}
		

int main(void)
{
	init();
	play_flag = 0;
	pause_flag = 0;
	song_id = 0;
	pin_toggle(oleds[song_id], oleds_mask[song_id]);
	//pin_toggle(LED3_PIO, LED3_IDX_MASK);
	//song_part songs[3][10] = {cheia_de_manias, pirates_of_the_caribbean, imperial_march};
	while (1){
		if(play_flag){
			//play_song(songs[song_id], &pause_flag);
			if(song_id == 0){
				play_song(cheia_de_manias, &pause_flag);
			 }
			else if(song_id == 1){
				play_song(imperial_march, &pause_flag);	
			}
			else if(song_id == 2){
				play_song(pirates_of_the_caribbean, &pause_flag);
			}
		play_flag = 0;
		}
		if(pause_flag){
			pause_flag = 0;
		}
	}
	return 0;
}