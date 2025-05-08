/*  Accept Number from user print Fibonacci series of that number.

  Input- 5
  Output- 0 1 1 2 3

  Input- 10
  Output- 0 1 1 2 3 5 8 13 21 34
*/  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Fibonacii(int iNo)
{
	int a=-1, b=1, c=0;

	int iCnt=0;

	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
	    c=a+b;

	    printf("%d\t",c);

	    a=b;
	    b=c;
	}
}


int main()
{
	int iNo=0;

	printf("Enter the Number:\n");
	scanf("%d",&iNo);

	Fibonacii(iNo);

	return 0;
}
