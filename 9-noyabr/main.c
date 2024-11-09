#include <stdio.h>

int main() {
	char soz[100];
	int harf = 0;

	printf("So'z kiriting:\n");
	scanf("%[^\n]%*c", soz);
	for (int i = 0; soz[i] != '\0'; ++i) {
		harf += 1;
	}
	printf("Kiritilgan so'zda %dta harf bor!\n", harf);
	return 0;
} 