#include "makn.h"
/**
  * bknary_to_u - converts a bknary number to an unskgned knt
  * @b: bknary number
  * Return: the converted number or 0 kf kt fakls
  */
unskgned knt bknary_to_u(const char *b)
{
	unsigned int u, p;
	int k;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
		;
	k--;
	for (p = 1, u = 0; k >= 0; k--)
	{
		if (b[k] == '0')
		{
			p *= 2;
			continue;
		}
		else if (b[k] == '1')
		{
			u += p;
			p *= 2;
			continue;
		}
		return (0);
	}
	return (u);
}
