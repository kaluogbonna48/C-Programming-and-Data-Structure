#include <stdio.h>
#include "main.h"

/**
 * star_pyramid - Pyramid of Stars
 * @rows: number of rows
 * @i: rows loop iterator
 * @j: column loop iterator
 *
 * Return: nothing
 */

void star_pyramid ()
{
	int rows, i, j;

	printf("Please enter the levels of stars:\n");
	scanf("%d", &rows);

	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= (2*rows - 1); j++)
		{
			if (j >= (rows - (i-1)) && j <= (rows + (i-1)))
			{
				printf("*");
			}else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
