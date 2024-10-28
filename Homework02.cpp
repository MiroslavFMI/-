// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    
    //task 4
    int count, num;
    int sum = 0;
    int saver = 1;
    std::cout << "Enter count: ";
    std::cin >> count;
    for (int i = 1; i <= count; i++)
    {
        std::cout << "Enter number: ";
        std::cin >> num;
        saver++;
        if (num != 0)
        {
            sum += num;
        }
        else
        {
            break;
        }
        
    }
    for (int i = saver; i <= count; i++)
    {
        std::cout << "Enter number: ";
        std::cin >> num;
    }
    std::cout << sum;


    ////task 5
    //int n;
    //int sum = 0;
    //std::cout << "Enter n: ";
    //std::cin >> n;
    //while (n >= 10)
    //{
    //    sum = sum + n % 10;
    //    n = n / 10;
    //}
    //sum = sum + n;
    //std::cout << sum;
    


    ////task 6
    //int a, n;
    //int sum = 1;
    //std::cout << "Enter a: ";
    //std::cin >> a;
    //std::cout << "Enter n: ";
    //std::cin >> n;
    //for (int i = 1; i <= n; i++)
    //{
    //    sum = sum * a;
    //}
    //std::cout << sum;

    ////task 8
    //for (int i = 66; i <= 90; i++)
    //{
    //    if (i != 69 && i != 73 && i != 79 && i != 85 && i!= 89)
    //    {
    //        std::cout << char(i) << std::endl;
    //    }
    //}

    ////task 9
    //int n;
    //int timer = 1;
    //std::cout << "Enter n: ";
    //std::cin >> n;
    //for (int i = 1; i <= n; i++)
    //{
    //    for (int r = 1; r <= n; r++)
    //    {
    //        if (r < timer)
    //        {
    //            std::cout << "-";
    //        }
    //        else if (r == timer)
    //        {
    //            std::cout << "0";
    //        }
    //        else
    //        {
    //            std::cout << "+";
    //        }

    //    }
    //    std::cout << "" << std::endl;
    //    timer++;
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
