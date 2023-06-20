#include <stdio.h>
/**
 * main - Entry point of my code
 * Return: always 0, success
 * C-functions, nested loops
 */
void print_alphabet(void) {
	char letter = 'a';
	while (letter <= 'z') {
		_putchar(letter);
		letter++
	}
	_putchar('\n');
}
int main(void) {
	print_alphabet();
	return (0);
}
