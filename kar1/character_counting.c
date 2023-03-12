#include <stdio.h>

int main() {
	int character;
	int count = 0;

	while (character != EOF) {
		count = count + 1;
		putchar(character);
		character = getchar();
	}

	printf("Total Characters In Input %d", count);
}
	
