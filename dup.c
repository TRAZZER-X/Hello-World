#include<stdio.h>
int main()
{
	int a,b,c,d,e;
    char exp[10];
	printf("please enter any two numbers \n");
for(c=1;c<=2;c++)
{
	if (c==1)
	{
		printf("=>");
	scanf("%d",&a);
	}
	else if(c==2)
	{
		printf("=>");
		scanf("%d",&b);
	}
}
printf("PRESS \n '+' for addition \n '-' for substraction \n '*' for multiplication \n '/' for division \n=> ");
scanf("%s",exp[10]);
if ("%s",exp[10] == "%s","+"){
    c=a+b;
    printf("%d", c);

}
else if (c==2)
{
    printf("exit");
}

	return 0;
}