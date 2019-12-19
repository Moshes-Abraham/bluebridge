#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_even(int n)
{
	return n % 2 == 0 ? true : false;
}

int* fib(int b)
{
	int *fib = (int *)malloc(sizeof(int) * b);
	for ( int i = 0; i != b; ++i ) {
		if ( i == 0 || i == 1 )
			fib[i] = 1;
		else {
			fib[i] = fib[i - 2] + fib[i - 1];
		}
	}
	return fib;
}

int check(int *fib ,int a, int b)
{
	int * ret = (int * )malloc(sizeof(int) * (b - a + 1));
	int sum = 0;
	for ( int i = 0; i != b - a + 1; ++i ) {
		ret[i] = fib[a + i - 1];
	}
	for ( int i = 0; i != b - a + 1; ++i ) {
		sum += ret[i];
	}
	free(fib);
	free(ret);
	if ( sum % 2 == 0 )
		return 0;
	else
		return 1;
}


int main()
{
	int n, *a, *b;
	a = (int *)malloc(sizeof(int) * n);
	b = (int *)malloc(sizeof(int) * n);
	scanf("%d", &n);
	for ( int i = 0; i != n; ++i ) {
		scanf("%d %d", &a[i], &b[i]);
	}

	for ( int i = 0; i != n; ++i ) {
		printf("%d\n", check(fib(b[i]), a[i], b[i]));
	}

	return 0;
}
