#include <stdio.h>
/**
 * main-program entry point
 * Return:0 if error otherwise non zero
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchat(' ');
		}
	}
	putchar('\n');
	return (0);
}
