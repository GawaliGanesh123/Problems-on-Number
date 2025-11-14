// Q.Write a program to print first 10 odd natural numbers.


#include<stdio.h>

int main()
{
    int iCnt=0;

    for(iCnt=1; iCnt<=10*2; iCnt++)
    {
      if(iCnt % 2 != 0)
      {
        printf("%d\t",iCnt);
      }
    }

	return 0;

}
