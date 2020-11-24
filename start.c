#include "functions.h"



void start ()
 {



    printf("\n\n\n\t\t\t\t\t\tDots and Boxes\n\n\n\n\n");
    color(5);
    printf("\t\t\t\t 1-start game\n\n\t\t\t\t2-load game\n\n\t\t\t\t3-top 10 player\n\n\t\t\t\t 4-exit \n\n");
color(15);

  //this is for error correction if the user inputs a character or more than one input
  fflush(stdin);
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
color(3);
//If the user
  printf("choose \n1-one player \t\t2-two player\n");
 fgets (scan,100,stdin);
mode2=atoi(scan);
   while(mode2!=1&&mode2!=2)
  {printf("please try again typing your choice correctly\a\n");
fgets (scan,100,stdin);
mode2=atoi(scan);
      }
       color(15);
   if(mode2==2)
  {
      printf("player 1 name: ");
      scanf("\n");
      fgets(one.name,100,stdin);
      printf("player 2 name: ");
      fgets(two.name,100,stdin);
      char *p = one.name;
       p[strlen(p)-1] = 0;
       char *b = two.name;
         b[strlen(b)-1] = 0;


  }
color(15);

  if(mode2==1)
  {
      color(1);
      printf("Enter your name: ");
      fgets(alone.name,100,stdin);
color(15);
      char *p = alone.name;
        p[strlen(p)-1] = 0;

  }

color(15);

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



      if (menu==2)
    {
        printf("which game do you want to load ?\n\n1-game one\t\t2- game two\t\t 3-game three \n");
     fgets (scan,100,stdin);
      game=atoi(scan);
      while(game!=1&&game!=2&&game!=3)
  {printf("please try again typing your choice correctly\a\n");
  fgets (scan,100,stdin);
  game=atoi(scan);
      }
      if(game==1)
        load1();
      if(game==2)
        load2();
      if(game==3)
      load3();
        //}
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
         printgrid();
    }
//////////////////////////
     else if(menu==4)
       exit(1);


      else if(menu==3){
        load_top_10();
        delay(5);
        start(grid,&max_r ,&max_c);
       }




    }
