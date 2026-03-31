// APSC 142 Engineering Programming Project Starter Code
// Copyright Sean Kauffman 2024

#include <stdio.h>
#include <stdlib.h>

#include "defines.h"
#include "colours.h"
#include "map.h"
#include "string.h"

#define BUFFER_SIZE 10


extern char *map;
extern int width, height;

/**
 * You should use this function to print out individual characters
 * in the colours used in the demo.
 * @param c
 */
static void printc(char c) {
    switch (c) {
        case WALL:
            change_text_colour(BLUE);
            break;
        case MINOTAUR:
            change_text_colour(MAGENTA);
            break;
        case PLAYER:
            change_text_colour(YELLOW);
            break;
        default:
            change_text_colour(WHITE);
    }
    printf("%c", c);
}

void print_map(void) {



    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c ",map[i*width+j]);
            if (j < width-1) {
                printf(" ");
            }

        }
        printf("\n");

    }


}

void print_revealed_map(int player_y, int player_x) {
    // Only the map within PLAYER_VISION_DISTANCE of the player (including diagonals) should be printed
}

int locate_character(char character, int* character_y, int* character_x) {
    // Attempt to find the character in the map and return a status code indicating

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j < width-1) {
                printf(" ");
            }
            if (map[i*width+j] ==  character) {
                *character_x = i;
                *character_y = j;
                return FOUND_CHARACTER;
            }
        }
        printf("\n");
    }
}


char *load_map(char *filename, int *map_height, int *map_width) {
    FILE *map = fopen(filename, "r");
    char *oneD = malloc( (*map_width) *(*map_height) * sizeof(char));

    int width = 0;
    char temp;
    int height = 0;
    int countwidth = 1;
    char read_char = 'c';

    while (!feof(map)) {
        fscanf(map, "%c", &temp);
        printf("%c", temp);
        /*
        if (temp == WALL && countwidth) {
            width += 1;
        }

        if (temp == '\n') {
            height += 1;
            countwidth = 0;
        }
        */

    }

    /*
    fclose(map);
    map = fopen("/Users/rehanjuhan/Downloads/starter_code/map2.txt", "r");
*/
    *map_width = width ;
    *map_height = height;

     for (int i = 0; i < (*map_height); i++) {
         for (int j = 0; j < (*map_width); j++) {
             fscanf(map, "%c", &oneD[i*(*map_width)+j]);

             read_char = getc(map);

             oneD[i*(*map_width)+j] = read_char;
             if (getc(map) != '\n') {
                 getc(map);
            }
         }
     }

    fclose(map);
    //return oneD;
}
