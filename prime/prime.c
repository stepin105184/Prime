
#include "prime.h"

int prime(int number)
{
    int i,c=0;
    if(number<=1)
    {
        return 0;

    }
    else
    {
         for(i=1;i<=number;i++)
    {


       if(number%i==0)
       {
         c++;
       }
    }
     if(c==2)
     {
         return 1;
     }
     else
     {

         return 0;
     }

    }




}













