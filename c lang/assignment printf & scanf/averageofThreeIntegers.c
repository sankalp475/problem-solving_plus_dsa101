#include <stdio.h>

int  main(void) {

	int x,y,z;
	printf("enter Three number: ");
	scanf("%d %d %d",&x,&y,&z);
    float average = (x+y+z)/3;
    printf(" the average of three number: %d, %d, and %d is %.2f\n",x,y,z,average);
	return 0;
}