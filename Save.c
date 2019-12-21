

#include "function.h"



void save1 ()
{
    FILE *f1;


    // open file for writing
    f1 = fopen ("game1.txt", "w");
    if (f1 == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }

   fprintf(f1,"%d,%d,%d,%d,%d,",mode1,mode2,remaining_lines,max_r,max_c);
if(mode2==2)
   {
       fprintf(f1,"%d,%d,%d,",one.score,one.moves,one.turn);
    fprintf(f1,"%d,%d,%d,",two.score,two.moves,two.turn);printf("%d",two.turn);
   }
  else if(mode2==1)
   {
       fprintf(f1,"%d,%d,%d,",alone.score,alone.moves,alone.turn);
    fprintf(f1,"%d,%d,%d,",computeer.score,computeer.moves,computeer.turn);
   }


  //  fwrite(grid, sizeof(char), sizeof(grid), f);
 for(int i=0;i<max_r;i++)
    {
        for(int j=0;j<max_c;j++)
        {
          fprintf(f1,"%d,",grid[i][j]);
        }
    }
    if(mode2==2)
     fprintf(f1,"%s %s",one.name,two.name);
     if(mode2==1)
    fprintf(f1,"%s %s",alone.name,computeer.name);

 for(int i=0;i<max_r;i++)
    {
        for(int j=0;j<max_c;j++)
        {
          printf(" %d ",grid[i][j]);
        }
    }


    if(fprintf != 0)
       {
        printf("\nGame saved successfully !\n");
       }
    else
        printf("error saving game !\n");

    // close file
    fclose (f1);
fflush(f1);
  //  return 0;

sv++;

FILE *sav;
  sav=fopen("variable2.txt","w");
  fprintf(sav,"%d",sv);
  fclose(sav);


    delay(5);
    start();

}























void load1 ()
{
    FILE *f1;

    // open file for writing
    f1 = fopen ("game1.txt", "r");
    if (f1 == NULL)
    {
        fprintf(stderr, "\nError opening file\n");int m=3;
        exit (1);
    }
//rewind(f);
    // write struct to file
    fscanf(f1,"%d,%d,%d,%d,%d,",&mode1,&mode2,&remaining_lines,&max_r,&max_c);
printf("%d%d%d",mode1,mode2,remaining_lines);
      if(mode2==2)
   {

       fscanf(f1,"%d,%d,%d,",&one.score,&one.moves,&one.turn);printf("%d",one.score);
    fscanf(f1,"%d,%d,%d,",&two.score,&two.moves,&two.turn);
   }
  else if(mode2==1)
   {
       fscanf(f1,"%d,%d,%d,",&alone.score,&alone.moves,&alone.turn);
    fscanf(f1,"%d,%d,%d,",&computeer.score,&computeer.moves,&computeer.turn);
   }


   for(int i=0;i<max_r;i++)
    {
       for(int j=0;j<max_c;j++)
       {
          fscanf(f1,"%d,",&grid[i][j]);

       }

    }


  if(mode2==2)
     fscanf(f1,"%s  %s  ", one.name, two.name);
     if(mode2==1)
    fscanf(f1,"%s  %s  ", alone.name, computeer.name);

        for(int i=0;i<max_r;i++)
    {
        for(int j=0;j<max_c;j++)
        {
          printf(" %d ",grid[i][j]);
        }
    }



    fclose (f1);

}







void save3 ()
{
    FILE *f3;


    // open file for writing
    f3 = fopen ("game3.txt", "w");
    if (f3 == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }

   fprintf(f3,"%d,%d,%d,%d,%d,",mode1,mode2,remaining_lines,max_r,max_c);
if(mode2==2)
   {
       fprintf(f3,"%d,%d,%d,",one.score,one.moves,one.turn);
    fprintf(f3,"%d,%d,%d,",two.score,two.moves,two.turn);printf("%d",two.turn);
   }
  else if(mode2==1)
   {
       fprintf(f3,"%d,%d,%d,",alone.score,alone.moves,alone.turn);
    fprintf(f3,"%d,%d,%d,",computeer.score,computeer.moves,computeer.turn);
   }


  //  fwrite(grid, sizeof(char), sizeof(grid), f);
 for(int i=0;i<max_r;i++)
    {
        for(int j=0;j<max_c;j++)
        {
          fprintf(f3,"%d,",grid[i][j]);
        }
    }

    if(mode2==2)
     fprintf(f3,"%s %s",one.name,two.name);
     if(mode2==2)
    fprintf(f3,"%s %s",alone.name,computeer.name);

 for(int i=0;i<max_r;i++)
    {
        for(int j=0;j<max_c;j++)
        {
          printf(" %d ",grid[i][j]);
        }
    }


    if(fprintf != 0)
       {
        printf("\nGame saved successfully !\n");
       }
    else
        printf("error saving game !\n");

    // close file
    fclose (f3);
fflush(f3);
  //  return 0;


sv++;

FILE *sav;
  sav=fopen("variable2.txt","w");
  fprintf(sav,"%d",sv);
  fclose(sav);



    delay(5);
    start();



}












