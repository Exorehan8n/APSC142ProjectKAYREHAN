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
    // Print the map given in the global map variable

    //printf(map);


    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c ",map[i*width+j]);
            if (j < width-1) {
                printf(" ");
            }

        }
        printf("\n");

    }
    /*
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i]);
    }
    printf("%c\n");
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i+11]);
    }
    printf("%c\n");
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i+22]);
    }
    printf("%c\n");
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i+33]);
    }
    printf("%c\n");
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i+44]);
    }
    printf("%c\n");
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i+55]);
    }
    printf("%c\n");
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i+66]);
    }
    printf("%c\n");
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i+77]);
    }
    printf("%c\n");
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i+88]);
    }
    printf("%c\n");
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i+99]);
    }
    printf("%c\n");
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i+110]);
    }
    printf("%c\n");
    for (int i = 0; i < width; i++) {
        printf("%c ",map[i+120]);
    }
*/

}

void print_revealed_map(int player_y, int player_x) {
    // Only the map within PLAYER_VISION_DISTANCE of the player (including diagonals) should be printed
}

int locate_character(char character, int* character_y, int* character_x) {
    // Attempt to find the character in the map and return a status code indicating

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            //printf("%c ",map[i*width+j]);
            /*
            if (strcmp(map, "P") == 1) {

            }
            */

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

    // if they were present

}


char *load_map(char *filename, int *map_height, int *map_width) {
    return NULL;
}
