#include "task6.h"

#define printf //

static void clean_stdin(void) {
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

char* clear(char* line) {
	printf("start_line = %s\n", line);
	printf("strlen(line) = %d\n", strlen(line));

	int inWord = 0;

	printf("line = %s\n", line);
	int i = 0;
	while (line[i]) {
		if (line[i] != ' ' && inWord == 0) { // ������ �� ������
			inWord = 1;
			printf("line[%d] = %c ������ �� ������\n", i, line[i]);
		}
		else if (line[i] != ' ' && line[i + 1] == ' ' && inWord == 1) { // ��������� �����
			inWord = 0;
			printf("line[%d] = %c ��������� �����\n", i, line[i]);
		}
		else if (line[i] != ' ' && line[i + 1] != ' ') { // ������ �����
			printf("line[%d] = %c ������ �����\n", i, line[i]);
			inWord = 1;
		}
		else if (line[i] == ' ' && line[i + 1] != ' ' && inWord == 0) { // ��������� ������
			if (i == 0) {
				for (int j = i; j < strlen(line) - 1; j++) {
					line[j] = line[j + 1];
				}
				line[strlen(line) - 1] = '\0';
				inWord = 1;
				printf("line[%d] = %c ��������� ������\n", i, line[i]);
				i--;
			}
			/*else {
				printf("line[%d] = %c ������ �����\n", i, line[i]);
			}*/
		}
		else if (line[i] == ' ' && line[i + 1] == ' ') { // �������� �������
			for (int j = i; j < strlen(line) - 1; j++) {
				line[j] = line[j + 1];
			}
			line[strlen(line) - 1] = '\0';
			printf("line[%d] = %c �������� �������\n", i, line[i]);
			i--;
		}

		i++;
	}

	if (line[strlen(line) - 1] == ' ') { // ��������� ������
		line[strlen(line) - 1] = 0;
		printf("��������� ������\n");
	}

	printf("end_line = %s\n", line);
	printf("strlen(line) = %d\n", strlen(line));

	return line;
}
