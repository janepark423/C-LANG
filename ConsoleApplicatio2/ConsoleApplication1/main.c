#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void main(void)
{
	int a, b;
	a = 123;

	int* a_ptr; // * int�� ������ ���� ���� 
	
	a_ptr = &a; //a ������ �ּ�
	
	printf("%d\r\n %d\r\n %p\r\n", a, *a_ptr, a_ptr);

}