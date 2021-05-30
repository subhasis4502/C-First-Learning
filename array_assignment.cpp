#include <stdio.h>

int main()
{
	int array[5] = {0};
	
	for (int i =0; i<6; i++)
		scanf("%d", &array[i]);
		
	printf ("%d", &array[3]); //
	return 0;

	
	
	
}
