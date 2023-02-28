ask1.c

#include <stdio.h>
int main()
{
	int x,y;
	printf ("Dose enan akeraio arithmo:");
	scanf ("%d", &x);
	y=x;
	x=x+5;	
	x=x*2;
	x=x-4;
	x=x/2;
	x=x-y;
	printf ("To apotelesma einai:%d", x);
	return 0;	
}

