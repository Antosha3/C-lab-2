#include "task4.h"

int main() {
	setlocale(LC_ALL, "russian");

	char str[512];
	char* pstr = 0;

			printf("������� ������ �� ��������� ���� � ����:  ");
			fgets(str, 512, stdin);

			if (str[strlen(str) - 1] == '\n')
				str[strlen(str) - 1] = '\0';
			
			printf("str = %s\n\n", str);
			pstr = process(str);
			printf("\npstr = %p, %s\n", pstr, pstr);

	return 0;
}