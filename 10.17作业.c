#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int v;

	printf("速率（海里/小时）");
	scanf("%d", &v);

	if (v < 1)
		printf("Calm(无风");
	else if (1 <= v && v < +3)
		printf("Light air(轻风）");
	else if (4 <= v && v <= 27)
		printf("Breeze(微风)");
	else if (28 <= v && v <= 47)
		printf("Gale(大风）");
	else if (48 <= v && v <= 63)
		printf("Storm(暴风）");
	else
		printf("Hurricane(飓风）");

	return 0;
}



#include <stdio.h>
int main(void)
{
	float a,n;

	printf("收入：");
	scanf("%f", &a);

	if (a <= 750)
		printf("%f", n = a * 0.01);
	else if (750 < a && a <= 2250)
		printf("%f", n = 7.50 + (a - 750) * 0.02);
	else if (2250 < a && a <= 3750)
		printf("%f", n = 37.50 + (a - 2250) * 0.03);
	else if (3750 < a && a <= 5250)
		printf("%f", n = 82.50 + (a - 3750) * 0.04);
	else if (5250 < a && a <= 7000)
		printf("%f", n = 142.50 + (a - 5250) * 0.05);
	else
		printf("%f", n = 230.00 + (a - 7000) * 0.06);

	return 0;
}