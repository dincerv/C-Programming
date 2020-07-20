#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int numOfRows, rows, cols;
	printf("Enter number of rows to be printed.\n");
	scanf("%d", &numOfRows);

	for (rows = 1; rows <= numOfRows; rows++)
	{
		for (cols = 1; cols <= rows; cols++)
		{
			printf("*");
		}
		printf("\n");
	}

	return (0);
}