#include <C:\Users\nt16145\source\repos\SampleTestC\stdio.h>
#include<C:\Users\nt16145\source\repos\SampleTestC\string.h>

char* fizzbuzz(int i) {

	static char result[16];

	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0)  /* i��3�̔{������5�̔{�� */
			strcpy(result, "Fizz,Buzz");
		else if (i % 3 == 0)  /* i��3�̔{��(����5�̔{���łȂ�) */
			strcpy(result, "Fizz");
		else if (i % 5 == 0)  /* i��5�̔{��(����3�̔{���łȂ�) */
			strcpy(result, "Buzz");
		else  /* i��3�̔{���ł�5�̔{���ł��Ȃ� */
			sprintf(result, "%d", i);
	}
}