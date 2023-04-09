#include "main.h"
/**
 * set_bit - function that set the value of bit to 1
 * @n: value to be get atthis particular index
 * @index: position of value
 * Return: the value of bit at index or -1 if there is an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	
        
	*n = (1 << index) | *n;

	return (1);
}
