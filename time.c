#include "Functions.h"


//calculating time taken for each turn
void time_taken()
{

//calculating the difference between the starting and current second
  start_t=clock()-start_t;
  //turning it innt seconds
timetaken=(start_t/CLOCKS_PER_SEC);
//finding the minutes and seconds
minutes_taken=(int)timetaken/60;
seconds_taken=(int)timetaken%60;

}

//calculating time passed from the start of the program
void time_passed()

{//calculating the time taken from the start


    timepassed=clock();
    //turning it innt seconds
    if(menu==2)

{printf("%lf",constant);
    timepassed=(timepassed/CLOCKS_PER_SEC);
timepassed=timepassed+constant;}

    if(menu==1)
timepassed=(timepassed/CLOCKS_PER_SEC);
//finding the minutes and seconds
minutes_passed=(int)timepassed/60;
seconds_passed=(int)timepassed%60;
}
