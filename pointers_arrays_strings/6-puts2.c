#include <string.h>
#include <stdio.h>

void puts2(char *str)
{

int len;
int i;

	len = strlen(str);
	putchar(str[0]);
	len--;
	for(i = 1; i <= len; i++)
	{
	if (i % 2 == 0)
	{
	putchar(str[i]);
	{
	}
	putchar(10);
	}
	int main(void)
	{
	char *str;
	str = "0123456789";
	puts2(str);
	return (0);
}
