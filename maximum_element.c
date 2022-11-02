#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
    int max=0;//max is maximum number
    int position=0;
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
   
   for(int j=0;j<5;j++)
   {
       max=(array[j]>max)?array[j]:max;//ternary operator checks each element of array
       if(array[j]==max)//if statements to update position of maximum element
       position=j;
   }
 printf("Maximum element=%d\nPosition=%d",max,position);
}
