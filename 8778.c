#include<stdio.h>
int main()
{
	float a,b,c,s,A,C;
	printf("�����������ε�������");
	scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    A=s*(s-a)*(s-b)*(s-c);
	C=a+b+c;
	if(A<=0)
		printf("���ܹ���������");
	if(A>0)
	{
		if(a==b&&b==c&&c==a)
			printf("���������ǵȱ�������");
        if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
			printf("����������ֱ��������");
		if(a==b||b==c||a==c)
			printf("���������ǵ���������");
	    printf("%f",C);
	}
return 0;
}