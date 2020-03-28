#include "asf.h"
#include "constants.h"
#include "structs.h"

void play_note(note note_to_play, int bpm){
	if(!note_to_play.freq){
		delay_us(60*1000000*note_to_play.tempo/bpm);
	}
	int n_loops = (60*note_to_play.tempo*note_to_play.freq)/bpm;
	int delay_value = 1000000/note_to_play.freq/2;
	pio_clear(PIOC, LED_PIO_IDX_MASK);
	for(int i=0; i < n_loops; i++){
		pio_set(PIOD, OUT_PIO_IDX_MASK);
		delay_us(delay_value);
		pio_clear(PIOD, OUT_PIO_IDX_MASK);
		delay_us(delay_value);
	}
	pio_set(PIOC, LED_PIO_IDX_MASK);
}

void play_song_part(song_part song_part_to_play, volatile char* pause_flag){
	int n = 0;
	while (song_part_to_play.notes[n].tempo){
		n++;
	}
	for(int i=0; i < n; i++){
		if(*pause_flag) return;
		play_note(song_part_to_play.notes[i], song_part_to_play.bpm);
		delay_ms(25);
	}
};

void play_song(song_part song[], volatile char* pause_flag){
	int n = 0;
	while (song[n].bpm){
		n++;
	}
	for(int i=0; i < n; i++){
		play_song_part(song[i], pause_flag);
	}
}

void pio_init(pio_struct pio[], int n){
	for(int i = 0; i < n; i++){
		pmc_enable_periph_clk(pio[i].id);
		pio_configure(pio[i].pio, pio[i].output ? PIO_OUTPUT_1 : PIO_INPUT, pio[i].mask, pio[i].output ? PIO_DEFAULT : PIO_PULLUP);
	}
}

void pin_toggle(Pio *pio, uint32_t mask){
	if(pio_get_output_data_status(pio, mask))
	pio_clear(pio, mask);
	else
	pio_set(pio,mask);
}
