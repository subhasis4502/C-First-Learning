#include <stdio.h>
#include <stdlib.h>

struct myArray
{
	int total_size;
	int used_size;
	int *ptr;
	
};

void createArray(struct myArray * a, int tSize, int uSize)
{
	(*a).total_size = tSize;
	(*a).used_size = uSize;
	(*a).ptr = (int *) malloc(tSize*sizeof(int));
}

void show(struct myArray *a)
{
	int i = 0;
	for (i; i < (*a).used_size; i++)
	{
		printf("%d\n", (*a).ptr[i]);
	}
}

void setVal(struct myArray *a)
{
	int i = 0;
	int n;
	for (i; i < (*a).used_size; i++)
	{
		printf("Enter element %d: ", i);
		scanf("%d", &n);
		(*a).ptr[i] = n;
	}
}

int main()
{
	struct myArray marks;
	createArray(&marks, 100, 2);
	setVal(&marks);
	show(&marks);
	
	return 0;
}
