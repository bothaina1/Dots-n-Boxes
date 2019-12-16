
#include "Functions.h"
void init (int *max_r,int *max_c,int *remaining_lines)
{

int menu;

    printf("\n\n\t\t\t\tDots and Boxes\n\n\n\n\n");
    printf("\t\t\t\t 1-start game\n\n\t\t\t\t2-load game\n\n\t\t\t\t3-top 10 player\n\n\t\t\t\t 4-exit \n\n");
    //this is for error correction
char scan[100];
        // scanf("%d",&menu);
        fgets (scan,100,stdin);
menu=atoi(scan);
    while(menu!=1&&menu!=2&&menu!=3&&menu!=4)
  {
      printf("please try again typing your choice correctly\a\n");
 fgets (scan,100,stdin);
menu=atoi(scan);
      }

    if(menu==1)
       {

int mode1,mode2;

  printf("choose \n1-one player \t\t2-two player\n");

   fgets (scan,100,stdin);
mode2=atoi(scan);
   while(mode2!=1&&mode2!=2)
  {
      printf("please try again typing your choice correctly\a\n");
 fgets (scan,100,stdin);
mode2=atoi(scan);
      }

   if(mode2==2)
  {
      printf("player 1 name: \n");
      scanf("\n");
      fgets(one.name,100,stdin);
      *one.name=strtok(one.name,"\n");
      printf("player 2 name: \n");
      fgets(two.name,100,stdin);
      *two.name=strtok(two.name,"\n");
  }
//mode2 is 1 is missing

  printf("choose \n1-beginner \t\t 2-expert :  ");
  fgets (scan,100,stdin);
mode1=atoi(scan);

while(mode1!=1&&mode1!=2)
  {printf("please try again typing your choice correctly\a\n");
  fgets (scan,100,stdin);
mode1=atoi(scan);
      }
  if(mode1==1)
  {
      *max_r=9;//max rows with spaces
      *max_c=19;//max columns with spaces
      one.remainingmoves=beglines/2;
      two.remainingmoves=beglines/2;
       *remaining_lines=beglines;
  }


 else if(mode1==2)
  {
      *max_r=21;//max rows with spaces
      *max_c=46;//max columns with spaces
      one.remainingmoves=explines/2;
    two.remainingmoves=explines/2;
       *remaining_lines=explines;
  }

       }

    }


