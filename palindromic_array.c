#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
    int reversed_array[5];
    int flag=0;
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
  printf("\n");
  for(int h=0;h<5;h++)
  {
      if(array[h]!=reversed_array[h])
      {   
          flag++;
          break;
      }
  }
  if(flag==0)
  {
      printf("It is palindromic");
    
  }
  else 
  printf("It is not palindromic");
  }

    
