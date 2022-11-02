#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
    int reversed_array[5];
     int x=4;//for positions to reverse
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
    
  for(int j=0;j<5;j++)//for reversing arrays
  {
      reversed_array[j]=array[x];
      x--;
  }
  printf("Reversed array:\n");
  for(int k=0;k<5;k++)
  {
      printf("%d ",reversed_array[k]);
  }
}
    
