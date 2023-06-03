﻿#include <stdio.h>
#include <math.h>  //pow()
#include <string.h> //strlen()
#include <stdlib.h> //exitd()
#include <stdbool.h>

unsigned char to_decimal(const char bi[])
{
	const size_t bits = strlen(bi);
	unsigned char sum = 0;
	for (size_t i = 0; i < bits; ++i)
	{
		if (bi[i] == '1')
			//sum += (int)pow(2, bits - 1 - i);  //동일 : sum+= (unsigned char)pow((double)2, (duble)(bits -1 -i));
			sum += (unsigned char)pow((double)2, (double)(bits - 1 - i));
		else if (bi[i] != '0') {
			printf("Wrong character : %c", bi[i]);
			exit(1);
		}
	}
	return sum;

}

void print_binary(const unsigned char num);


int main()
{	
	unsigned char i = to_decimal("000100");
	unsigned char mask = to_decimal("010100")l
	print_binary(i);
	print_binary(mask);
	print_binary(i & mask);
	return 0;
}