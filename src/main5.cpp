#include "task5.h"
#include <stdio.h>

int main()
{
    char line[9]; // ������ ��� ������
    printf("it is yours passwords: \n");

    for (int w = 10; w; w--)
        printf("%s\n", password(line)); // ����� ��������� ���������� ������� password
    return 0;
}