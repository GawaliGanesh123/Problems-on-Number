/* Accept One Number from user and print Odd Factors of that number.

    Input-30
    Output-1 3 5 15 
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void OddFactors(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
       if((iNo % iCnt == 0) && (iCnt % 2 !=0))
       {
          printf("%d",iCnt);
       }
    }
}

int main()
{
   int iNo=0;

   printf("Enter the Number:\n");
   scanf("%d",&iNo);

   OddFactors(iNo);
	
	return 0;
}
