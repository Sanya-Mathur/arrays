#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
     int odd_numbers=0;
     int even_numbers=0;
     
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
  for (int j=0;j<5;j++)//checks every element
  {
      if(array[j]%2==1)
      odd_numbers++;
      else 
      even_numbers++;
  }
  printf("Number of odd numbers=%d\n",odd_numbers);
  printf("Number of even numbers=%d\n",even_numbers);

}

    
