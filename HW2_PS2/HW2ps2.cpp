/* This is the code for HW2 program set 2
Written by Marco Chavez
Student ID 913519
CS 36 (Sat) */

#define CRT_SECURE_NO_WARNINGS_
#include<stdio.h>
#include<stdlib.h>

void main ()
{
	float gra;
	char grade;

	printf("Enter the grade {A,B,C,D,F}: ");
	scanf("%c", & grade);

if (grade == 'A'  || grade == 'a')
{
	gra= 4.0;
}
else {
	if(grade == 'B' || grade == 'b' ){
		gra = 3.0;}
	else { 
		if(grade == 'C' || grade == 'c'){
			gra = 2.0;}
		else { 
			if (grade == 'D' || grade == 'd'){
				gra= 1.0;}
			else { (grade == 'F' || grade == 'f');{
				gra= 0.0;}
			}
		}
	}
}
	printf("The score for the grade '%c' is %.2f\n", grade, gra);


system("PAUSE");
}


/* it takes into account 'a' and 'A'

Output 1 with lowercase: Enter the grade {A,B,C,D,F}: a
The score for the grade 'a' is 4.00
Press any key to continue . . . 

output 2 with uppercase:
Enter the grade {A,B,C,D,F}: A
The score for the grade 'A' is 4.00
Press any key to continue . . .
*/