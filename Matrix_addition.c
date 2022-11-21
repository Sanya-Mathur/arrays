#include<stdio.h>  
int main()
{ 
printf("RA2211042010042\n");
int rows,columns;
scanf("%d%d",&rows,&columns);
int arr1[rows][columns]; 
int arr2[rows][columns];
int sum[rows][columns];
//to read array1
for(int i=0;i<rows;i++)//rows 
{    
 for(int j=0;j<columns;j++)//columns
 {    
   scanf("%d",&arr1[i][j]);    
 }  
 
} 
//to read array2
for(int i=0;i<rows;i++)//rows 
{    
 for(int j=0;j<columns;j++)//columns
 {    
   scanf("%d",&arr2[i][j]);    
 }  
 
} 
//to sum
for(int i=0;i<rows;i++)//rows 
{    
 for(int j=0;j<columns;j++)//columns
 {    
   sum[i][j]=arr1[i][j]+arr2[i][j];    
 }  
 
} 
  //to print
for(int i=0;i<rows;i++)//rows 
{    
 for(int j=0;j<columns;j++)//columns
 {    
   printf("%d",sum[i][j]);    
 }  
 printf("\n");
} 
return 0;  
}    
