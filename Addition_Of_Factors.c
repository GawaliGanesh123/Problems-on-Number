/*
    Accept One Number from user and print Addition of all Factors of that number.

    Input-10    (1+2+5+10)
    Output-18

*/

#include<stdio.h>

void AdditionFactors(int iNo)
{
	 int iCnt=0, iAns=0;

	 for(iCnt=1; iCnt<=iNo; iCnt++)
	 {
	   if(iNo % iCnt == 0)
	   {
	      iAns=iCnt+iAns;
	   }
	 }

	 printf("Addition of Factors  is:%d",iAns);
}

int main()
{
	int iNo=0;

	printf("Enter the Number:\n");
	scanf("%d",&iNo);

	AdditionFactors(iNo);

	return 0;
}
