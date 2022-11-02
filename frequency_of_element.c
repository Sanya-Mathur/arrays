#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
     int number;
     int x=0;//frequency of number
     printf("Enter array\n");
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
    printf("Enter number whose frequency you want to find\n");
   scanf("%d",&number);
   for (int j=0;j<5;j++)//checks every position in array 
   {
      if(number==array[j])
      {
         
          x++;//increases every time it encounters same number 
          
      }
      
   }
   
   printf("Frequency=%d",x);
}
    
       
