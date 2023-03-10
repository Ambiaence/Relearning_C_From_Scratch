#include <stdio.h>

int main() {
		int fahrenheit;
		int celsius;
		int lower;
		int upper;
		int step;

		lower = 0;
		upper = 300;
		step = 20;

		celsius = lower;

		while(celsius <= upper) {
			fahrenheit = (9 * celsius / 5)+32;
			printf("%d\t%d\n", fahrenheit, celsius);
			celsius = celsius + step;
		}
}
