#include "task1.h"

int main() {
	setlocale(LC_ALL, "russian");

	int startHeight = 0;
	int currTime = 0;
	float L = 0.0;

	//while (1) {
		//printf("��� ������ ������� x: ");
		//char type = getchar();
		//printf("type = %c\n", type);
		
		//if (type == 'x') {
		//	printf("�����!\n");
		//	return 0;
		//}
		//else {
			printf("������� ������� ����� � ������: ");
			scanf("%d %d", &currTime, &startHeight);
		//}
		//clean_stdin();

		L = height(currTime, startHeight);
		printf("L = %f\n", L);
	//}

	return 0;
}