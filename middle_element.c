#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    printf("Enter number of elements\n");
    int number;
    scanf("%d",&number);
    int array[number];
     
    
     printf("Enter array\n");
    for (int i=0;i<number;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
    int first_position=1;
    int last_position=(number);
    int middle=(first_position+last_position)/2;
   if(number%2==0)//for even number of elements
   {  int first_position=0;
    int last_position=(number);
    int middle=(first_position+last_position)/2;
       int middle_element2=array[middle];
       int middle_element1=array[middle-1];
       printf("Middle elements are %d and %d",middle_element1,middle_element2);
   }
   else//for odd number of elements
   {
       int first_positions=0;
       int last_positions=number;
       int middles=(first_positions+last_positions)/2;
       int middle_element=array[middles];
       printf("Middle element is %d ",middle_element);
   }
}
   
