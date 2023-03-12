#include <stdio.h>

int main() {
	int character;

	while (character != EOF) {
		putchar(character);
		character = getchar();
	}
}
	
