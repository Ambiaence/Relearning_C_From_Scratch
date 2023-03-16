#include <stdio.h>

int main() {
	int character;
	int encountered = 0;
	int count = 0;

	character = getchar();
	while (character!= EOF) {
		if (character == ' ' || character == '\t'  || character == '\n') {
			encountered = 1;
			character = getchar();
		} else {
			if (encountered == 1) {
				putchar(' ');
				encountered = 0;
			}
			putchar(character);
			character = getchar();
		}
	}
}
