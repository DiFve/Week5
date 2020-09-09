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
	char pass[99999];
	int i = 0;
	scanf("%[^\n]", &pass);
	for (int i = 0; i < strlen(pass); i++)
	{
		if (pass[i] >= 'A' && pass[i] <= 'Z')	printf("%c", pass[i]);
		else if (pass[i] >= 'a' && pass[i] <= 'z')	printf("%c", pass[i]);
		else if (pass[i] >= '0' && pass[i] <= '9')	printf("%c", pass[i]);
		else if (pass[i] == ' ')	printf("%c", pass[i]);
	}
	return 0;
}