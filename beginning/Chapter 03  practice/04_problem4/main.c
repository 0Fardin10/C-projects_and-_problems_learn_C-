#include <stdio.h>
#include <stdlib.h>

int main()
{
   int year;
   printf("Enter year: \n");
   scanf("%d",&year);
   if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
          printf("this  is  a  leap year");
      }

      else {
        printf("This is  not  leap year");
      }

    return 0;
}
