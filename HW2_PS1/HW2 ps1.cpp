/* This is HW program set 1
Written by Marco Chavez
Student ID 913519
CS 36 (Sat) */

#define CRT_SECURE_NO_WARNINGS_
#include<stdio.h>
#include<stdlib.h>

void main ()
{
	int x;
	
printf("Enter a wind speed in knots: ");
scanf("%d", & x);

if (x<=1)
	{
	 printf("The wind force is Calm\n"); }
if (x>1 && x<=3)
	{printf("The wind force is light air\n");}
if (x > 3 && x<=27)
	{printf("The wind force is a Breeze\n");}

if (x > 27 && x<=47)
	{printf("The wind force is a Gale\n");}

if (x > 47 && x<=63)
	{printf("The wind force is a Storm\n");}
if (x>63)
	{printf("The wind force is a Hurricane\n");}

system("PAUSE");
}

/*Output:
Enter a wind speed in knots: 4
The wind force is a Breeze
Press any key to continue . . .
*/