/* Accept on number from user and print addition of all numbers from one to user entered number.

   Input- 5 (1+2+3+4+5)
   Output-15

   Input-10
   Output-55
*/  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Addition(int iNo)
{
	int iCnt=0, iAns=0;

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
	   iAns=iAns+iCnt;
	}

	printf("Addition is:%d",iAns);
}

int main()
{
   int iValue=0;

   printf("Enter the Number:\n");
   scanf("%d",&iValue);

   Addition(iValue);

	return 0;
}
