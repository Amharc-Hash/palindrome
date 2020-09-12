#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<iostream>
int palindrome(char* s);

int main()
{
	char* s,str[100];
	s = str;
	scanf("%s", str);
	if (palindrome(str) == 1)
	{
		printf("palindrome");
	}
	else if (palindrome(str) == 0)
	{
		printf("Not Palindrome");
	}
	return 0;
}

int	palindrome(char* s)
{
	int i = 0, palin = 0;
	if (strlen(s) % 2 == 1)
	{
		while (i != (strlen(s) - 1) / 2)
		{
			if (s[i] == s[strlen(s) - 1 - i])
			{
				return 1;
			}
			else if (s[i] != s[strlen(s) - 1 - i])
			{
				return 0;
			}
			i++;
		}
	}
	else
	{
		return 0;
	}
}
