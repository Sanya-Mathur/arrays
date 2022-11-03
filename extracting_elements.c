#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
    
    int position;
    
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
    
 printf("Enter the position of the element you want to display\n");
 scanf("%d",&position);
 printf("The element=%d",array[position]);
}
