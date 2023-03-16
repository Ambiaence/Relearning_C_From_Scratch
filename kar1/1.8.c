#include <stdio.h>

int main() {
	int character;
	int count = 0;

	character = getchar();
	while (character!= EOF) {
		if (character == ' ' || character == '\t'  || character == '\n') {
			count = count + 1;
		}
		character = getchar();
	}
	printf("The number of empty characters is %d", count); 
}
