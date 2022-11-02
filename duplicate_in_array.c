#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
    int c=0;

     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
    //constraint:identifies only the first repeating integer
    
 for(int h=0;h<5;h++)//checks every element in the loop
 {
     for(int k=0;k<5;k++)
     {
         if(k!=h && array[h]==array[k])
         {printf("Duplicate of %d found at %d and %d",array[h],h,k);
         c++;
         break;
         }
     }
     if(c==1)
     break;
 }
 if(c==0)
 printf("No duplicate");
 }
 
