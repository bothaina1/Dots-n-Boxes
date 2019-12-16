#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define explines 60
#define beglines 12
#define MAXBIG 100
# define move_size 4
#define total moves 12
typedef struct
{
    char name[100];
    int remainingmoves;
    int score;
    int turn;
}player;

    player one;
     player two;

extern int big[200];extern int c;extern int rm;


void redo(  int get_move[move_size]);
void grid_move(int grid[50][50],int *max_r,int *max_c,int *remaining_lines);
int vertical_win(int constant ,int start,int end ,int grid[50][50]);
int horizontal_win(int constant ,int start,int end ,int grid[50][50]);
void init (int *max_r,int *max_c,int *remaining_lines);
#endif // FUNCTIONS_H_INCLUDED
