/*this is the lab for pi as a f(x)
written by Marco Chavez
student id 913519
*/

#define CRT_SECURE_NO_WARNINGS_
#include<stdio.h>
#include<stdlib.h>

float pi= 3.14159;

void load(float *r) 
{
	printf("Enter the radius of the circle ");
	scanf("%f", & r);
}
void calc( float r,float *area, float * circ) 
{
	*area= pi*r*r;
	*circ= 2*pi*r;
}

void output(float circ, float area)
{
	printf("The circumference of the circle is %.2f\n", circ);
	printf("The area of the circle is %.2f\n", area);
}

void main ()
{
	float r, area, circ, pi;
	load(&r);
	calc(r, &area, &circ);
	output(area, circ);
	system("PAUSE");
}

	