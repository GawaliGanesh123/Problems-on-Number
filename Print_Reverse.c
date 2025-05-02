/*
   Accept one number from user and Display Reversing Order of that Number till 1.

   Input-10
   Output-10 9 8 7 6 5 4 3 2 1
*/   

#include<stdio.h>

void ReverseNumber(int iNo)
{
    int iCnt=0;

    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
       printf("%d\t",iCnt);
    }
}

int main()
{
   int iNo=0;

   printf("Enter the Number:\n");
   scanf("%d",&iNo);

   ReverseNumber(iNo);
	
	return 0;
}