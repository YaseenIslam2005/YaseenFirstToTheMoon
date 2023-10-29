#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int number=0,numberCopy,numberCopy2,numOfDigits=0,counter=0,digit,sum=0;
// variables declaration

while(number<=0)

{
printf(" Please enter the number:  ");

scanf("%d",&number);
}
//take a positive integer from the user

numberCopy=numberCopy2=number;
// make copies of the number to use it in other functions to use them in other function that will have an effect on the main number

for (numOfDigits=0;numberCopy!=0;++numOfDigits)
{
   numberCopy/=10;

}

//counter for number of digits in the number

for (counter;counter<numOfDigits;++counter)
{
digit=numberCopy2%10;
// to get the last  digit in the number

sum=sum+(pow(digit,numOfDigits));
//add each digit  powered by the  number of digits in the number

numberCopy2=numberCopy2/10;
// to remove the last digit from the number
}

if (sum==number)
// checking if the sum (rules of an Armstrong number ) equal to the number that you want to check
{
  printf("\nThis number is Armstrong number\n");
// number is valid as he follows the rules of an Armstrong number
}
else
{
  printf("\nThis number is not an  Armstrong number\n");
// number is not valid as he does not follow the rules of an Armstrong number
}



        return 0;
}
