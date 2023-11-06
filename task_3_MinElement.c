#include <stdio.h>
#include <stdlib.h>
int counter=0;
int minElement(int *p,int *minMain,int size)
{
if (*(p+1)<*minMain)
{
*minMain=*(p+1);
++counter;
if (counter!=(size-1))
{minElement(p+1,minMain,size);}

}
else
{
++counter;
if (counter!=(size-1))
{minElement(p+1,minMain,size);}
}
}
int main ()
{
int size;
printf("Size of the Array: ");
scanf("%d",&size);
int array_1[size],counter_2=0;

for (counter_2;counter_2<size;++counter_2)
{
printf("\nElement no.[%d] : ",counter_2+1);
scanf("%d",&array_1[counter_2]);
}
int minMain=array_1[0];
minElement(array_1,&minMain,size);

printf("\nMin Element: %d",minMain);

}
