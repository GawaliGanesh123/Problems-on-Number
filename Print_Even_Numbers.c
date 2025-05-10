/* Accept One Number from user and print  all Even Numbers between 1 to User given number.

    Input-30
    Ouput- 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
       if((iCnt % 2 ==0))
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

   PrintEven(iNo);
	
	return 0;
}
