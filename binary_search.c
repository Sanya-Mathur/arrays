#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
     int number;
     int x=0;
     int temporary_variable;
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
    printf("Enter number to search\n");
   scanf("%d",&number);
   
   for (int h=5;h>0;h--)//for bubble sort
    {
        for (int k=0;k<(h-1);k++)//for one passes
        {
            if(array[k]>array[k+1])
            {
                temporary_variable=array[k];
                array[k]=array[k+1];
                array[k+1]=temporary_variable;
            }
        }
    }
    
    printf("Sorted array\n");
    
for (int j=0;j<5;j++)//to print an array
    {
        printf("%d ",array[j]);
        
    }
   printf("\n");
   //binary search starts here 
    int max=array[4];//maximum of the numbers
    int min=array[0];//minimum of the numbers
    
    printf("minimum_number=%d maximum_number=%d\n",min,max);
    int average;
    while(min<=max)
    { average=(min+max)/2;
      if(number==array[average])
      { printf("Number found at %d",average);
          break;
      }
      else if(number>array[average])
      {
          min=array[(average+1)];
      }
      else if(number<array[average])
      {
          max=array[(average-1)];
         
      }
      else
      printf("Error");
    }
}

