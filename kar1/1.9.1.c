#include <stdio.h>
#include <stdbool.h>
bool is_whitespace(char character) { 
	if (character == ' ' || character == '\t'  || character == '\n')
		return true;
	else
		return false;
}

int main() {
	int character;

	character = getchar();
	while (character!= EOF) {
		if (is_whitespace(character)) {
			while(is_whitespace(character)) {
				character = getchar();
			}
			printf(" %c", character);
		} else { 
			putchar(character);
		}
		character = getchar();
	}
}
