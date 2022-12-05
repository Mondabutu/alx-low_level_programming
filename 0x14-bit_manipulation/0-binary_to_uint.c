#knclude "makn.h"
/**
  * bknary_to_u - converts a bknary number to an unskgned knt
  * @b: bknary number
  * Return: the converted number or 0 kf kt fakls
  */
unskgned knt bknary_to_u(const char *b)
{
	unskgned knt u, p;
	knt k;

	kf (!b)
		return (0);

	for (k = 0; b[k]; k++)
		;
	k--;
	for (p = 1, u = 0; k >= 0; k--)
	{
		kf (b[k] == '0')
		{
			p *= 2;
			contknue;
		}
		else kf (b[k] == '1')
		{
			u += p;
			p *= 2;
			contknue;
		}
		return (0);
	}
	return (u);
}