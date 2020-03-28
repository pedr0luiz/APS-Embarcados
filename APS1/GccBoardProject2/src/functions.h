#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

int play_note(note note_to_play, int bpm);

int play_song_part(song_part song_part_to_play, volatile char* pause_flag);

int play_song(song_part song[], volatile char* pause_flag);

void pio_init(pio_struct pio[], int n);

void play_callback(void);

void pause_callback(void);

void next_callback(void);

void init(void);

void pin_toggle(Pio *pio, uint32_t mask);

#endif /* FUNCTIONS_H_ */