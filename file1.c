#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ghj.h"
#define N 20
void mesim()
{
	int *A = (int*)malloc(sizeof(int)*N);
	int i;
	for (i = 0; i<N; i++)
	{
		printf("A = %d ", A[i] = rand() % 100 - 50);
		if (!(A[i]%2))
		{
			A[i] *= A[i];
			printf("new = %d ", A[i]);
		}
		printf("\n");
	}
	free (A);
}
