#include "structs.h"

song_part imperial_march_intro = { {
	{NOTE_A4, 2}, {NOTE_A4, 2}, {NOTE_A4, 2}, {NOTE_F4, 1}, {NOTE_C5, 1},
	{NOTE_A4, 2}, {NOTE_F4, 1}, {NOTE_C5, 1}, {NOTE_A4, 4},
	{NOTE_E5, 2}, {NOTE_E5, 2}, {NOTE_E5, 2}, {NOTE_F5, 1}, {NOTE_C4, 1},
	{NOTE_GS4, 2}, {NOTE_F4, 1}, {NOTE_C5, 1}, {NOTE_A4, 4}}, 240};

	song_part imperial_march[] = {
		{
			{
				{NOTE_A4, 2}, {NOTE_A4, 2}, {NOTE_A4, 2}, {NOTE_F4, 1}, {NOTE_C5, 1},
				{NOTE_A4, 2}, {NOTE_F4, 1}, {NOTE_C5, 1}, {NOTE_A4, 4},
				{NOTE_E5, 2}, {NOTE_E5, 2}, {NOTE_E5, 2}, {NOTE_F5, 1}, {NOTE_C5, 1},
				{NOTE_GS4, 2}, {NOTE_F4, 1}, {NOTE_C5, 1}, {NOTE_A4, 4}, {REST, 0}
			},
			240
		},
		{
			{
				{NOTE_A5, 2}, {NOTE_A4, 1}, {NOTE_A4, 1}, {NOTE_A5, 2}, {NOTE_GS5, 1}, {NOTE_G5, 1},
				{NOTE_FS5, 1}, {NOTE_F5, 1}, {NOTE_FS5, 1}, {NOTE_AS4, 1},{NOTE_DS5, 2}, {NOTE_D5, 1}, {NOTE_CS5, 1},
				{NOTE_C5, 1}, {NOTE_B4, 1}, {NOTE_C5, 1}, {NOTE_F4, 1}, {NOTE_FS4, 2}, {NOTE_F4, 1}, {NOTE_FS4, 1},
				{NOTE_C5, 2}, {NOTE_A4, 1}, {NOTE_C5, 1}, {NOTE_E5, 4}, {REST, 0}
			},
			240
		},
		{
			{{REST, 0}},
			0
			
		}
	};

	song_part pirates_of_the_caribbean[] = {
		{
			{
				{NOTE_E4, 1}, {NOTE_G4, 1}, {NOTE_A4, 2}, {NOTE_A4, 1}, {REST, 1},
				{NOTE_A4, 1}, {NOTE_B4, 1}, {NOTE_C5, 2}, {NOTE_C5, 1}, {REST, 1},
				{NOTE_C5, 1}, {NOTE_D5, 1}, {NOTE_B4, 2}, {NOTE_B4, 1}, {REST, 1},
				{NOTE_A4, 1}, {NOTE_G4, 1}, {NOTE_A4, 3}, {REST, 1},
				
				{NOTE_E4, 1}, {NOTE_G4, 1}, {NOTE_A4, 2}, {NOTE_A4, 1}, {REST, 1},
				{NOTE_A4, 1}, {NOTE_B4, 1}, {NOTE_C5, 2}, {NOTE_C5, 1}, {REST, 1},
				{NOTE_C5, 1}, {NOTE_D5, 1}, {NOTE_B4, 2}, {NOTE_B4, 1}, {REST, 1},
				{NOTE_A4, 1}, {NOTE_G4, 1}, {NOTE_A4, 3}, {REST, 1},
				
				{NOTE_E4, 1}, {NOTE_G4, 1}, {NOTE_A4, 2}, {NOTE_A4, 1}, {REST, 1},
				{NOTE_A4, 1}, {NOTE_C5, 1}, {NOTE_D5, 2}, {NOTE_D5, 1}, {REST, 1},
				{NOTE_D5, 1}, {NOTE_E5, 1}, {NOTE_F5, 2}, {NOTE_F5, 1}, {REST, 1},
				{NOTE_E5, 1}, {NOTE_D5, 1}, {NOTE_E5, 1}, {NOTE_A4, 2}, {REST, 1},
				
				{NOTE_A4, 1}, {NOTE_B4, 1}, {NOTE_C5, 2}, {NOTE_C5, 1}, {REST, 1},
				{NOTE_D5, 2}, {NOTE_E5, 1}, {NOTE_A4, 2}, {REST, 1},
				{NOTE_A4, 1}, {NOTE_C5, 1}, {NOTE_B4, 2}, {NOTE_B4, 1}, {REST, 1},
				{NOTE_C5, 1}, {NOTE_A4, 1}, {NOTE_B4, 3}, {REST, 3}, {REST, 0}
			},
			400
		},
		{
			{{REST, 0}},
			0
			
		}
	};

