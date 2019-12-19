#include <stdio.h>
#include <string.h>

double sum_of_harmonic_series(int n)
{
	double ret = 0;
	for ( int i = 0; i != n; ++i ) {
		ret += 1.0 / (double)(i + 2);
	}
	return ret;
}

int main()
{
	double x;
	int res[1000];
	int n = 1;
	int i = 0;
	memset(res, 0, sizeof(res));
	while ( scanf("%lf", &x) == 1 && x != 0.00 ) {
		while ( sum_of_harmonic_series(n ++) < x )
			continue;
		res[i ++] = n - 1;
		n = 1;
	}
	for ( int k = 0; k != i; ++k ) {
		printf("%d card(s)\n", res[k]);
	}
}
