#include "main.h"

/**
 * infinite_add - addss two numbrs
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: Address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int q, j, k, l, m, n;

	for (q = 0; n1[q]; q++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (q > size_r || j > size_r)
		return (0);
	m = 0;
	for (q = 1, j -= 1, k = 0; k < size_r - 1; q--, j--, k++)
	{
		n = m;
		if (q >= 0)
			n += n1[q] - '0';
		if (j >= 0)
			n += n2[j] - '0';
		if (q < 0 && j < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (q >= 0 || j >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r)
}

