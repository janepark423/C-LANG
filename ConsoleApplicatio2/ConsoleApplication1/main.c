#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void main(void)
{
	int a, b;
	a = 123;

	int* a_ptr; // * int형 포인터 변수 선언 
	
	a_ptr = &a; //a 변수의 주소
	
	printf("%d\r\n %d\r\n %p\r\n", a, *a_ptr, a_ptr);

}