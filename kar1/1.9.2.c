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
	do {
		if (is_whitespace(character)) {
			putchar(' ');
			while(is_whitespace(character)) {
				character = getchar();		
			}
		} else {
			putchar(character);
			character = getchar();		
		} 
	} while (character != EOF);
}
