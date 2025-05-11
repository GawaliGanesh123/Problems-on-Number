/* Accept Number from user & display Table of that Number.
 
 Input- 5
 Output- 5 10 15 20 25 30 35 40 45 50
 
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Table(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=10; iCnt++)
    {
       printf("%d\t",iNo*iCnt);
    }
}

int main()
{
   int iNo=0;

   printf("Enter the Number:\n");
   scanf("%d",&iNo);

   Table(iNo);
	
	return 0;
}
