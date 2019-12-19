#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(long num)
{
	for ( long i = 2; i <= (long)sqrt(num); ++i ) {
		if ( num % i == 0 ) {
			return false;
		}
	}
	return true;
}

long mul_prime(long n)
{
	long ret = 1;
	for ( int i = 1; i <= n; ++i ) {
		if ( is_prime(i) ) {
			ret *= i;
		}
	}
	return ret;
}

int main()
{
	long n;
	scanf("%ld", &n);
	printf("%ld\n", mul_prime(n));
	return 0;
}
