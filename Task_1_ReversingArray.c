#include <stdio.h>
#include <stdlib.h>

int main()
{
int size,counter=0;
printf("Enter the size of the array : ");
scanf("%d",&size);
int array_1[size], array_2[size];
for(counter;counter<size;++counter)
{
printf("\nElement no.%d : ",counter+1);
scanf("%d",&array_1[counter]);
}
counter=0;
for(counter;counter<size;++counter)
{
array_2[counter]=array_1[size-counter-1];
}
counter=0;
printf("\nOriginal array\n");
for(counter;counter<size;++counter)
{
printf("%d  ",array_1[counter]);
}
counter=0;
printf("\nReversed array\n");
for(counter;counter<size;++counter)
{
printf("%d  ",array_2[counter]);
}















}
