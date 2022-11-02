#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
    //min is minimum number
    int position=0;
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
   int min=array[0];
   for(int j=0;j<5;j++)
   {
       min=(array[j]<min)?array[j]:min;//ternary operator checks each element of array
       if(array[j]==min)//if statements to update position of minimum element
       position=j;
   }
 printf("Minimum element=%d\nPosition=%d",min,position);
}
