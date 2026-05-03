#include <stdio.h>
/**
* Author: Seyi Ojenike
* Programme: WinMingle SE
* Description: Print sizes
* return: 0
*/

int main(void){
        char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %lu byte(s)\n", sizeof(a));
	printf("Size of int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));

	return 0;
}
