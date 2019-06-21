#include <C:\Users\nt16145\source\repos\SampleTestC\stdio.h>
#include<C:\Users\nt16145\source\repos\SampleTestC\string.h>

char* fizzbuzz(int i) {

	static char result[16];

	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0)  /* iが3の倍数かつ5の倍数 */
			strcpy(result, "Fizz,Buzz");
		else if (i % 3 == 0)  /* iが3の倍数(かつ5の倍数でない) */
			strcpy(result, "Fizz");
		else if (i % 5 == 0)  /* iが5の倍数(かつ3の倍数でない) */
			strcpy(result, "Buzz");
		else  /* iが3の倍数でも5の倍数でもない */
			sprintf(result, "%d", i);
	}
}