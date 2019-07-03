#pragma once
#include "stdio.h"
#include "string.h"

char* fizzbuzz(int i) {



	static char result[16];


		if (i % 3 == 0 && i % 5 == 0)  /* iが3の倍数かつ5の倍数 */

			strcpy_s(result,sizeof(result), "Fizz,Buzz");

		else if (i % 3 == 0)  /* iが3の倍数(かつ5の倍数でない) */

			strcpy_s(result, sizeof(result), "Fizz");

		else if (i % 5 == 0)  /* iが5の倍数(かつ3の倍数でない) */

			strcpy_s(result, sizeof(result), "Buzz");

		else  /* iが3の倍数でも5の倍数でもない */

			sprintf_s(result, sizeof(result), "%d", i);

		return result;



}
