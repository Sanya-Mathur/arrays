#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
     int count=0;//number of divisors
     int number_of_primes=0;
     
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
  for (int j=0;j<5;j++)//to check every element of array
  {  count=0;
      for (int h=1;h<=array[j];h++)//checks all numbers unitl element 
      {
          if(array[j]%h==0)
          count++;
      }
      if(count==2)
      {
          printf("%d is prime\n",array[j]);
          number_of_primes++;
      }
      
  }
  printf("number of primes=%d", number_of_primes++);
}
