#include "Functions.h"


int main()
{


    init();


if(mode2==2){
        char *p = one.name;
p[strlen(p)-1] = 0;
char *b = two.name;
b[strlen(b)-1] = 0;


while(remaining_lines!=0)
    {  one.turn=1;
        while(one.turn==1)
        {color(1);
         printf("it's %s 's turn\n", one.name);
         color(15);
      grid_move();

    // printf("\n\n player 1 score :%d\t\t player 2 score :%d\nplayer 1 played moves:%d\t\t player 2 played moves:%d\nremaining lines : %d\n\n",one.score,two.score,one.moves,two.moves,remaining_lines);
   color(1);
    printf("\n\n player 1 score :%d",one.score);
color(4);
    printf("\t\t player 2 score :%d\n",two.score);
    color(1);
    printf("player 1 played moves:%d",one.moves);
    color(4);
    printf("\t\t player 2 played moves:%d\n",two.moves);
    color(2);
     printf("remaining lines : %d\n\n",remaining_lines);
color(15);
        one.turn--;if(remaining_lines==0){break;}
        }
if(remaining_lines!=0)
       {two.turn=1;
while(two.turn==1)
{
    color(4);
    printf("\n it's %s 's turn\n", two.name);
    color(15);
     grid_move();
color(1);
    printf("\n\n player 1 score :%d",one.score);
    color(15);
color(4);
    printf("\t\t player 2 score :%d\n",two.score);
    color(1);
    printf("player 1 played moves:%d",one.moves);
    color(4);
    printf("\t\t player 2 played moves:%d\n",two.moves);
     printf("remaining lines : %d\n\n",remaining_lines);
color(15);
    two.turn--;if(remaining_lines==0){break;}

}}

}  the_winner(); save_top_10();    init();
    }






    if(mode2==1){
            char *p = alone.name;
p[strlen(p)-1] = 0;
            while(remaining_lines!=0){
            alone.turn=1;
        while(alone.turn==1)
        {
            color(1);
         printf("it's %s 's turn\n", alone.name);
         color(15);
        grid_move();
       // printf("\n\n player 1 score :%d\t\t computer score :%d\nplayer 1 played moves:%d\t\t computer played moves:%d\n total remaining lines : %d\n\n",alone.score,computeer.score,alone.moves,computeer.moves,remaining_lines);
  color(1);
    printf("\n\n your score :%d",alone.score);
color(4);
    printf("\t\t computer score :%d\n",computeer.score);
    color(1);
    printf("your played moves:%d",alone.moves);
    color(4);
    printf("\t\tcomputer played moves:%d\n",computeer.moves);
    color(2);
     printf("remaining lines : %d\n\n",remaining_lines);
color(15);
        alone.turn--;if(remaining_lines==0){break;}

        }


delay(2);



  if(remaining_lines!=0){}
      computeer.turn=1;
        while(computeer.turn==1)
        {
            color(4);
         printf("it's computer turn\n");
         color(15);
         computer();
         printf("\n\n");
  color(1);
    printf("\n\n your score :%d",alone.score);
    color(15);
color(4);
    printf("\t\t computer score :%d\n",computeer.score);
    color(1);
    printf("your played moves:%d",alone.moves);
    color(4);
    printf("\t\tcomputer played moves:%d\n",computeer.moves);
    color(2);
     printf("remaining lines : %d\n\n",remaining_lines);
color(15);        computeer.turn--;if(remaining_lines==0){break;}

        } } the_winner();  init();

        } return(0);}

























