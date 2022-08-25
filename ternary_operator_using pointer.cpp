#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2,*p1,*p2;
	int num;	
	printf("Enter a number: ");
	scanf("%d",&n1);
	printf("Enter a number: ");
	scanf("%d",&n2);
	p1=&n1;
	p2=&n2;
	num=(*p1>*p2)?*p1:*p2;
	printf("%d is greater.",num);
	return 0;
}
