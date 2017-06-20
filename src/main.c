#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "function.h"

int main(){
	float a, b, c, d, x1, x2;
	printf("%s", "Ââåäèòå a\n");
	scanf("%f", &a);
	printf("%s", "Ââåäèòå b\n");
	scanf("%f", &b);
	printf("%s", "Ââåäèòå c\n");
	scanf("%f", &c);

	d = D(a, b, c);

	if (d < 0)
	{
		printf("Êîìïëåêñíûå êîðíè\n");
	}
	else if (d == 0)
	{
		printf("Îäèí êîðåíü\n");
		x1 = X(d, a, b, 1);
		printf("\n%f", x1);
	}
	else
	{
		printf("Äâà êîðíÿ\n");
		x1 = X(d, a, b, 1);
		x2 = X(d, a, b, -1);
		printf("\n%f", x1);
		printf("\n%f", x2);
	}

	return 0;
}
