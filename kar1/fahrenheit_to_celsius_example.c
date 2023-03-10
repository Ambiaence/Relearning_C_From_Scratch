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

		fahrenheit = lower;

		while(fahrenheit <= upper) {
			celsius = 5 * (fahrenheit-32) / 9;
			printf("%d\t%d\n", fahrenheit, celsius);
			fahrenheit = fahrenheit + step;
		}
}
