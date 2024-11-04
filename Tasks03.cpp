// Tasks03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //task 2
    int num1, num2;
    std::cout << "Enter number 1 : ";
    std::cin >> num1;
    int delitel = num1;
    std::cout << "Enter number 2 : ";
    std::cin >> num2;
    bool sum = false;
    for (int i = 2; i <= num1; i++)
    {
        if (num1 % i == 0)
        {

            for (int r = i * i; r <= num2; r = r * r)
            {
                if (num2 % r == 0)
                {
                    sum = true;
                }
            }
        }
    }
    if (sum == true)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    ////task 4
    //int count;
    //double price;
    //std::cout << "Enter the price: ";
    //std::cin >> price;
    //std::cout << "Enter the number of people: ";
    //std::cin >> count;
    //double profit;
    //if (count >= 5 && count <= 10)
    //{
    //    price = price - price / 20;
    //}
    //else if (count >= 11 && count <= 20)
    //{
    //    price = price - price / 10;
    //}
    //else if (count >= 21)
    //{
    //    price = price - price * 15 / 100;
    //}
    //profit = price * count;
    //std::cout << profit;

    ////task 5
    //int n;
    //int count = 1;
    //std::cout << "Enter N: ";
    //std::cin >> n;
    //while (n > 0)
    //{
    //    for (int i = 1; i <= count; i++)
    //    {
    //        std::cout << count;
    //        n--;
    //        if (n <= 0)
    //        {
    //            break;
    //        }
    //    }
    //    count++;
    //}
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
