/*this introduces random and time .h 
this is the dice lab*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int d1, d2, sum;
	time_t t;
	srand((unsigned) time (&t));
	d1= rand()%6+1;
	d2= rand()%5+1;
	sum= d1 + d2;
	printf("%d %d %d\n", d1,d2,sum);

	system("PAUSE");
}

/*6 4 10
Press any key to continue . . .*/