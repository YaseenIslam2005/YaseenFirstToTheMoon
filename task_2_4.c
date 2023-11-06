#include <stdio.h>

#include <stdlib.h>
void checkPrimesPerfect(int size,int array_1[],int *noOfPrimes,int *no0fPerfects);
int main()
{
int size,no0fPerfects=0,noOfPrimes=0,counter=0;

printf("Size of the Array : ");

scanf("%d",&size);

int array_1[size];

for (counter;counter<size;++counter)
{
printf("\nElement no.[%d] : ",counter+1);
scanf("%d",&array_1[counter]);
}

checkPrimesPerfect(size,array_1,&noOfPrimes,&no0fPerfects);

printf("\nNumber of Perfects in the Array : %d\n",no0fPerfects);

printf("\nNumber of Primes in the Array : %d\n",noOfPrimes);
}
void checkPrimesPerfect(int size,int array_1[],int *noOfPrimes,int *no0fPerfects)
{
int counter=0,counter_2,checkPrime=1,sum=1;
for (counter;counter<size;++counter)
{
counter_2=array_1[counter]-1;
if (array_1[counter] <=1)
{
continue;
}
for  (counter_2;counter_2>1;--counter_2)
{
if (array_1[counter]%counter_2==0)
{
        checkPrime=0;
        sum+=counter_2;
}
}
if (sum==array_1[counter])
{++(*no0fPerfects);}
if (checkPrime)
{++(*noOfPrimes);}

sum=1;
checkPrime=1;
}
}

