/*pick a random number from a hard range 
		die 1 to 6

		num= rand()%6+1
		- 6 is the highest number 
		- 1 is the lowest
		
		soo
		 high - low +1

	range 2000-8000
	num = rand() 6001+2000

Code:*/
	
	#include<stdio.h>
	#include<stdlib.h>
	#include<time.h>

	void main()
	{
		int d1, d2, sum;
		time_t t;
		srand((unsigned) time (&t));
		d1= rand()%6+1;
		sum= d1+d2;
		printf("%d %d %d\n", d1,d2,sum);

		system("PAUSE");
		}