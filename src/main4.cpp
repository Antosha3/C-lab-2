#include "task4.h"

int main() {
	setlocale(LC_ALL, "russian");

	char str[512];
	char* pstr = 0;

	/*while (1) {
		printf("��� ������ ������� x: ");
		char type = getchar();

		if (type == 'x') {
			printf("�����!\n");
			clean_stdin();
			break;
		}
		else {*/
			printf("������� ������ �� ��������� ���� � ����:  ");
			fgets(str, 512, stdin);

			if (str[strlen(str) - 1] == '\n')
				str[strlen(str) - 1] = '\0';
			
			printf("str = %s\n\n", str);
			pstr = process(str);
			printf("\npstr = %p, %s\n", pstr, pstr);
	//	}
	//}
	return 0;
}