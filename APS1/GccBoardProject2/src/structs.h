#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
	int freq;
	int tempo;
} note;

typedef struct {
	note notes[100];
	int bpm;
} song_part;

typedef struct {
	Pio* pio;
	int id;
	int idx;
	int mask;
	int output;
} pio_struct;

#endif // STRUCTS_H
