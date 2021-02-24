//this code is for finding the smallest number of bills
//written by Marco Chavez
//student id 913519	
//CS 36 Sat

#define _CRT_SECURE_NO_WARNNGS
#include<stdio.h>
#include<stdlib.h>

void main ()
{
	int amount,twenty,ten,five,one;

	printf("Enter the dollar amount $ ");
	scanf("%d",& amount);
	//printf("%d", amount);

	twenty = amount/20;
	amount = amount%20;

	ten = amount/10;
	amount = amount%10;

	five = amount/5;
	amount = amount%5;

	one = amount/1;
	amount = amount%1;
	
	printf("$20 bills: %d\n", twenty);
	printf("$10 bills: %d\n", ten);
	printf("$5 bills: %d\n", five);
	printf("$1 bills: %d\n", one);

system("PAUSE");
}

/*Enter the dollar amount $ 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3
Press any key to continue . . . */