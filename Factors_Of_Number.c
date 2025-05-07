/*   Accept Number from User and Print Factors of that Number.

   Input-36
   Output-1 2 3 4 6 9 12 18 36

*/   
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Factors(int iNo)
{
	int iCnt=0;

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
	   if(iNo % iCnt == 0)
	   {
	   	  printf("%d\t",iCnt);
	   }
	}

}

int main()
{
	int iNo=0;

	printf("Enter the Number");
	scanf("%d",&iNo);

	Factors(iNo);

	return 0;
}
