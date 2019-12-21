#include "functions.h"



void init ()
 {

     int menu;

    printf("\n\n\n\t\t\t\t\t\tDots and Boxes\n\n\n\n\n");
    printf("\t\t\t\t 1-start game\n\n\t\t\t\t2-load game\n\n\t\t\t\t3-top 10 player\n\n\t\t\t\t 4-exit \n\n");

  //this is for error correction if the user inputs a character or more than one input
char scan[100];
        // scanf("%d",&menu);
        fgets (scan,100,stdin);
menu=atoi(scan);

//Choose preferred option from the menu
    while(menu!=1&&menu!=2&&menu!=3&&menu!=4)
  {printf("please try again typing your choice correctly\a\n");
 fgets (scan,100,stdin);
menu=atoi(scan);
      }

    if(menu==1)
       {

//If the user 
  printf("choose \n1-one player \t\t2-two player\n");
 fgets (scan,100,stdin);
mode2=atoi(scan);
   while(mode2!=1&&mode2!=2)
  {printf("please try again typing your choice correctly\a\n");
fgets (scan,100,stdin);
mode2=atoi(scan);
      }
   if(mode2==2)
  {
      printf("player 1 name: ");
      scanf("\n");
      fgets(one.name,100,stdin);
      printf("player 2 name: ");
      fgets(two.name,100,stdin);
  }


  if(mode2==1)
  {
      printf("Enter your name: ");
      fgets(alone.name,100,stdin);

  }



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
      max_r=9;//max rows with spaces
      max_c=19;//max columns with spaces
      if(mode2==2){
      one.moves=0;
      two.moves=0;}
      if(mode2==1)
      {
        alone.moves=0;
      computeer.moves=0;
      }
       remaining_lines=beglines;
         maxindex=3;
  }



 else if(mode1==2)
  {
      max_r=21;//max rows with spaces
      max_c=46;//max columns with spaces
      if(mode2==2){
      one.moves=0;
    two.moves=0;}
     if(mode2==1)
     {
        alone.moves=0;
    computeer.moves=0;
     }
       remaining_lines=explines;
        maxindex=6;
  }



 for(int i=0;i<max_r;i++)
    for(int j=0;j<max_c;j++)
         {
        grid[i][j]=0;
         }



    for(int i=0;i<(max_r);i++)
    for(int j=0;j<(max_c);j++)
    {

        if(i%4==0&&j%9==0)
            grid[i][j]=3; //3 for dots
    }
 }
    else if (menu==2)
    {
        load();

        //
        if(mode1==1)
  {
      max_r=9;//max rows with spaces
      max_c=19;//max columns with spaces
         maxindex=3;
  }



 else if(mode1==2)
  {
      max_r=21;//max rows with spaces
      max_c=46;//max columns with spaces
        maxindex=6;
  }

        //
    }
    if(menu==1||menu==2)
    {

   // system("cls");
     printf("\n\n\t\t\tGame's guide: You should enter your moves in this form : Row Row Column Column\n\t\tFor example: if you want to connect the first horizontal line in the first row your input would be : 1 1 1 2\n\n\n\n");

    for(index=1;index<=maxindex;index++)
    {
        printf("   %d     ",index);
    }
    index=1;
printf("\n\n%d  ",index);
index++;
for(int i=0;i<(max_r);i++)
      {
    { for(int j=0;j<(max_c);j++)
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
       }
       printf("\n");
        if((index-1)%4!=0)
            printf("   ");
       if((index-1)%4==0)
       printf("%d  ",(index/4)+1);
index++;
    }
    }

    }
//////////////////////////
     else if(menu==4)
       exit(1);


      else if(menu==3){
        load_top_10();
        delay(5);
        init(grid,&max_r ,&max_c);
       }




    }
