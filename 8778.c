#include<stdio.h>
int main()
{
	float a,b,c,s,A,C;
	printf("请输入三角形的三条边");
	scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    A=s*(s-a)*(s-b)*(s-c);
	C=a+b+c;
	if(A<=0)
		printf("不能构成三角形");
	if(A>0)
	{
		if(a==b&&b==c&&c==a)
			printf("该三角形是等边三角性");
        if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
			printf("该三角形是直角三角形");
		if(a==b||b==c||a==c)
			printf("该三角形是等腰三角形");
	    printf("%f",C);
	}
return 0;
}