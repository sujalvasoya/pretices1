#include<stdio.h>
main()
{
	float r,area,cir;
	printf("Enter Radius : ");
	scanf("%f",&r);
	area=3.14*r*r;
	cir=2*3.14*r;
	printf("Area of circle is : %.2lf\ncir of circle is : %.2lf",area,cir);
	
}
