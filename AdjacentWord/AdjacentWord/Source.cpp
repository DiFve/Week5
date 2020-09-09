#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char password[999999];
	scanf("%s", password);
	int n = strlen(password);
	if (n >= 10)
	{
		for (int i = 0; i < strlen(password); i++)
		{
			if (password[i] == password[i - 1])
			{
				printf("*%c", password[i]);
			}
			else	printf("%c", password[i]);
		}
	}
	else	printf("ERROR");
	return 0;
}