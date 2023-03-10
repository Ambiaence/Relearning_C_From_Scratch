#include <stdio.h>

int main() {
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
		printf("The expression \"getchar() != EOF\" equals %d", c != EOF); /*EOF is ctrl + D on my linux machine*/
	}
}
