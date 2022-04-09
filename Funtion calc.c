#include<stdio.h>
    int sum(int a , int b)
    {
    	return a+b;
	}
   
   	
    int sub(int c , int d)
	{
	 return c-d;
	}
	
	int mul(int e , int f)
	{
		return e*f;
	}
	
	int div(int g , int h)
	{
		return g/h;
	}
	
int main()
{
	int a,b,sum_1;
	printf("Enter your 1st Nu for Sum: ");
	scanf("%d",&a);
	printf("Enter your 2nd Nu for Sum: ");
	scanf("%d",&b);
	sum_1=sum(a,b);
	printf("%d",sum_1);
	
	int c,d,sub_1;
	printf("\nPlease give Nu 1 always Big");
	printf("\nEnter your 1st Nu for Sub: ");
	scanf("%d",&c);
	printf("Enter your 2nd Nu for Sub: ");
	scanf("%d",&d);
	sub_1=sub(c,d);
	printf("%d",sub_1);
	
	int e,f,mul_1;
	printf("\nEnter your 1st Nu for Mul: ");
	scanf("%d",&e);
	printf("Enter your 2nd Nu for Mul: ");
	scanf("%d",&f);
	mul_1=mul(e,f);
	printf("%d",mul_1);
	
	int g,h,div_1;
	printf("\nPlease give Nu 1 greater than Zero and Nu 2");
	printf("\nEnter your 1st Nu for Div: ");
	scanf("%d",&g);
	printf("Enter your 2nd Nu for Div: ");
	scanf("%d",&h);
	div_1=div(g,h);
	printf("%d",div_1);
	
	
	
}
	
	

