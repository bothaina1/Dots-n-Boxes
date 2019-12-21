#include "Functions.h"
#include <time.h>

 void computer()

{
    delay(1);
    int get_move[move_size];int j,m; int count=0,k=0;

if(ai!=0)
{
   for(int i=0;i<move_size;i++)
{
    get_move[move_size-1-i]=AI[ai-1];
    ai--;

}
}


if(ai==0||(grid[get_move[1]][get_move[2]+1]==1&&get_move[0]==get_move[1])||(get_move[2]==get_move[3]&&grid[get_move[0]+1][get_move[2]]==2)||(grid[get_move[1]][get_move[2]+1]==6&&get_move[0]==get_move[1])||(get_move[2]==get_move[3]&&grid[get_move[0]+1][get_move[2]]==7))
{
     /* Intializes random number generator */
 srand((unsigned)time(NULL));



            while (count<5)
    {  j=rand() % ((max_r)/4+1)+1;
      m=rand() % ((max_r)/4+1)+1;
    if(k%2==0)
      {get_move[0]=j;
      get_move[1]=j;
      get_move[2]=m;
      get_move[3]=m+1;}
      if(k%2==1)
      {
      get_move[0]=m;
      get_move[1]=m+1;
      get_move[2]=j;
      get_move[3]=j;
      }

        count=0;
         for(int i=0;i<move_size;i++)
       {

         if(get_move[i]>(max_r)/4+1||get_move[i]<1)
            { count--;
            break;
              }

         else
            count++;
       }


     if(get_move[0]==get_move[1]&&get_move[3]==get_move[2])
        {count--; printf("please try again\n\a"); }

        else if(get_move[0]!=get_move[1]&&get_move[3]!=get_move[2])
        {count--; printf("please try again\n"); }

        else if(abs(get_move[0]-get_move[1])>1||abs(get_move[2]-get_move[3])>1)
            {count--; printf("please try again\n"); }


                for(int i=0;i<move_size;i++)
        {
            if(i<1||i==1)
            get_move[i]=(get_move[i]-1)*4;
            if(i>1)
            get_move[i]=(get_move[i]-1)*9;
        }

          if(get_move[0]==get_move[1]){
        if(grid[get_move[1]][get_move[2]+1]==0)
            count++;
        else
          count--;}



          if(get_move[3]==get_move[2]){
        if (grid[get_move[0]+1][get_move[2]]==0)
            count++;
        else
            count--;

          }

       k++;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////

  //vertical is missing

for(int i=0;i<move_size;i++)
{
    big[c]=get_move[i];
    c++;

}


 if(get_move[0]==get_move[1]){
  for(int i=get_move[2]+1;i<get_move[3];i++)
   {
        grid[get_move[1]][i]=6;
            // 1 for horizontal
    }

      int constant =get_move[0];
     int start=get_move[2];
     int end=get_move[3];

 horizontal_win(constant,start,end);
    }



        if(get_move[3]==get_move[2]){
        for(int i=get_move[0]+1;i<get_move[1];i++)
     {
       grid[i][get_move[2]]=7; // 2  for vertical
         }
        int constant =get_move[2];
     int start=get_move[0];
     int end=get_move[1];
// putting numbers in the boxes :)

 vertical_win(constant,start,end);
         }


printgrid();

      remaining_lines--;
      computeer.moves++;

}
