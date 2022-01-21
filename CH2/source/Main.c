#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int month;

	printf("Please enter month: ");
	scanf_s("%d", &month);

	switch (month)
	{
	case 3:
	case 4:
	case 5:
		puts("This month is Spring");
		break;
	case 6:
	case 7:
	case 8:
		puts("This month is Summer");
		break;
	case 9:
	case 10:
	case 11:
		puts("This month is Autumn");
		break;
	case 12:
	case 1:
	case 2:
		puts("This month is Winter");
		break;
	default:
		puts("Not this month!\a");
		break;
	}

	system("pause");
	return 0;
}