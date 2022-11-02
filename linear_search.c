#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
     int number;
     int x=0;
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
   scanf("%d",&number);
   for (int j=0;j<5;j++)//checks every position in array 
   {
      if(number==array[j])
      {
          printf("%d found at position %d",number,j);
          x++;
          break;
      }
      
   }
   if(x==0)
   printf("%d not found",number);
}
    
       
