#include "main.h"
/**
 * clear_bit - function that set the value of bit to zero
 * @n: value to be get atthis particular index
 * @index: position of value
 * Return: the value of bit at index or -1 if there is an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
         else
	*n = (0 << index) | *n;

	return (1);
}
