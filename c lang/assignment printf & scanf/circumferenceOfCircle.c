#include <stdio.h>

int  main(void) {

	float c,PI = 3.141592653589793238462643383279502884197,r;
	printf(" enter the radius of circle  to find circumference: ");
	scanf("%f",&r);
	c = 2*(PI*r);
	printf(" the circumference of the circle is %.4f",c);
	printf("\n");
	return 0;
}