#include <stdio.h>
#define MAX 1000001
int main()
{
	char str[MAX];
	int arr[26] = { 0 };
	int max;
	int max_char=0;
	scanf("%s", str);

	for (int i = 0; str[i] !='\0'; i++)
	{
		if (str[i] < 97)
			str[i] += 32;
		arr[str[i]-97]++;
	}
	max = arr[0];
	for (int i = 1; i < 26; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max_char = i;
		}
		else if (arr[i] == max && arr[i] != 0)
		{
			max_char = -1;
		}
	}
	if (max_char != -1)
		printf("%c", max_char+65);
	else
		printf("?\n");

}