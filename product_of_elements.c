#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
     int product=1;
     
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
  for (int j=0;j<5;j++)//multiplies all elements
  {
      product*=array[j];
  }
  printf("product of elements=%d",product);
}

    
