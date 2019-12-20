#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define explines 60
#define beglines 12
#define MAXBIG 100
# define move_size 4
#define total moves 12

 struct win
{
    char name2[100];

    int score2;

};

struct win top[10];

typedef struct
{
    char name[100];
    int moves;
    int score;
    int turn;
}player;

    player one;
     player two;
     player alone;
     player computeer;

 int big[240];extern int c;extern int rm;extern int mode1;extern int mode2;
extern int remaining_lines;extern int index;extern int r;
extern int maxindex;extern int t;
int grid[50][50];int redoo[240];
extern int max_r,max_c;
int undoo[50][50];
int AI[50];
extern int ai;


void load ();
void save();
void redo(  int get_move[move_size]);void computer();void undo(int get_move[move_size]);
void grid_move();
int vertical_win(int constant ,int start,int end );
int horizontal_win(int constant ,int start,int end);
void init ();
void color(int ForgC);
void printgrid();
void delay(int number_of_seconds);

#endif // FUNCTIONS_H_INCLUDED
