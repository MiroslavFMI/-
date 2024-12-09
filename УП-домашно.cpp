// УП-домашно.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
//task03-function
int Matrix(int rows, int columns, int arr[128][128])
{
	int saver[128][128];
	for (int i = 0; i < rows; i++)
	{
		for (int t = 0; t < columns; t++)
		{
			std::cin >> arr[i][t];
		}
	}
	for (int t = 0; t < columns; t++)
	{
		for (int i = 0; i < rows; i++)
		{
			saver[i][t] = arr[rows - 1 - t][t];
		}
	}
	for (int i = rows - 1; i > 0; i--) 
	{
		for (int t = 0; t < columns; t++)
		{
			arr[i][t] = arr[i - 1 - t][t];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int t = 0; t < columns; t++)
		{
			std::cout << arr[i][t] << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	////task01
	//int day, mouth, year, day_week;
	//do
	//{
	//	std::cout << "Enter day: ";
	//	std::cin >> day;
	//} while (day < 1 || day > 31);
	//do
	//{
	//	std::cout << "Enter mouth: ";
	//	std::cin >> mouth;
	//} while (mouth < 1 || mouth > 12);
	//do
	//{
	//	std::cout << "Enter year: ";
	//	std::cin >> year;
	//} while (year < 1900 || year > 2100);

	//switch (mouth)
	//{
	//case 1:
	//case 3:
	//case 7:
	//case 8:
	//case 10:
	//	if (day == 31)
	//	{
	//		day = 1;
	//		mouth++;
	//	}
	//	else
	//	{
	//		day++;
	//	}
	//	break;
	//case 12:
	//	if (day == 31)
	//	{
	//		day = 1;
	//		mouth = 1;
	//		year++;
	//	}
	//	else if (day < 31)
	//	{
	//		day++;
	//	}
	//	break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	if (day == 30)
	//	{
	//		day = 1;
	//		mouth++;
	//	}
	//	else if(day < 30)
	//	{
	//		day++;
	//	}
	//	break;
	//case 2:
	//	if ((year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0) && day == 29)
	//	{
	//		day = 1;
	//		mouth++;
	//	}
	//	else if ((year % 4 != 0 || year % 100 == 0 && year % 400 != 0) && day == 28)
	//	{
	//		day = 1;
	//		mouth++;
	//	}
	//	else
	//	{
	//		day++;
	//	}
	//	break;
	//}

	//if (mouth == 1 || mouth == 2)
	//{
	//	day_week = (day + (13 * (mouth + 13) / 5) + (year - 1) + (year - 1)/ 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
	//}
	//else
	//{
	//	day_week = (day + (13 * (mouth + 1) / 5) + year + year / 4 - year / 100 + year / 400) % 7;
	//}

	//switch (day_week)
	//{
	//case 1:
	//	std::cout << "Sunday" << " ";
	//	break;
	//case 2:
	//	std::cout << "Monday" << " ";
	//	break;
	//case 3:
	//	std::cout << "Tuesday" << " ";
	//	break;
	//case 4:
	//	std::cout << "Wednesday" << " ";
	//	break;
	//case 5:
	//	std::cout << "Thursday" << " ";
	//	break;
	//case 6:
	//	std::cout << "Friday" << " ";
	//	break;
	//case 0:
	//	std::cout << "Saturday" << " ";
	//	break;
	//}
	//std::cout << day << " ";
	//std::cout << mouth << " ";
	//std::cout << year << " ";


	////task02
	//int number, power;
	//int count_numbers = 0;
	//int count_elements = 0;
	//int arr[128];
	//std::cout << "Enter number: ";
	//std::cin >> number;
	//int saver = number;
	//while (number > 0)
	//{
	//	number = number / 10;
	//	count_numbers++;
	//}
	//number = saver;
	//for (int i = 0; i < 128; i++)
	//{
	//	if (arr[i] == 0)
	//	{
	//		count_numbers--;
	//		count_elements++;
	//		continue;
	//	}
	//	if (count_numbers == 1 || number / pow (10, count_numbers - 2) >= 27)
	//	{
	//		count_numbers--;
	//		power = pow(10, count_numbers);
	//		arr[i] = number / power;
	//		if (number % power < pow(10, count_numbers - 1) && count_numbers > 1)
	//		{
	//			arr[i + 1] = 0;
	//			
	//		}
	//		number = number % power;
	//	}
	//	else
	//	{
	//		count_numbers = count_numbers - 2;
	//		power = pow(10, count_numbers);
	//		arr[i] = number / power;
	//		if (number % power < pow(10, count_numbers - 1) && count_numbers > 1)
	//		{
	//			arr[i + 1] = 0;

	//		}
	//		number = number % power;

	//	}
	//	count_elements++;
	//	if (count_numbers == 0)
	//	{
	//		break;
	//	}
	//}
	//for (int i = 0; i < count_elements; i++)
	//{

	//	if (arr[i] == 0)
	//	{
	//		std::cout << ".";
	//	}
	//	else
	//	{
	//		std::cout << char(arr[i] + 96);
	//	}
	//}

	//task04
	int rows, columns, saver;
	int arr[128][128];
	std::cout << "Enter rows: ";
	std::cin >> rows;
	std::cout << "Enter rows: ";
	std::cin >> columns;
	for (int t = 0; t < columns; t++)
	{
		for (int r = 0; r <= t; r++)
		{
			int saver = arr[r][t];
			arr[r][t] = arr[rows - t - 1][t];
		}
		int saver = arr[1][t];
		arr[0][t] = arr[rows - t - 1][t];
		for (int i = 0; i < rows; i++)
		{
			
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
