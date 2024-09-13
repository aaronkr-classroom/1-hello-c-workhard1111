#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h> //최대 값/ 최소 값 볼 때

int main(void)
{
	//signed short int
	signed short int sshort = 1234;
	printf("signed short int : \n");
	printf("Value: %c\n", sshort);
	printf("Max: %d\n", SHRT_MAX);  //limit의 상수 사용
	printf("Min: %d\n", SHRT_MIN);

	//unsigned short int
	unsigned short int ushort = 1234U;
	printf("unsigned short int : \n");
	printf("Value: %u\n", sshort);
	printf("Max: %d\n", SHRT_MAX);  //limit의 상수 사용
	
	//signed short int
	signed short int sint = 1234;
	printf("\nsigned int : \n");
	printf("Value: %c\n", sint);
	printf("Max: %d\n", INT_MAX);  //limit의 상수 사용
	printf("Min: %d\n", INT_MIN);

	//unsigned short int
	unsigned int uint = 1234U;
	printf("unsigned int : \n");
	printf("Value: %u\n", uint);
	printf("Max: %u\n", UINT_MAX);  //limit의 상수 사용

	//signed long int
	signed long int slong = 123456789;
	printf("\nsigned long int : \n");
	printf("Value: %c\n", slong);
	printf("Max: %ld\n", LONG_MAX);  //limit의 상수 사용
	printf("Min: %ld\n", LONG_MIN);

	//unsigned long int
	unsigned long int ulong = 123456789UL;
	printf("unsigned int : \n");
	printf("Value: %u\n", ulong);
	printf("Max: %u\n", ULONG_MAX);  //limit의 상수 사용



	return 0;
}