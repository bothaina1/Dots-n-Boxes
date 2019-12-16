#include "Functions.h"


void grid_move(int grid[50][50],int *max_r,int *max_c,int *remaining_lines)
{
    char scan[100];
        int tem,win1,win2;
    int count=0;
    int valid=0;
    int error=0;
      int get_move[move_size];

    for(int i=0;i<(*max_r);i++)
    for(int j=0;j<(*max_c);j++)
    {

        if(i%4==0&&j%9==0)
            grid[i][j]=3; //3 for dots
    }

    printf("1-redo 2-move\n");
    fgets (scan,100,stdin);
rm=atoi(scan);
//getchar();
    while(rm!=1&&rm!=2)
  {printf("please try again typing your choice correctly\a\n");
  fgets (scan,100,stdin);
rm=atoi(scan);
//getchar();
      }

if(rm==1)
{
    if((*remaining_lines)==60)
        printf("redo can not be done");
    else
redo( get_move);
}


 else if(rm==2)
    {
       while (count<4)
    {
         for(int i=0;i<move_size;i++)
       {
         scanf("%d",&get_move[i]);
         getchar();
        count++;
        if(get_move[i]>(*max_r)/4+1||get_move[i]<1)//checking for limits of a move's index[1 to max+1]
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

if(get_move[2]==get_move[3])
    if ((grid[get_move[1]][get_move[2]+1]==1&&get_move[0]==get_move[1])||(get_move[2]==get_move[3]&&grid[get_move[0]+1][get_move[2]]==2))//Checking for a repeated move
    {
        printf("\nRepeated Move! Try Again..\n");
        count=0;
    }
    }

 }
 error=0;


if(rm==2){
         for(int i=0;i<move_size;i++)
{
    big[c]=get_move[i];
    c++;

}
}






      if(get_move[0]==get_move[1])
{
  if(get_move[3]<get_move[2])
  {
    tem=get_move[3];
    get_move[3]=get_move[2];
    get_move[2]=tem;
  }
  for(int i=get_move[2]+1;i<get_move[3];i++)
    {if(rm==2)
        grid[get_move[1]][i]=1;
        if(rm==1)
        grid[get_move[1]][i]=0;
            // 1 for horizontal
    }  // 1 for horizontal

     int constant =get_move[0];
     int start=get_move[2];
     int end=get_move[3];

 horizontal_win(constant,start,end,grid);
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
     {if(rm==2)
        grid[i][get_move[2]]=2;
        if(rm==1)
             grid[i][get_move[2]]=0;
          // 2 for vertical
    } // 2 for vertical

    int constant =get_move[2];
     int start=get_move[0];
     int end=get_move[1];

// putting numbers in the boxes :)

 vertical_win(constant,start,end,grid);
    }

system("cls");
printf("\n \n \n");

    //   int c=1;
      for(int i=0;i<(*max_r);i++)
      {
    { for(int j=0;j<(*max_c);j++)
     switch (grid[i][j])
       {
         case 1:printf("%c",196);
                 break;
         case 2: printf("%c",179);
                 break;
          case 3:printf("%c",254);
                 break;
          case 4:printf("1");
                 break;
        case 5:printf("2");
                 break;
           default: printf(" ");
                break;
       }printf("\n");
    }}

     if (one.turn>0)
     one.remainingmoves--;
     if (two.turn>0)
      two.remainingmoves--;

//    current.remainingmoves--;
    (*remaining_lines)--;


}

