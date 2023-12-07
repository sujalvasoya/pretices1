#include<stdio.h>
main()
{
	int a,w,l,h;
	printf("Enter wighth :\n");
	scanf("%d",&w);
	printf("Enter height :\n");
	scanf("%d",&l);
	printf("Enter leghth :\n");
	scanf("%d",&h);
	
	a=2*(w*l)+(h*l)+(h*w);
	printf("area of rec prism : %d",a);
}
