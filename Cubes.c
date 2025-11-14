// Q.Write a program to print Cubes of the first 10 natural numbers.


#include<stdio.h>


int main()
{
    int iCnt=0; 

    for(iCnt=1; iCnt<=10; iCnt++)
    {
      printf("%d\t", iCnt*iCnt*iCnt);
    }

	return 0;

}
