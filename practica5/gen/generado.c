#include <stdlib.h>
#include <stdio.h>
#include "dec_fun.c"
#include "dec_dat.c"

int n, curr, ultim, cuenta, primero;

int main(int argc, char *argv[]) {
	printf("%s", "Introduce un número: ");

	scanf("%d", &n);

	printf("%s", "\n");
	printf("%d", n);
	printf("%s", " ==");

	curr = 2;

	ultim = 0;

	cuenta = 0;

	primero = 1;

	etiqueta0:;
	int temp0;
	temp0 = curr <= n;

	if (!temp0) goto etiqueta1;
	{
		int d;

		int temp1;
		temp1 = n / curr;
		d = temp1;

		int temp2;
		temp2 = d * curr;
		int temp3;
		temp3 = temp2 == n;

		if (!temp3) goto etiqueta2;
		{
			int temp4;
			temp4 = curr != ultim;

			if (!temp4) goto etiqueta4;
			{
				ultim = curr;

				cuenta = 1;

				goto etiqueta5;
			}

			etiqueta4:;
			int temp5;
			temp5 = cuenta + 1;
			cuenta = temp5;

			etiqueta5:;
			n = d;

			goto etiqueta3;
		}

		etiqueta2:;
		int temp6;
		temp6 = cuenta > 0;

		if (!temp6) goto etiqueta6;
		{
			int temp7;
			temp7 = primero == 0;

			if (!temp7) goto etiqueta8;
			{
				printf("%s", " *");

			}

			etiqueta8:;
			primero = 0;

			printf("%s", " ");
			printf("%d", curr);

			int temp8;
			temp8 = cuenta > 1;

			if (!temp8) goto etiqueta10;
			{
				printf("%s", "^");
				printf("%d", cuenta);

			}

			etiqueta10:;
		}

		etiqueta6:;
		int temp9;
		temp9 = curr + 1;
		curr = temp9;

		cuenta = 0;

		etiqueta3:;
		goto etiqueta0;
	}

	etiqueta1:;
	int temp10;
	temp10 = cuenta > 0;

	if (!temp10) goto etiqueta12;
	{
		int temp11;
		temp11 = primero == 0;

		if (!temp11) goto etiqueta14;
		{
			printf("%s", " *");

		}

		etiqueta14:;
		primero = 0;

		printf("%s", " ");
		printf("%d", curr);

		int temp12;
		temp12 = cuenta > 1;

		if (!temp12) goto etiqueta16;
		{
			printf("%s", "^");
			printf("%d", cuenta);

		}

		etiqueta16:;
	}

	etiqueta12:;
	printf("%s", "\n");

	return 0;
}

