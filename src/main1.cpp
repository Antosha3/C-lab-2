#include "task1.h"

int main() {
	setlocale(LC_ALL, "russian");

	int startHeight = 0;
	int currTime = 0;
	float L = 0.0;

			printf("������� ������� ����� � ������: ");
			scanf("%d %d", &currTime, &startHeight);


		L = height(currTime, startHeight);
		printf("L = %f\n", L);

	return 0;
}