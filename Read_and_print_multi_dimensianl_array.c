#include<stdio.h>  
int main()
{ 
printf("RA2211042010042\n");
int rows,columns;
scanf("%d%d",&rows,&columns);
int arr[rows][columns]; 
//to read array 
for(int i=0;i<rows;i++)//rows 
{    
 for(int j=0;j<columns;j++)//columns
 {    
   scanf("%d",&arr[i][j]);    
 }  
 
} 
for(int i=0;i<rows;i++)//rows 
{    
 for(int j=0;j<columns;j++)//columns
 {    
   printf("%d",arr[i][j]);    
 }  
 printf("\n");
} 
return 0;  
}    
