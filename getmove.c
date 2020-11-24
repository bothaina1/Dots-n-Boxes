






#include "Functions.h"


void grid_move()
{

        int error;
    int count=0;
    char scan[100];

      int get_move[move_size];



color(14);
    printf("1-Move   2-Undo   3-Redo   4-save game   5-main menu\n");
    printf("%lf",constant);
    color(15);

    scanf("\n");
          fgets (scan,100,stdin);
rm=atoi(scan);
//getchar();
    while(rm!=1&&rm!=2&&rm!=3&&rm!=4&&rm!=5)
  {
      printf("please try again typing your choice correctly\a\n");
  fgets (scan,100,stdin);
rm=atoi(scan);
//getchar();
      }

   if(rm==4)

   {
        FILE *sav;
  sav=fopen("variable2.txt","r");
  fscanf(sav,"%d",&sv);
  fclose(sav);

        if(sv%3==0)
       save1();
       if(sv%3==1)
       save2();
        if(sv%3==2)
       save3();

   }
         if(rm==5)
    {start();}

      if(mode1==1)

       {
//needs edit here moves=0
      while(rm==2&&remaining_lines==beglines)
      {
          printf("Undo can not be done NOW!!\a\n");
            fgets (scan,100,stdin);
              rm=atoi(scan);
               //getchar();
      }
       }
      else if(mode1==2)
       while(rm==2&&remaining_lines==explines)
      {
          printf("Undo can not be done NOW!!\a\n");
          fgets (scan,100,stdin);
          rm=atoi(scan);
            //getchar();
      }

       while(rm==3&&r==0)
      {
          printf("Redo can not be done NOW!!\a\n");
          fgets (scan,100,stdin);
          rm=atoi(scan);
            //getchar();
      }

if(rm==2)
{

undo( get_move);
evaluatemove(get_move);


}
else if(rm==3)
{

redo( get_move);
evaluatemove(get_move);

}

 if(rm==1)
    {

while (count<4)
    {
        fflush(stdin);
        printf("enter the move you want ");
         for(int i=0;i<move_size;i++)
       {
         scanf("%d",&get_move[i]);
     //    if(scanf("%d",&get_move[i]) == 0)
   //   getchar();
   for(int check=0;check<4;check++)
   {
   if (get_move[check]>6||get_move[check]<1)
            {get_move[check]=0;}
       }
        count++;
        error=0;
        if(get_move[i]>(max_r)/4+1||get_move[i]<1)//checking for limits of a move's index[1 to max+1]
        error=1;
        if(get_move[i]!= (int) get_move[i])
            error=1;
       }



       if(get_move[0]==get_move[1]&&get_move[3]==get_move[2])
        error=1;
        else if(get_move[0]!=get_move[1]&&get_move[3]!=get_move[2])
        error=1;
        else if(abs(get_move[0]-get_move[1])>1||abs(get_move[2]-get_move[3])>1)
     error=1;
     if(error==1)
               {count=0; printf("Invalid move,Please try again\n"); }

       //scaling moves index
//I edited here..
     for(int i=0;i<move_size;i++)
        {
            if(i==0||i==1)
            get_move[i]=(get_move[i]-1)*4;
            if(i==2||i==3)
            get_move[i]=(get_move[i]-1)*9;
        }

    if ((grid[get_move[1]][get_move[2]+1]==1&&get_move[0]==get_move[1])||(get_move[2]==get_move[3]&&grid[get_move[0]+1][get_move[2]]==2))//Checking for a repeated move
    {
        printf("\nRepeated Move! Try Again..\n");
        count=0;
    }
    if ((grid[get_move[1]][get_move[2]+1]==6&&get_move[0]==get_move[1])||(get_move[2]==get_move[3]&&grid[get_move[0]+1][get_move[2]]==7))//Checking for a repeated move
    {
        printf("\nRepeated Move! Try Again..\n");
        count=0;
    }
}
error=0;
 }



if(rm==1){
         for(int i=0;i<move_size;i++)
{
    big[c]=get_move[i];
    c++;

}
evaluatemove(get_move);
//edit
r=0;
}


}





void evaluatemove (int get_move[move_size])
//changing the index of a move starts..
{
   int tem;
      if(get_move[0]==get_move[1])
{//reverse
  if(get_move[3]<get_move[2])
  {
    tem=get_move[3];
    get_move[3]=get_move[2];
    get_move[2]=tem;
  }
  for(int i=get_move[2]+1;i<get_move[3];i++)
    {
        if(rm==1&&one.turn==1||rm==3&&one.turn==1)
        {grid[get_move[1]][i]=1;undoo[get_move[1]][i]=1;}
        else if(rm==1&&two.turn==1||rm==3&&two.turn==1)
        {grid[get_move[1]][i]=6;undoo[get_move[1]][i]=6;}
        else if(rm==1&&alone.turn==1||rm==3&&alone.turn==1)
        {grid[get_move[1]][i]=1;undoo[get_move[1]][i]=1;}
       else if(rm==2)
        {grid[get_move[1]][i]=0;undoo[get_move[1]][i]=0;}

            // 1 for horizontal
    }

     int constant =get_move[0];
     int start=get_move[2];
     int end=get_move[3];

 horizontal_win(constant,start,end);
}


   if(get_move[2]==get_move[3])
{
  if(get_move[1]<get_move[0])
  {
    tem=get_move[1];
    get_move[1]=get_move[0];
    get_move[0]=tem;
  }
  for(int i=get_move[0]+1;i<get_move[1];i++)
     {if(rm==1&&one.turn==1||rm==3&&one.turn==1)
        {grid[i][get_move[2]]=2;undoo[i][get_move[2]]=2;}
        else if(rm==1&&two.turn==1||rm==3&&two.turn==1)
        {grid[i][get_move[2]]=7;undoo[i][get_move[2]]=7;}
         else if(rm==1&&alone.turn==1||rm==3&&alone.turn==1)
        {grid[i][get_move[2]]=2;undoo[i][get_move[2]]=2;}
        else if(rm==2)
             {grid[i][get_move[2]]=0;undoo[i][get_move[2]]=0;}
          // 2 for vertical
    } // 2 for vertical

    int constant =get_move[2];
     int start=get_move[0];
     int end=get_move[1];

// putting numbers in the boxes :)


 vertical_win(constant,start,end);
    }

printgrid();

    if(mode2==1){
            alone.moves++;}


    if(mode2==2){
     if (one.turn>0)
     one.moves++;
     if (two.turn>0)
      two.moves++;}

//    current.remainingmoves--;
    remaining_lines--;
}




















