#include<stdio.h>
/**
 * main-print out sizes of data types in c
 * return:0
*/
int main(void)
{
	int a;
	long b;
	long long c;
	char d;
	float e;

	printf("Size of a char: %lu byte(s)/n",(unsigned long)sizeof(a));
	printf("Size of a int: %lu byte(s)/n",(unsigned long)sizeof(b));
	printf("Size of a long long: %lu byte(s)/n",(unsigned long)sizeof(c));
	printf("Size of a char: %lu byte(s)/n",(unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)/n",(unsigned long)sizeof(e));
        return(0);
}	

