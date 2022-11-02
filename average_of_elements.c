#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
     int sum=0;
     
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
  for (int j=0;j<5;j++)//loop to sum elements
  {
      sum+=array[j];
  }
  float average=(float)sum/5;//calculates average
  printf("average of elements=%f",average);
}

    
