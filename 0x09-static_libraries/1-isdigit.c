/**
 * _isdigit - check if a value (c) is digit
 *
 * @c: value to check
 *
 * Return: 1 if c is digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