// 	song_part intro = {
// 		{
// 			{NOTE_AS4, 1}, {NOTE_AS4, 1}, {NOTE_A4, 1}, {NOTE_G4, 1}, {NOTE_AS4, 2}, {REST, 2},
// 			{REST, 0}
// 		},
// 		400
// 	};
// 
// 	song teste = {intro, intro, intro, intro};

song_part cheia_de_manias[] = {
 	{
 		{
 			{NOTE_AS4, 1}, {NOTE_AS4, 1}, {NOTE_A4, 1}, {NOTE_G4, 1}, {NOTE_AS4, 2}, {REST, 2},
 			{NOTE_AS4, 1}, {NOTE_AS4, 1}, {NOTE_A4, 1}, {NOTE_G4, 1}, {NOTE_AS4, 1}, {NOTE_A4, 1}, {NOTE_G4, 1}, {NOTE_A4, 2},
 			{NOTE_G4, 1}, {NOTE_F4, 1}, {NOTE_G4, 2}, {NOTE_F4, 1}, {NOTE_D4, 1}, {NOTE_F4, 2},
 			{NOTE_D4, 1}, {NOTE_D4, 1}, {NOTE_D4, 1}, {NOTE_F4, 1}, {NOTE_D4, 1}, {NOTE_F4, 1}, {NOTE_G4, 3},
 			{NOTE_AS4, 1}, {NOTE_AS4, 1}, {NOTE_A4, 1}, {NOTE_G4, 1}, {NOTE_AS4, 2},
 			{NOTE_AS4, 1}, {NOTE_AS4, 1}, {NOTE_A4, 1}, {NOTE_G4, 1}, {NOTE_D5, 1}, {NOTE_C5, 1}, {NOTE_AS4, 1}, {NOTE_AS4, 1},
 			{NOTE_C5, 1}, {NOTE_A4, 1}, {NOTE_A4, 1}, {NOTE_A4, 1}, {REST, 1}, {NOTE_A4, 1}, {NOTE_C5, 1}, {NOTE_A4, 1},
 			{NOTE_A4, 1}, {NOTE_A4, 2}, {NOTE_A4, 1}, {NOTE_F4, 1}, {NOTE_D4, 1}, {NOTE_F4, 1}, {NOTE_G4, 1},
 			{REST, 0}
 		},
 		400
 	},
 	{
 		{
 			{REST, 1}, {NOTE_AS4, 2}, {NOTE_A4, 1}, {NOTE_AS4, 1}, {NOTE_A4, 2}, {NOTE_AS4, 2}, {NOTE_A4, 2}, {NOTE_G4, 5},
 			{REST, 3}, {NOTE_F4, 1}, {NOTE_F4, 1}, {NOTE_F4, 2}, {NOTE_A4, 2}, {NOTE_F4, 3},
 			{REST, 3}, {NOTE_AS4, 1}, {NOTE_AS4, 1}, {NOTE_AS4, 2}, {NOTE_A4, 1}, {NOTE_AS4, 2}, {NOTE_A4, 1}, {NOTE_G4, 5},
 			{REST, 3}, {NOTE_F4, 1}, {NOTE_F4, 1}, {NOTE_F4, 1}, {NOTE_F4, 1}, {NOTE_A4, 2}, {NOTE_F4, 3}, {REST, 4},

 			{REST, 3}, {NOTE_AS4, 1}, {NOTE_AS4, 1}, {NOTE_AS4, 2}, {NOTE_A4, 1}, {NOTE_AS4, 2}, {NOTE_A4, 1}, {NOTE_G4, 2},
 			{NOTE_F4, 2}, {NOTE_A4, 2}, {REST, 1}, {NOTE_A4, 1}, {NOTE_A4, 1}, {NOTE_A4, 2}, {NOTE_A4, 1},

 			{NOTE_C5, 3}, {NOTE_C5, 2}, {NOTE_C5, 2}, {NOTE_AS4, 2}, {REST, 2},
 			{NOTE_AS4, 1}, {NOTE_AS4, 1}, {NOTE_AS4, 2}, {NOTE_A4, 1}, {NOTE_AS4, 2}, {NOTE_A4, 1}, {NOTE_G4, 2}, {NOTE_F4, 2},
 			{NOTE_A4, 2}, {REST, 1}, {NOTE_A4, 1}, {NOTE_A4, 1}, {NOTE_A4, 2}, {NOTE_A4, 1},
 			{NOTE_C5, 3}, {NOTE_C5, 2}, {NOTE_C5, 2}, {NOTE_AS4, 2}, {NOTE_A4, 2}, {NOTE_G4, 5},
 			{REST, 0}
 		},
 		400
 	},
 	{
 		{{REST, 0}},
 		0

 	}
};