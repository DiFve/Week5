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
	char word1[99999], word2[99999];
	scanf("%[^\n]\n", &word1);
	scanf("%[^\n]", &word2);
	int len1 = strlen(word1), len2 = strlen(word2), count = 0;
	if (len1 != len2)
	{
		printf("%s is not equal to %s", word1, word2);
		return 0;
	}
	for (int i = 0; i < len1; i++)
	{
		if (word1[i] >= 'A' && word1[i] <= 'Z')
		{
			if (word1[i] == word2[i] || word1[i] + 32 == word2[i])	count++;
		}
		else if (word1[i] >= 'a' && word1[i] <= 'z')
		{
			if (word1[i] == word2[i] || word1[i] - 32 == word2[i])	count++;
		}
	}
	if (count == len1)
		printf("%s is equal to %s", word1, word2);
	else
		printf("%s is not equal to %s", word1, word2);
	return 0;
}