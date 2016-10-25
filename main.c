#include <stdio.h>

/* 
 * Complete str2int() & str2float() functions!!
 *
 * 1. The str2int() can handle minus numbers.
 * 2. The str2int() can detect integer overflow.
 * 3. Implement str2float() function that converts a string to an float value.
 *
 * If you have any question, please feel free to email me. lecture.choi@gmail.com.
 */

#define INT_VAL		"34567"
#define FLOAT_VAL	"3.4567"

int str2int(char *str) {
	int i;
	int count = 0;
	int number = 0;
	int digits = 1;

	while (*(str+count) > 0) {
		count++;
	}

	for (i = count - 1; i >= 0; i--) {
		number += (str[i] - '0') * digits;
		digits *= 10;
	}

	return number;
}

float str2float(char *str) {
	return 3.4567;
}

int main(void) {
	printf("Result = %d\n", str2int(INT_VAL));
	printf("Result = %f\n", str2float(FLOAT_VAL));
	return 0;
}
