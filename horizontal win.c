#include "Functions.h"


int horizontal_win(int constant ,int start,int end)
{
  int counter1=0;
    int counter2=0;
    if(grid[constant-1][start]==2||grid[constant-1][start]==7)//right vertical
        counter1++;

    if(grid[constant-4][start+1]==1||grid[constant-4][start+1]==6)//up horizontal
        counter1++;
    if(grid[constant-1][end]==2||grid[constant-1][end]==7)//left vertical
        counter1++;
         //AI
if(counter1==2&&mode2==1)
     {

     if(grid[constant-1][start]!=2&&grid[constant-1][start]!=7)
      {
        AI[ai]=constant-4;
        ai++;
        AI[ai]=constant;
        ai++;
        AI[ai]=start;
        ai++;
        AI[ai]=start;
        ai++;
      }
    if(grid[constant-4][start+1]!=1&&grid[constant-4][start+1]!=6)
    {
       AI[ai]=constant-4;
        ai++;
        AI[ai]=constant-4;
        ai++;
        AI[ai]=start;
        ai++;
        AI[ai]=end;
        ai++;
    }

      if(grid[constant-1][end]!=2&&grid[constant-1][end]!=7)
       {
           AI[ai]=constant-4;
        ai++;
        AI[ai]=constant;
        ai++;
        AI[ai]=end;
        ai++;
        AI[ai]=end;
        ai++;
       }


     }



  //AI end



    if(counter1==3)
        {


if(mode2==1){

   if (alone.turn>1||alone.turn==1)
     {
      if(rm==1||rm==3)//here
           {
               alone.turn++;alone.score++;grid[constant-2][start+4]=4;
               for(int i=1;i<4;i++)
               {
                   grid[constant-i][start]=2;
                   grid[constant-i][end]=2;
               }
               for(int j=1;j<9;j++)
               {
                   grid[constant-4][start+j]=1;
               }
               }

     else if(rm==2)
            {grid[constant-2][start+4]=0;alone.score--;}
        }
    else if (computeer.turn>1||computeer.turn==1)
{if(rm==1||rm==3)
   {grid[constant-2][start+4]=5;computeer.turn++;computeer.score++;
   for(int i=1;i<4;i++)
               {
                   grid[constant-i][start]=7;
                   grid[constant-i][end]=7;
               }
               for(int j=1;j<9;j++)
               {
                   grid[constant-4][start+j]=6;
               }
   }
    else if(rm==2)
    {grid[constant-2][start+4]=0;computeer.score--;}



}}





if(mode2==2){
     if (one.turn>1||one.turn==1)
           {if(rm==1||rm==3)
                 {
                     grid[constant-2][start+4]=4;one.turn++;
                one.score++;
                for(int i=1;i<4;i++)
               {
                   grid[constant-i][start]=2;
                   grid[constant-i][end]=2;
               }
               for(int j=1;j<9;j++)
               {
                   grid[constant-4][start+j]=1;
               }
           }
        else if(rm==2)
                 {grid[constant-2][start+4]=0;one.score--;}}

     else if (two.turn>1||two.turn==1)
       {   if(rm==1||rm==3)
               {grid[constant-2][start+4]=5;two.turn++;two.score++;
               for(int i=1;i<4;i++)
               {
                   grid[constant-i][start]=7;
                   grid[constant-i][end]=7;
               }
               for(int j=1;j<9;j++)
               {
                   grid[constant-4][start+j]=6;
               }
               }
           if(rm==2)
               {grid[constant-2][start+4]=0;two.score--;}
               }
        }
        }








//down

    if(grid[constant+1][start]==2||grid[constant+1][start]==7)//vertical right
        {counter2++;}
    if(grid[constant+4][start+1]==1||grid[constant+4][start+1]==6)//horizontal down
        {counter2++;}
    if(grid[constant+1][end]==2||grid[constant+1][end]==7)//vertical left
        {counter2++;}



  if(counter2==2&&mode2==1)
     {

     if(grid[constant+1][start]!=2&&grid[constant+1][start]!=7)
          {
           AI[ai]=constant;
        ai++;
        AI[ai]=constant+4;
        ai++;
        AI[ai]=start;
        ai++;
        AI[ai]=start;
        ai++;
       }

    if(grid[constant+4][start+1]!=1&&grid[constant+4][start+1]!=6)
          {
           AI[ai]=constant+4;
        ai++;
        AI[ai]=constant+4;
        ai++;
        AI[ai]=start;
        ai++;
        AI[ai]=end;
        ai++;
       }

      if(grid[constant+1][end]!=2&&grid[constant+1][end]!=7)
          {
           AI[ai]=constant;
        ai++;
        AI[ai]=constant+4;
        ai++;
        AI[ai]=end;
        ai++;
        AI[ai]=end;
        ai++;
       }


     }







          if(counter2==3)
        {
if(mode2==1){
    if (alone.turn>1||alone.turn==1){
          if(rm==1||rm==3)
             {grid[constant+2][start+4]=4;alone.turn++;alone.score++;
              for(int i=1;i<4;i++)
               {
                   grid[constant+i][start]=2;
                   grid[constant+i][end]=2;
               }
               for(int j=1;j<9;j++)
               {
                   grid[constant+4][start+j]=1;
               }
             }
         if(rm==2) //in case of redo
             {grid[constant+2][start+4]=0;alone.score--;}
    }
    else if (computeer.turn>1||computeer.turn==1)
 {
     if(rm==1||rm==3)
     {grid[constant+2][start+4]=5;computeer.turn++;computeer.score++;
      for(int i=1;i<4;i++)
               {
                   grid[constant+i][start]=7;
                   grid[constant+i][end]=7;
               }
               for(int j=1;j<9;j++)
               {
                   grid[constant+4][start+j]=6;
               }
     }
        if(rm==2)
     {grid[constant+2][start+4]=0;computeer.score--;}
        }


}


if(mode2==2){

   if (one.turn>1||one.turn==1)
    {
         if(rm==1||rm==3)
        {grid[constant+2][start+4]=4;one.turn++;one.score++;
         for(int i=1;i<4;i++)
               {
                   grid[constant+i][start]=2;
                   grid[constant+i][end]=2;
               }
               for(int j=1;j<9;j++)
               {
                   grid[constant+4][start+j]=1;
               }
        }
         if(rm==2)
        {grid[constant+2][start+4]=0;one.score--;}
    }
    else if (two.turn>1||two.turn==1)
 {
       if(rm==1||rm==3)
     {grid[constant+2][start+4]=5;two.turn++;two.score++;
      for(int i=1;i<4;i++)
               {
                   grid[constant+i][start]=7;
                   grid[constant+i][end]=7;
               }
               for(int j=1;j<9;j++)
               {
                   grid[constant+4][start+j]=6;
               }
     }
        if(rm==2)
     {grid[constant+2][start+4]=0;two.score--;}

        }


        }

        }
}




