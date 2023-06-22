// WAP to perform some basic operation

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s1,s2,s3,s4;
	printf("value a: ");
	scanf("%d",&a);
	printf("value b: ");
	scanf("%d",&b);
	printf("value c: ");
	scanf("%d",&c);
	s1 = a*b-b*c;
	s2 = a*b/b*c;
	s3 = a*(b/b)*c;
	s4 = a+b/b*c;
	printf("result of s1: %d \n",s1);
	printf("result of s2: %d \n",s2);
	printf("result of s3: %d \n",s3);
	printf("result of s4: %d \n",s4);
	return 0;
}
