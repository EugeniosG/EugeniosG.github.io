#include <stdio.h>
int main(void)
{
    int costL;
    int costR; 
    printf ("Please enter the cost of going left first and then enter the cost of going right:");
    int rtrn = scanf ("%d%d" ,&costL ,&costR);
    if (rtrn != 2 ){
      return 1 ;
    }
    if (costL<=costR)
    {
       printf("Go left\n");
    }
    else
    {
       printf("Go right\n");
    }
   return 0 ;
}