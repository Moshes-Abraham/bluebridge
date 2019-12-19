#include <stdio.h>

int main()
{
	int n, a[35][35];
	a[0][0] = a[1][0] = a[1][1] = 1;
	scanf("%d", &n);
	for ( int i = 2; i != n; ++i ) {
		for ( int j = 0; j <= i; ++j ) {
			if ( j == 0 ) {
				a[i][j] = 1;
			}
			else if ( j == i ) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
		}
	}
	for ( int i = 0; i != n; ++i ) {
		for ( int j = 0; j <= i; ++j ) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
