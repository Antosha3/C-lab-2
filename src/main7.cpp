#include <stdio.h>
#include <string.h>

int main()
{
	char str[255] = { 0 }; // ������ ���� �����
	char count[255] = { 0 }; // ������ ��� �������� ��������
	int i = 0;
	int j = 0;
	printf("Enter your line: ");
	fgets(str, 255, stdin); // ������ ������
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0'; // ������ � ����� ������ ������ \0 ������ ������� �������� ������
	while (str[i]) // ����������� ������� �� ���� ������� � ������� str
	{
		count[str[i]]++;
		i++;
	}
	while (j < 255) // ������� �� ����� ������� ���������� ��������
	{
		if (count[j] != 0)
			printf("%c = %d \n", j, count[j]);
		j++;
	}
	return 0;
}