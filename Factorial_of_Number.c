/*   Accept Number from user and print Factorial of that Number.

 Input- 5
 Output-120

*/ 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Factorial(int iNo)
{
	int iCnt=0, iFact=1;

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
	   iFact= iCnt*iFact;
	}

	printf("Factorial is:%d",iFact);
}

int main()
{
	int iNo=0;

	printf("Enter the Number");
	scanf("%d",&iNo);

	Factorial(iNo);

	return 0;
}
