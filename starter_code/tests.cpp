// APSC 142 Engineering Programming Project Starter Code
// Copyright Sean Kauffman 2024

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"



#include <stdio.h>

// make sure not to modify anything in this extern block
extern "C"{
#include "defines.h"
#include "map.h"
#include "character.h"
#include "game.h"
char *map = NULL;
int width, height;
}

char hardcoded_map[] = {
    WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL,
    WALL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL,
    WALL, EMPTY, WALL, WALL, EMPTY, WALL, EMPTY, WALL, WALL, EMPTY, WALL,
    WALL, EMPTY, WALL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL, EMPTY, WALL,
    WALL, EMPTY, WALL, EMPTY, WALL, WALL, WALL, EMPTY, WALL, EMPTY, WALL,
    WALL, EMPTY, EMPTY, EMPTY, EMPTY, PLAYER, EMPTY, EMPTY, WALL, EMPTY, WALL,
    WALL, EMPTY, WALL, EMPTY, WALL, WALL, WALL, EMPTY, WALL, EMPTY, WALL,
    WALL, EMPTY, WALL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL, EMPTY, WALL,
    WALL, EMPTY, WALL, WALL, EMPTY, WALL, EMPTY, WALL, WALL, EMPTY, WALL,
    WALL, EMPTY, EMPTY, EMPTY, EMPTY, WALL, EMPTY, EMPTY, MINOTAUR, EMPTY, WALL,
    WALL, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, EMPTY, WALL,
    WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL
};

/**
 * This file is where you should put your tests for your code.
 * Your code must have tests that execute at least 85% of the code in
 * required functions for you to get full marks for the project.
 * Make sure to check out the course videos on automated testing for
 * more information about how to write tests.
 */

/* Tests for map.c */
TEST_SUITE_BEGIN("Map tests");

// Tests for load_map
TEST_CASE("A test for load_map") {
    CHECK(0 == 0);
    TEST_SUITE_BEGIN("Game tests");
    // tests for check_win
    CHECK(check_win(0,0) == YOU_WIN);
    //CHECK(check_win(1,1) == KEEP_GOING);
    CHECK(check_win(9,9) == YOU_WIN);
    CHECK(check_win(8,9) == YOU_WIN);
    CHECK(check_win(1,0) == YOU_WIN);
#define HARDCODED_WIDTH 11
#define HARDCODED_HEIGHT 12

    map = hardcoded_map;
    //CHECK(check_win(8,8) == KEEP_GOING);
    // test for check_l
    CHECK(check_loss(2,2,2,2) == YOU_LOSE);
    CHECK(check_loss(1,1, 2,1) == KEEP_GOING);
   int y = 1;
    int x = 5;
    height = 12;
    width = 11;
    print_map();
    //move_character(&y, &x, 'w', 'P');
    CHECK(move_character(&y, &x, 's', 'P') == MOVED_WALL);
    TEST_SUITE_END();


}
/*
TEST_SUITE_BEGIN("Character tests");

// tests for sees_player

// tests for move_character
CHECK(move_character(0, 0, 'w', 'p') == MOVED_WALL);
// tests for charge_minotaur

TEST_SUITE_END();
// Tests for is_wall

TEST_SUITE_END();
/*
*/
/*
TEST_SUITE_BEGIN("Character tests");

// tests for sees_player

// tests for move_character
CHECK(move_character(0, 5, 'w', 'p') == MOVED_WALL);
// tests for charge_minotaur

TEST_SUITE_END();
*/
/* tests for game.c */



