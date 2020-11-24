#include "Functions.h"
int vertical_win(int constant ,int start,int end)
{


     int counter1=0;
    int counter2=0;
    if(grid[start][constant-1]==1||grid[start][constant-1]==6)
        counter1++;

    if(grid[start+1][constant-9]==2||grid[start+1][constant-9]==7)
        counter1++;
    if(grid[end][constant-1]==1||grid[end][constant-1]==6)
        counter1++;
//AI

        if(counter1==2&&mode2==1)
     {

     if(grid[start][constant-1]!=1&&grid[start][constant-1]!=6)
      {
        AI[ai]=start;
        ai++;
        AI[ai]=start;
        ai++;
        AI[ai]=constant-9;
        ai++;
        AI[ai]=constant;
        ai++;
      }
    if(grid[start+1][constant-9]!=2&&grid[start+1][constant-9]!=7)
    {
       AI[ai]=start;
        ai++;
        AI[ai]=end;
        ai++;
        AI[ai]=constant-9;
        ai++;
        AI[ai]=constant-9;
        ai++;
    }

      if(grid[end][constant-1]!=1&&grid[end][constant-1]!=6)
       {
           AI[ai]=end;
        ai++;
        AI[ai]=end;
        ai++;
        AI[ai]=constant-9;
        ai++;
        AI[ai]=constant;
        ai++;
       }


     }



     //AI end





     else if(counter1==3)
        {

if(mode2==1){
    if ( alone.turn>1|| alone.turn==1)
               {if(rm==1||rm==3)
                   {grid[start+2][constant-4]=4;alone.turn++; alone.score++;
                    for(int i=1;i<4;i++)
               {
                grid[start+i][constant-9]=2;
               }
               for(int j=1;j<9;j++)
               {

                   grid[start][constant-j]=1;
                   grid[end][constant-j]=1;

               }
                   }

               else if(rm==2)
                   {grid[start+2][constant-4]=0;alone.score--;}
               }

    else if (computeer.turn>1||computeer.turn==1)
  {
      if(rm==1||rm==3)
          {grid[start+2][constant-4]=5;computeer.turn++;computeer.score++;
            for(int i=1;i<4;i++)
               {
                grid[start+i][constant-9]=7;
               }
               for(int j=1;j<9;j++)
               {

                   grid[start][constant-j]=6;
                   grid[end][constant-j]=6;

               }

          }
     else if(rm==2)
         {grid[start+2][constant-4]=0;computeer.score--;}


}
        }



else if(mode2==2){
    if (one.turn>1||one.turn==1)
               {
           if(rm==1||rm==3)
                   {grid[start+2][constant-4]=4;one.turn++;one.score++;
                   for(int i=1;i<4;i++)
               {
                grid[start+i][constant-9]=2;
               }
               for(int j=1;j<9;j++)
               {

                   grid[start][constant-j]=1;
                   grid[end][constant-j]=1;

               }
                   }
          else if(rm==2)  // in case of redo
                   {grid[start+2][constant-4]=0;one.score--;}

               }

    else if (two.turn>1||two.turn==1)
  {
            if(rm==1||rm==3)
                   {grid[start+2][constant-4]=5;two.turn++;two.score++;
                   for(int i=1;i<4;i++)
               {
                grid[start+i][constant-9]=7;
               }
               for(int j=1;j<9;j++)
               {

                   grid[start][constant-j]=6;
                   grid[end][constant-j]=6;

               }
                   }
         else if(rm==2)  // in case of redo
                  {
                   grid[start+2][constant-4]=0;two.score--;}
}

        }

        }









    if(grid[start][constant+1]==1||grid[start][constant+1]==6)
        {counter2++;}
    if(grid[start+1][constant+9]==2||grid[start+1][constant+9]==7)
        {counter2++;}
    if(grid[end][constant+1]==1||grid[end][constant+1]==6)
        {counter2++;}


        if(counter2==2&&mode2==1)
     {

     if(grid[start][constant+1]!=1&&grid[start][constant+1]!=6)
      {
        AI[ai]=start;
        ai++;
        AI[ai]=start;
        ai++;
        AI[ai]=constant;
        ai++;
        AI[ai]=constant+9;
        ai++;
      }
    if(grid[start+1][constant+9]!=2&&grid[start+1][constant+9]!=7)
    {
       AI[ai]=start;
        ai++;
        AI[ai]=end;
        ai++;
        AI[ai]=constant+9;
        ai++;
        AI[ai]=constant+9;
        ai++;
    }

      if(grid[end][constant+1]!=1&&grid[end][constant+1]!=6)
       {
           AI[ai]=end;
        ai++;
        AI[ai]=end;
        ai++;
        AI[ai]=constant;
        ai++;
        AI[ai]=constant+9;
        ai++;
       }


     }


          else if(counter2==3){

if(mode2==1){

  if (alone.turn>1||alone.turn==1)
              {
                   if(rm==1||rm==3)
                  {grid[start+2][constant+4]=4;alone.turn++;alone.score++;
                  for(int i=1;i<4;i++)
               {
                grid[start+i][constant+9]=2;
               }
               for(int j=1;j<9;j++)
               {

                   grid[start][constant+j]=1;
                   grid[end][constant+j]=1;

               }
                  }
                  else if(rm==2)
                  {grid[start+2][constant+4]=0;alone.score--;}
              }


  else if (computeer.turn>1||computeer.turn==1)
 {
       if(rm==1||rm==3)
         {grid[start+2][constant+4]=5;computeer.turn++;computeer.score++;
         for(int i=1;i<4;i++)
               {
                grid[start+i][constant+9]=7;
               }
               for(int j=1;j<9;j++)
               {

                   grid[start][constant+j]=6;
                   grid[end][constant+j]=6;

               }

         }
       else if(rm==2)
         {grid[start+2][constant+4]=0;computeer.score--;}

         }
 }



if(mode2==2){
    if (one.turn>1||one.turn==1)
              {
                if(rm==1||rm==3)
                  {grid[start+2][constant+4]=4;one.turn++;one.score++;
                  for(int i=1;i<4;i++)
               {
                grid[start+i][constant+9]=2;
               }
               for(int j=1;j<9;j++)
               {

                   grid[start][constant+j]=1;
                   grid[end][constant+j]=1;

               }

                  }
                 else if(rm==2)
                 {grid[start+2][constant+4]=0;one.score--;}
              }

    else if (two.turn>1||two.turn==1)
 {
     if(rm==1||rm==3)
        {grid[start+2][constant+4]=5;two.turn++;two.score++;
        for(int i=1;i<4;i++)
               {
                grid[start+i][constant+9]=7;
               }
               for(int j=1;j<9;j++)
               {

                   grid[start][constant+j]=6;
                   grid[end][constant+j]=6;

               }

        }
     else if(rm==2)

     {grid[start+2][constant+4]=0;two.score--;}

 }

        }
        }
}
