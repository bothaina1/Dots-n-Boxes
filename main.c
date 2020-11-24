#include "Functions.h"


int main()

{
    //caling the start menu
      start();

while(1){
        // if two players
if(mode2==2){

//loop till the remaining lines is zero
while(remaining_lines!=0)

   { //determining which player turn
        one.turn=1;
        while(one.turn==1)
        {color(1);
         printf("it's %s 's turn\n", one.name);
         start_t=clock();
         color(15);
           // calling function to scan the move
      grid_move();
      //calculating time
      time_taken();
      time_passed();


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
     printf("time taken :%d minutes %d seconds\ntime passed from the start : %d minutes %d seconds\n\n\n",minutes_taken,seconds_taken,minutes_passed,seconds_passed);
color(15);
        one.turn--;if(remaining_lines==0){break;}
        }
if(remaining_lines!=0)
       {two.turn=1;
while(two.turn==1)
{
    color(4);
    printf("\n it's %s 's turn\n", two.name);
    start_t=clock();
    color(15);
     grid_move();
     time_taken();time_passed();
color(1);
    printf("\n\n player 1 score :%d",one.score);
    color(15);
color(4);
    printf("\t\t player 2 score :%d\n",two.score);
    color(1);
    printf("player 1 played moves:%d",one.moves);
    color(4);
    printf("\t\t player 2 played moves:%d\n",two.moves);
     printf("remaining lines : %d\n",remaining_lines);

     printf("time taken :%d minutes %d seconds\ntime passed from the start : %d minutes %d seconds\n\n\n",minutes_taken,seconds_taken,minutes_passed,seconds_passed);
color(15);
    two.turn--;if(remaining_lines==0){break;}

}}

}the_winner(); save_top_10();    start();
    }





//if one player
    if(mode2==1){

//loop till the remaining lines is zero
            while(remaining_lines!=0){

//
            alone.turn=1;
            //it loop in case of completting the boxes
           while(alone.turn==1)
        {
            color(1);
         printf("it's %s 's turn\n", alone.name);
         start_t=clock();
         color(15);
         // calling function to scan the move
        grid_move();
        //calculating the time
        time_taken();time_passed();

  color(1);
    printf("\n\n your score :%d",alone.score);
color(4);
    printf("\t\t computer score :%d\n",computeer.score);
    color(1);
    printf("your played moves:%d",alone.moves);
    color(4);
    printf("\t\tcomputer played moves:%d\n",computeer.moves);
    color(2);
     printf("remaining lines : %d\n",remaining_lines);

     printf("time taken :%d minutes %d seconds\ntime passed from the start : %d minutes %d seconds\n\n\n",minutes_taken,seconds_taken,minutes_passed,seconds_passed);
color(15);
        alone.turn--;if(remaining_lines==0){break;}

        }



// if remaining lines is zero so there is no more turns
  if(remaining_lines!=0){
      //activating the turn
      computeer.turn=1;
       //it loop in case of completting the boxes
            while(computeer.turn==1)
        {
            color(4);
         printf("it's computer turn\n");
         color(15);
//calling the computer function
         computer();
         //calculating the time
         time_taken();time_passed();
         printf("\n\n");
         //printing  clolorful data by calling
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
printf("time taken :%d minutes %d seconds\ntime passed from the start : %d minutes %d seconds\n\n\n",minutes_taken,seconds_taken,minutes_passed,seconds_passed);


color(15);        computeer.turn--;
//in case of there is no remaining lines
if(remaining_lines==0){break;}

        } }

        }
        //calling the winner function to determine the vinnner and print the name
         the_winner();

         save_top_10();  start();  }

        }}



















