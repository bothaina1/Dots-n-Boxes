#include "Functions.h"

void undo(  int get_move[move_size])
{
    for(int i=0;i<move_size;i++)
{
    get_move[3-i]=big[c-1];
    c--;}
 if(mode2==2)
 {

 r+=4;
for(int i=0;i<move_size;i++)
{
    redoo[r-i-1]=get_move[3-i];
    }
 }

    if(mode2==1){


            if ((undoo[get_move[1]][get_move[2]+1]==1&&get_move[0]==get_move[1])||(get_move[2]==get_move[3]&&undoo[get_move[0]+1][get_move[2]]==2))//Checking for a repeated move
    {/////
      if (alone.turn==1)
        {alone.moves-=2;alone.turn++;

 r+=4;
for(int i=0;i<move_size;i++)
{
    redoo[r-i-1]=get_move[3-i];
    }
        }

    }
    if ((undoo[get_move[1]][get_move[2]+1]==6&&get_move[0]==get_move[1])||(get_move[2]==get_move[3]&&undoo[get_move[0]+1][get_move[2]]==7))

    {
      if (alone.turn==1)
          {computeer.moves--;
        alone.moves--;}
    }
        }
     else if(mode2==2){

if ((undoo[get_move[1]][get_move[2]+1]==1&&get_move[0]==get_move[1])||(get_move[2]==get_move[3]&&undoo[get_move[0]+1][get_move[2]]==2))//Checking for a repeated move
    {
      if (one.turn==1)
       {one.moves-=2;one.turn++;}
      if (two.turn==1)
          {two.moves--;
        one.moves--;}
    }
    if ((undoo[get_move[1]][get_move[2]+1]==6&&get_move[0]==get_move[1])||(get_move[2]==get_move[3]&&undoo[get_move[0]+1][get_move[2]]==7))
                                                                          //Checking for a repeated move
    {
        if (two.turn==1)
       {two.moves-=2;two.turn++;}
      if (one.turn==1)
          {two.moves--;
        one.moves--;}
    }
     }
     remaining_lines+=2;
     }
