#include <stdio.h>

/**
* print_alphabet_x10 - Prints the alphabet 10 times in lowercase
*/
void print_alphabet_x10(void)
{
char letter;

for (int i = 0; i < 10; i++)
{
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}
