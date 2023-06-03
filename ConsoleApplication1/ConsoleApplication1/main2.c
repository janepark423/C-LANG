#include <stdio.h>




int j;

int b[] = { 10, 20, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
int* bptr = b + 3;

void main(void)
{
	for (j = 0; j < 5; ++j) {
		printf("%d\r\n", *(bptr + j) - 3); //37,47,57,67,77
	}

}