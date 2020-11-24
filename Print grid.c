


#include "Functions.h"

void printgrid()

{

 system("cls");
printf("\n\n\n\n");
        for(index=1;index<=maxindex;index++)
    {
        printf("   %d     ",index);
    }
    index=1;
printf("\n\n%d  ",index);
index++;



      for(int i=0;i<max_r;i++)
      {
    { for(int j=0;j<max_c;j++)
     switch (grid[i][j])
       {
         case 1:
             color(1);
             printf("%c",254);
           color(15);
                 break;
         case 2:
                color(1);
             printf("%c",219);
         color(15);
                 break;
          case 3:printf("%c",254);
                 break;
          case 4:
          color(1);
          printf("1");
         color(15);
                 break;
        case 5:
        color(4);
        printf("2");
         color(15);
                 break;
         case 6:
             color(4);
             printf("%c",254);
           color(15);
                 break;
         case 7:
                color(4);
             printf("%c",219);
         color(15);
                 break;
           default: printf(" ");
                break;
       }printf("\n");

             if((index-1)%4!=0)
                printf("   ");
           if((index-1)%4==0)
       printf("%d  ",(index/4)+1);
index++;
    }}
}