void load3 ()
{
    FILE *f3;

    // open file for writing
    f3 = fopen ("game3.txt", "r");
    if (f3 == NULL)
    {
        fprintf(stderr, "\nError opening file\n");int m=3;
        exit (1);
    }
//rewind(f);
    // write struct to file
    fscanf(f3,"%d,%d,%d,%d,%d,",&mode1,&mode2,&remaining_lines,&max_r,&max_c);
printf("%d%d%d",mode1,mode2,remaining_lines);
      if(mode2==2)
   {

       fscanf(f3,"%d,%d,%d,",&one.score,&one.moves,&one.turn);printf("%d",one.score);
    fscanf(f3,"%d,%d,%d,",&two.score,&two.moves,&two.turn);
   }
  else if(mode2==1)
   {
       fscanf(f3,"%d,%d,%d,",&alone.score,&alone.moves,&alone.turn);
    fscanf(f3,"%d,%d,%d,",&computeer.score,&computeer.moves,&computeer.turn);
   }


   for(int i=0;i<max_r;i++)
    {
       for(int j=0;j<max_c;j++)
       {
          fscanf(f3,"%d,",&grid[i][j]);

       }
  }



  if(mode2==2)
     fscanf(f3,"%s%s",&one.name,&two.name);
     if(mode2==1)
    fscanf(f3,"%s%s",&alone.name,&computeer.name);


    fclose (f3);

}






void save2 ()
{
    FILE *f2;


    // open file for writing
    f2 = fopen ("game2.txt", "w");
    if (f2 == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }

   fprintf(f2,"%d,%d,%d,%d,%d,",mode1,mode2,remaining_lines,max_r,max_c);
if(mode2==2)
   {
       fprintf(f2,"%d,%d,%d,",one.score,one.moves,one.turn);
    fprintf(f2,"%d,%d,%d,",two.score,two.moves,two.turn);printf("%d",two.turn);
   }
  else if(mode2==1)
   {
       fprintf(f2,"%d,%d,%d,",alone.score,alone.moves,alone.turn);
    fprintf(f2,"%d,%d,%d,",computeer.score,computeer.moves,computeer.turn);
   }


  //  fwrite(grid, sizeof(char), sizeof(grid), f);
 for(int i=0;i<max_r;i++)
    {
        for(int j=0;j<max_c;j++)
        {
          fprintf(f2,"%d,",grid[i][j]);
        }
    }



    if(mode2==2)
     fprintf(f2,"%s  %s  ",one.name,two.name);
     if(mode2==1)
    fprintf(f2,"%s  %s  ",alone.name,computeer.name);

 for(int i=0;i<max_r;i++)
    {
        for(int j=0;j<max_c;j++)
        {
          printf(" %d ",grid[i][j]);
        }
    }


    if(fprintf != 0)
       {
        printf("\nGame saved successfully !\n");
       }
    else
        printf("error saving game !\n");

    // close file
    fclose (f2);
fflush(f2);
  //  return 0;





  sv++;

FILE *sav;
  sav=fopen("variable2.txt","w");
  fprintf(sav,"%d",sv);
  fclose(sav);

    delay(5);
    start();









}
















void load2 ()
{
    FILE *f2;

    // open file for writing
    f2 = fopen ("game2.txt", "r");
    if (f2 == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }
//rewind(f);
    // write struct to file
    fscanf(f2,"%d,%d,%d,%d,%d,",&mode1,&mode2,&remaining_lines,&max_r,&max_c);
printf("%d%d%d",mode1,mode2,remaining_lines);
      if(mode2==2)
   {

       fscanf(f2,"%d,%d,%d,",&one.score,&one.moves,&one.turn);printf("%d",one.score);
    fscanf(f2,"%d,%d,%d,",&two.score,&two.moves,&two.turn);
   }
  else if(mode2==1)
   {
       fscanf(f2,"%d,%d,%d,",&alone.score,&alone.moves,&alone.turn);
    fscanf(f2,"%d,%d,%d,",&computeer.score,&computeer.moves,&computeer.turn);
   }


   for(int i=0;i<max_r;i++)
    {
       for(int j=0;j<max_c;j++)
       {
          fscanf(f2,"%d,",&grid[i][j]);

       }
  }


    if(mode2==2)
     fscanf(f2,"%s  %s  ",&one.name,&two.name);
     if(mode2==1)
    fscanf(f2,"%s  %s  ",&alone.name,&computeer.name);


    fclose (f2);

}


