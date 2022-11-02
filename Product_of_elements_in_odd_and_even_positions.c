#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
     int odd_product=1;
     int even_product=1;
     
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
  for (int j=0;j<5;j++)//multiplies elements in odd and even positions
  {
      if(j%2==1)
      odd_product*=array[j];
      else 
      even_product*=array[j];
  }
  printf("Product of elements in odd positions=%d\n",odd_product);
  printf("Product of elements in even positions=%d\n",even_product);

}

    
