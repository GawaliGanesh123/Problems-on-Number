/*  Accept One number from user and check given number is Even or Odd.

  Input-6
  Output- Number is Even.

  Input-7
  Output-Number is Odd.

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void CheckEvenOdd(int iNo)
{

	if(iNo % 2 == 0)
	{
	   printf("Number is Even");
	}
	else
	{
	  printf("Number is Odd");
	}
}

int main()
{
    int iValue=0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

	return 0;
}
