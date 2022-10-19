#includ "main"
/**
 * times_table - Print 9 times table
 */
void times_table(void)
{
	int m, n, o;

	for (m = 0, m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			o = n * m;
			if (n == 0)
			{
				_putchar(k + '0');
			}
			if (o < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
			
