
#include "Functions.h"
int vertical_win(int constant ,int start,int end ,int grid[50][50])
{


     int counter1=0;
    int counter2=0;
    if(grid[start][constant-1]==1)
        counter1++;
    if(grid[start+1][constant-9]==2)
        counter1++;
    if(grid[end][constant-1]==1)
        counter1++;
        if(counter1==3)
        {
            if (one.turn>1||one.turn==1)
        {grid[start+2][constant-4]=4;
        one.turn++;one.score++;}
            else if (two.turn>1||two.turn==1)
{
    grid[start+2][constant-4]=5;
 two.turn++;two.score++;
 }
 /* if (one.turn>1||one.turn==1)
        {grid[constant-2][start+4]=4;
        one.turn++;one.score++;}
            else if (two.turn>1||two.turn==1)
{grid[constant-2][start+4]=5;
 two.turn++;two.score++;}*/

        }

    if(grid[start][constant+1]==1)
        {counter2++;}
    if(grid[start+1][constant+9]==2)
        {counter2++;}
    if(grid[end][constant+1]==1)
        {counter2++;}

          if(counter2==3)
         {

if (one.turn>1||one.turn==1)
             {grid[start+2][constant+4]=4;
             one.turn++;one.score++;}
            else if (two.turn>1||two.turn==1)
 {grid[start+2][constant+4]=5;
 two.turn++;two.score++;}
        }
}
