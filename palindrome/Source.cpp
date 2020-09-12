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

int palindrome(char* s)
{
	int palin = 0, i = 0;
	if (strlen(s) % 2 == 1)
	{
		while (i != (strlen(s) - 1) / 2)
		{
			if (s[i] == s[strlen(s) - 1 - i])
			{
				palin = 1;
			}
			else if (s[i] != s[strlen(s) - 1 - i])
			{
				palin = 0;
				break;
			}
			i++;
		}
	}
	else
	{
		palin = 0;
	}
	return palin;
}
