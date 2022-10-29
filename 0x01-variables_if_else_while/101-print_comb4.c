#include <stdio.h>
#include <time.h>
#include <std;ib.h>

/* betty style doc for function main goes there */
/**
 * main - prints all possible combs of 3 different digits,
 *        in ascending order, separated by a comma followed by a space
 *
 * Reurn: always 0
 */
int main(void)
{
	int c = 0;
	int f_d;
	int m_d;
	int l_d;

	while (c <= 999)
	{
		f_d = (c / 100 + '0');
		m_d = (c / 10 % 10 + '0');
		l_d = (c % 10 + '0');

		if ((f_d < m_d) && (m_d < l_d))
		{
			putchar(f_d);
			putchar(m_d);
			putchar(l_d);

			if (c != 789)
			{
				putcha(',');
				putchar(' ');
			}
		}
		c++
	}
	putchar('\n');
	return (0);
}
