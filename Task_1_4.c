#include <stdio.h>
#include <stdlib.h>

int main()
{
int size,counter=0;
printf("Enter the size of the array :");
scanf("%d",&size);
int array_1[size],int array_2[size];
for(counter;counter<size;++counter)
{
printf("\nelement no.%d",counter+1);
scanf("%d",&array_1[counter]);
}
counter=0;
for(counter;counter<size;++counter)
{
array_2[counter]=array_1[size-counter-1];
}
counter=0;
printf("array_1\n");
for(counter;counter<size;++counter)
{
printf("%d\t",array_1[counter]);
}
counter=0;
printf("\nreversed array\n");
for(counter;counter<size;++counter)
{
printf("%d\t",array_2[counter]);
}















}
