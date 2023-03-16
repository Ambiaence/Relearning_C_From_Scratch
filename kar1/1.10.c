#include <stdio.h>

int main() {
	int character;

	character = getchar();
	while (character!= EOF) {
		character = getchar();
		if (character == '\t') {
			printf("\\t");
		} else if ( character == '\b') {
			printf("\\b");
		} else { 
			putchar(character);
		}
	}
}
