#include <stdio.h>
#include <stdlib.h>

int main()
{
	long n;
	scanf("%ld", &n);
	int **array = (int **)malloc(sizeof(int *) * (n + 1));
	for ( int i = 0; i != n + 1; ++i ) {
		*(array + i) = (int *)malloc(sizeof(int) * 7);
	}

	for ( int i = 0; i != n + 1; ++i ) {
		for ( int j = 0; j != 7; ++j ) {
			scanf("%d", &array[i][j]);
		}
	}

	int output[7] = {0};
	for ( int i = 1; i != n + 1; ++i ) {
		for ( int j = 0; j != 7; ++j ) {
			for ( int k = 0; k != 7; ++k ) {
				if ( array[i][j] == array[0][k] ) {
					output[k] += 1;
				}
			}
		}
	}

	for ( int i = 0; i != 7; ++i ) {
		printf("%d ", output[i]);
	}
	printf("\n");
}
