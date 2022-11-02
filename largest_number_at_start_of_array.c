#include <stdio.h>

void main()
{    printf("RA2211042010042\n");
    int array[5];
    int temporary_variable;
    for (int i=0;i<5;i++)//to read an array
    {
        scanf("%d",&array[i]);
        
    }
   
    
        for (int k=4;k>0;k--)//for one passes
        {
            if(array[k]>array[k-1])
            {
                temporary_variable=array[k];
                array[k]=array[k-1];
                array[k-1]=temporary_variable;
            }
        }
    

    
        printf("%d\n",array[0]);
        
    
}
