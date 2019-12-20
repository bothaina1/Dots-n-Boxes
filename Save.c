#include "functions.h"



void save ()
{
    FILE *f;

    // open file for writing
    f = fopen ("game1.txt", "w");
    if (f == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }

   fprintf(f,"%d,%d,%d,%d,%d,",mode1,mode2,remaining_lines,max_r,max_c);
if(mode2==2)
   {
       fprintf(f,"%s,,%d,%d,%d,",one.name,one.score,one.moves,one.turn);
    fprintf(f,"%s,,%d,%d,%d,",two.name,two.score,two.moves,two.turn);printf("%d",two.turn);
   }
  else if(mode2==1)
   {
       fprintf(f,"%d,%d,%d,",alone.score,alone.moves,alone.turn);
    fprintf(f,"%d,%d,%d,",computeer.score,computeer.moves,computeer.turn);
   }


  //  fwrite(grid, sizeof(char), sizeof(grid), f);
 for(int i=0;i<max_r;i++)
    {
        for(int j=0;j<max_c;j++)
        {
          fprintf(f,"%d,",grid[i][j]);
        }
    }


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
    fclose (f);
fflush(f);
  //  return 0;



    delay(5);
    init();

}























void load ()
{
    FILE *f;

    // open file for writing
    f = fopen ("game1.txt", "r");
    if (f == NULL)
    {
        fprintf(stderr, "\nError opening file\n");int m=3;
        exit (1);
    }
//rewind(f);
    // write struct to file
    fscanf(f,"%d,%d,%d,%d,%d,",&mode1,&mode2,&remaining_lines,&max_r,&max_c);
printf("%d%d%d",mode1,mode2,remaining_lines);
      if(mode2==2)
   {
       fscanf(f,"[^,],%d,%d,%d,",&one.name,&one.score,&one.moves,&one.turn);
    fscanf(f,"[^,],%d,%d,%d,",&two.name,&two.score,&two.moves,&two.turn);
   }
  else if(mode2==1)
   {
       fscanf(f,"[^,],%d,%d,%d,",&alone.name,&alone.score,&alone.moves,&alone.turn);
    fscanf(f,"[^,],%d,%d,%d,",&computeer.name,&computeer.score,&computeer.moves,&computeer.turn);
   }


   for(int i=0;i<max_r;i++)
    {
       for(int j=0;j<max_c;j++)
       {
          fscanf(f,"%d,",&grid[i][j]);

       }
  }


    fclose (f);

}
