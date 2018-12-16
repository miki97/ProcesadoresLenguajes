#include <stdlib.h>
#include <stdio.h>

int i, n, curr;

int main(int argc, char *argv[]) {
	printf("%s", "Introduce un número: ");

	scanf("%d", &n);

	curr = 2;

	i = 1;

	etiqueta0:;
	int temp0;
	temp0 = i < n;

	if (!temp0) goto etiqueta1;
	{
		int d;

		int temp2;
		temp2 = i / curr;
		d = temp2;

		printf("%s", "El número ");
		printf("%d", i);
		printf("%s", " es ");

		int temp3;
		temp3 = d * curr;
		int temp4;
		temp4 = temp3 == i;

		if (!temp4) goto etiqueta2;
		{
			printf("%s", "par\n");

			goto etiqueta3;
		}

		etiqueta2:;
		printf("%s", "impar\n");

		etiqueta3:;
		int temp1;
		temp1 = 1 + i;
		i = temp1;
		goto etiqueta0;
	}

	etiqueta1:;
	printf("%s", "\n");

	return 0;
}

