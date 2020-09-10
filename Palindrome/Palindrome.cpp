#include<stdio.h>
#include<string.h>
int main()
{
	char word[500];
	int n, x = 0, y = 1, c = 0;
	gets_s(word);
	n = strlen(word);
	if (n % 2 == 1)
	{
		n = (n / 2);
		while (x <= n)
		{
			if (word[n - x] != word[n + x])
			{
				c = 1;
			}
			x++;
		}
	}
	else
	{
		n = (n / 2) - 1;
		while (x <= n)
		{
			if (word[n - x] != word[n + y])
			{
				c = 1;
			}
			x++;
			y++;
		}
	}
	if (c == 0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	return 0;
}