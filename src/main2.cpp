#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
    int value = 0, secret = 0, result = 0, wolk = 0;   // ���������� ��������� ������, ������ ���������� ������ ����������, ����������, ����� ����.


    printf("Hello, this is a game guess the namber!\n ");
    printf("Computer made up namber!\n");
    srand(time(NULL));    // ������������� ���������� ��������� �����
    secret = rand() % 100; // ���������� ��� ��������� ����� ����� ������ ��� 100
   
    for (wolk = 0; wolk < 10; wolk++) // ���� ������� �������� �������
    {


        printf("Enter your namber: ");
        scanf("%d", &value);

        if (value < 0 || value > 100) // �������� �� ������������ �������� ������ 
        {
            printf("Encorect namber!");
            break;
        }

        result = turn(value, secret); // ����� ���������� �������  turn � ������ ���������������� ���������� 
        if (result == 1)
            printf("Your namber is larger, try again!\n");
        else if (result == -1)
            printf("Your namber is less, try again!\n");
        else if (result == 0)
        {
            printf("Your win!");
                break;
        }
    }
        if (wolk == 10)  // ���� ����� ������ ������������� ���-�� ��� �� ����� ����, �� ���������.
        printf("Your lose!\n");
    
    return 0;
}