#include <C:\Users\nt16145\source\repos\SampleTestC\stdio.h>
#include<C:\Users\nt16145\source\repos\SampleTestC\string.h>

char* fizzbuzz(int i) {

	static char result[16];

	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0)  /* i‚ª3‚Ì”{”‚©‚Â5‚Ì”{” */
			strcpy(result, "Fizz,Buzz");
		else if (i % 3 == 0)  /* i‚ª3‚Ì”{”(‚©‚Â5‚Ì”{”‚Å‚È‚¢) */
			strcpy(result, "Fizz");
		else if (i % 5 == 0)  /* i‚ª5‚Ì”{”(‚©‚Â3‚Ì”{”‚Å‚È‚¢) */
			strcpy(result, "Buzz");
		else  /* i‚ª3‚Ì”{”‚Å‚à5‚Ì”{”‚Å‚à‚È‚¢ */
			sprintf(result, "%d", i);
	}
}