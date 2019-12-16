
#include "Functions.h"
int c=0;
int big[200];
int rm=0;

int main()
{

int remaining_lines,max_r,max_c;
int grid[50][50];

    init(&max_r, &max_c, &remaining_lines);

     for(int i=0;i<max_r;i++)
    for(int j=0;j<max_c;j++)
         {
        grid[i][j]=0;
         }

 for(int i=0;i<12||i==12;i++)
    {   one.turn=1;
        while(one.turn==1)
        {
         printf("it's %s 's turn\n", one.name);
        grid_move(grid,&max_r,&max_c,&remaining_lines);
        printf("\n\n player 1 score :%d\t\t player 2 score :%d\nplayer 1 remaining moves:%d\t\t player 2 remaining moves:%d\nremaining lines : %d\n\n",one.score,two.score,one.remainingmoves,two.remainingmoves,remaining_lines);
        one.turn--;

        }

        two.turn=1;
while(two.turn==1)
{
    printf("\n it's %s 's turn\n", two.name);
     grid_move(grid,&max_r,&max_c,&remaining_lines);
     printf("\n\n player 1 score :%d\t\t player 2 score :%d\nplayer 1 remaining moves:%d\t\t player 2 remaining moves:%d\nremaining lines : %d\n\n",one.score,two.score,one.remainingmoves,two.remainingmoves,remaining_lines);
     printf("%d",two.turn);
    two.turn--;

}

    }

}



