#include <stdio.h> 
#include <locale.h> 
#include <Windows.h> 
#define MONTH 12 
int main()
{
	setlocale(LC_ALL, "rus");
	float mass[MONTH];
	float max;
	float min;
	int firstNumberRange = 0;
	int secondNumberRange = 0;

	for (int i = 0; i < MONTH; i++)
	{
		printf("������� ������� ����� �� %i ����� � ������� 00,00\n", i + 1);
		scanf("%f", &mass[i]);
		for (int j = 0; j < 50; j++)
		{
			Sleep(1);
			printf("-");
		}
		printf("\n");
	}

	system("cls");
	printf("������� ����� ������ � �������� �� ������ �������� �����\n");

	scanf("%i", &firstNumberRange);
	firstNumberRange = firstNumberRange - 1;
	printf("������� ����� ������ �� ������� �� ������ �������� �����\n");
	scanf("%i", &secondNumberRange);

	system("cls");
	for (int i = firstNumberRange; i < secondNumberRange; i++)
	{
		printf("������� �� %i ����� \t %.2f �.\n", i + 1, mass[i]);
		if (i == firstNumberRange)
		{
			max = mass[i];
			min = mass[i];
		}
		if (max < mass[i])
		{
			max = mass[i];
		}
		if (min > mass[i])
		{
			min = mass[i];
		}
	}

	Sleep(3000);

	printf("\n������������ ������� \t %.2f �.\n"
		"����������� ������� \t %.2f �.\n", max, min);

	return 0;
}