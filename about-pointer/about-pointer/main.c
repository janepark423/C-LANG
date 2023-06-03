#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

unsigned char to_decimal(const char bi[])
{
	const size_t bits = strlen(bi);
	unsigned char sum = 0;
	for (size_t i = 0; i < bits; ++i)
	{
		if (bi[i] == '1')
			sum += (int)pow(2, bits - 1 - i);  //동일 : sum+= (unsigned char)pow((double)2, (duble)(bits -1 -i));
		else if (bi[i] != '0') {
			printf("Wrong character : %c", bi[i]);
			exit(1);
		}
	}
	return sum;

}


int main()
{
	printf("%d\n", to_decimal("00010"));
	return 0;
}
