#include<stdio.h>

int expo(int x, int y)
{
	if (y==0)
	return 1;
	return (expo(x, y-1));
}

int main()
{
	int x;
	int y;
	scanf("%d %d", &x, &y);
	printf("Answer=%d", expo(x,y));
}
