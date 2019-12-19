#include <stdio.h>

int main()
{
	int a, b;
	char s[26][26], c = 'A';
	scanf("%d %d", &a, &b);
	for ( int i = 0; i != a; ++i ) {
		for ( int j = 0; j != b; ++j ) {
			s[i][j] = 'A' + j;
		}
	}
	for ( int i = 1; i != a; ++i ) {
		for ( int j = 0; j != b; ++j ) {
			if ( j <= i - 1 )
				s[i][j] = s[i - 1][j] + 1;
			else
				s[i][j] = s[i - 1][j] - 1;
		}
	}
	for ( int i = 0; i != a; ++i ) {
		for ( int j = 0; j != b; ++j ) {
			printf("%c", s[i][j]);
		}
		printf("\n");
	}
}
