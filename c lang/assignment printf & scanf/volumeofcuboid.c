#include <stdio.h>

int main() {

	float l, b, h;
	printf("Enter the length, breadth, and height: ");
	scanf("%f %f %f",&l,&b, &h);

	printf("the volume of cuboide is %.1f",(l*b*h));

	printf("\n");
	return 0;
}