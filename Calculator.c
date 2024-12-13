#include<stdio.h>
int main()
{
	int a,b,c,d,e;
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
printf("PRESS \n '1' for addition \n '2' for substraction \n '3' for multiplication \n '4' for division \n=> ");
scanf("%d",&d);
if (d<=4)
{
switch(d)	
{
case 1:
	e = a+b;
	printf("The addition is %d",e);
break;

case 2:
	e=a-b;
	printf("The substraction is %d",e);
break;
	
case 3:
	e=a*b;
	printf("The multiplication is %d",e);
break;

case 4:
	e=a/b;
	printf("The division is %d",e);
break;
}
}
else 
{
	printf("try again!!!");
}

	return 0;
}