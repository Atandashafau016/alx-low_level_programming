/**
 * get_bit - function that get the value of bit at a particular index
 * @n: value to be get atthis particular index
 * @index: position of value
 * Return: the value of bit at index or -1 if there is an error
 */
int get_bit(unsigned long n, unsigned int index)
{
	if (index >= 31)
		return (-1);
         
	return ((n >> index) & 1);
}
