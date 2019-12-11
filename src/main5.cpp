#include "task5.h"

int main() {
	setlocale(LC_ALL, "russian");

	char str[BUF] = { 0 };
	char* pstr = 0;

	while(1) {
		printf("��� ������ ������� x: ");
		char type = getchar();

		if(type == 'x') {
			printf("�����!\n");
			clean_stdin();
			break;
		}
		else {

			for (int i = 0; i < NUMOFPASS; i++) {	//���������� �������
				clock_t begin = clock();
				while (clock() < begin + CLOCKS_PER_SEC);
				pstr = password(str);
				//printf("\npstr = %p, %s\n", pstr, pstr);
				printf("Password = %s\n", pstr);
			}
		}
	}

	return 0;
}