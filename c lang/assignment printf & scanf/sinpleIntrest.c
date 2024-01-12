#include <stdio.h>

int main() {
	float SI, p, r, t;
	printf("Enter the following \n 1> principal amount x,\n 2> rate of simple intrest y,\n 3> time period of intrest Z\nto calculate simple intrest\nput value of x, y, z accordingly: ");
	scanf("%f %f %f",&p, &r, &t);
	SI = (p * r * t) / 100;
	printf("The simple ingrest is: %.3f\n",SI);
	printf("i> principal amount %.0f,\nii> rate of simple intrest %.0f%c,\niii> time period of intrest %.0fyears",p,r,'%',t);
	printf("\n");
	return 0;
}