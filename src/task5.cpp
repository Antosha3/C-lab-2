#include <Windows.h>
#include <time.h>
#include <stdlib.h>

char* password(char* line)
{
	int k = 0;
	int i = 0;
	for (; k<8; k++) // ��������� ���� ��� ���������� ������� �� 8 ��������
	{
		switch (rand() % (3 + 1)) // ���������� ��� ��� ����� �����, ��������� ����� ��� ���������
		{
		case 1:
			{	
				line[k] = rand() % ('9' - '0' + 1) + '0'; // ���������� �����
				break;
			}
		case 2:
			{	
				line[k] = rand() % ('Z' - 'A' + 1) + 'A'; // ���������� ��������� �����
				break;
			}
		case 3:
			{
				line[k] = rand() % ('z' - 'a' + 1) + 'a'; // ���������� ��������� �����
				break; 
			}
		}
	}
	line[8] = '\0';
	return line;
}