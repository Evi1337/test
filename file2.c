#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ghj.h"
#define M 5
#define Z 6

void mesim()
{
	int i = 0, j = 0;
	int **B = (int**)malloc(sizeof(int*)*M);
	for(i; i<M; i++)
		B[i] = (int*)malloc(sizeof(int)*Z);
	for (i = 0; i<M; i++)
	{
		for (j = 0; j<Z; j++)
		{
			printf("B = %d ", B[i][j] = rand() % 100 - 50);
			if (!(B[i][j]%2))
			{
				B[i][j] *= B[i][j];
				printf("new = %d ", B[i][j]);
			}
		}
		printf("\n");
	}
	for (i = 0; i<M; i++)
		free(B[i]);
	free (B);
}
