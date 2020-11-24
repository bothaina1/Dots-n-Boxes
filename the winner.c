#include "Functions.h"

void the_winner()
{ //opening top10 file to read the the saved top ten from the file
FILE *top10;
top10= fopen("top10.txt","rb");
       fread(top,sizeof(struct win),10,top10);
   fclose(top10);


   //opening a file to scan the top10 counter that specify where the top10 list has  stoped
    FILE *vt;
  vt=fopen("variable.txt","r");
  fscanf(vt,"%d",&t);
  fclose(vt);


  // in case of 2 players
    if(mode2==2)
    {
        if(one.score>two.score)
           {//declaring player 1 is the winner
             printf("%\n s is the winner\n",one.name);
              // puting player 2 name and his score in the top 10 struct
              strcpy(top[t].name2,one.name);
               top[t].score2=one.score;
               // sort the array
               testing();
               // increasing the counter
                if(t<10||t==10)
               {t++;}





                // puting player 1 name and his score in the top 10 struct
              strcpy(top[t].name2,two.name);
               top[t].score2=two.score; testing();
                // increasing the counter
              if(t<10||t==10)
               {t++;}

           }
       else if(two.score>one.score)
            {printf("\n %s is the winner\n",two.name);
             // puting player 1 name and his score in the top 10 struct
                strcpy(top[t].name2,two.name);
               top[t].score2=two.score; testing();
                // increasing the counter
                if(t<10||t==10)
                {t++;}


                // puting player 2 name and his score in the top 10 struct
              strcpy(top[t].name2,one.name);
               top[t].score2=one.score; testing();
                // increasing the counter
                   if(t<10||t==10)
               t++;

            }
            // in case of equal score
        else if(two.score==one.score)
           {

            printf("\n it's a draw\n");
             // puting player 2 name and his score in the top 10 struct
             strcpy(top[t].name2,two.name);
               top[t].score2=two.score; testing();
                // increasing the counter
                  if(t<10||t==10)
                t++;

               // puting player 2 name and his score in the top 10 struct
              strcpy(top[t].name2,one.name);
               top[t].score2=one.score; testing();
                  if(t<10||t==10)
               t++;



    }}
  // in case of 2 players
      if(mode2==1)
    {
        if(alone.score>computeer.score)
            {printf("\n %s is the winner\n",alone.name);
                strcpy(top[t].name2,alone.name);
               top[t].score2=alone.score;testing();
                   if(t<10||t==10)
                t++;

            }
       else if(computeer.score>alone.score)
           {printf("\nyou lost the game\n");
                strcpy(top[t].name2,alone.name);
               top[t].score2=alone.score; testing();
                   if(t<10||t==10)
                t++;

           }
        else if(computeer.score=alone.score)
            {printf("\nit's a draw\n");
            strcpy(top[t].name2,alone.name);
               top[t].score2=alone.score; testing();
                   if(t<10||t==10)
                t++;
                }
    }


   //opening a file to to write the top10 counter that specify where the top10 list has  stoped
  vt=fopen("variable.txt","w");
  fprintf(vt,"%d",t);
  fclose(vt);
}
