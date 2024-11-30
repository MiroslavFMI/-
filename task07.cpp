// task08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //task03
    int n, saver;
    int arr[128];
    std::cout << "Enter number: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int r = 0; r < n - 1; r++)
    {
        for (int t = 0; t < n - r - 1; t++)
        {
            if (arr[t] > arr[t + 1])
            {
                saver = arr[t];
                arr[t] = arr[t + 1];
                arr[t + 1] = saver;
            }
        }
    }

    for (int s = 0; s < n; s++)
    {
        if (s >= 1 && arr[s-1] != arr[s])
        {
            std::cout << arr[s] << std::endl;
            break;
        }
    }

    for (int z = n - 1; z << n >= 0; z--)
    {
        if (z <= n-2 && arr[z + 1] != arr[z])
        {
            std::cout << arr[z] << std::endl;
            break;
        }
    }

    ////task04
    //bool exists = false;
    //int n;
    //int arr[5];
    //for (int i = 0; i < 5; i++)
    //{
    //    std::cout << "Enter number from 0 to 9: ";
    //    std::cin >> arr[i];
    //}
    //std::cout << "Enter number ";
    //std::cin >> n;
    //for (int r = 0; r < 5; r++)
    //{
    //    if (arr[r] == n)
    //    {
    //        exists = true;
    //    }
    //}
    //if (exists == true)
    //{
    //    std::cout << "Found";
    //}
    //else
    //{
    //    std::cout << "Not found";
    //}

    ////task05
    //int count[100];
    //int arr[128];
    //for (int i = 0; i < 128; i++)
    //{
    //    std::cout << "Enter number from 1 to 100: ";
    //    std::cin >> arr[i];
    //    if (arr[i] == 0)
    //    {
    //        break;
    //    }
    //}

    //for (int z = 0; z < 100; z++)
    //{
    //    count[z] = 0;
    //}

    //for (int r = 1; r <= 100; r++)
    //{
    //    for (int t = 0; t < 128; t++)
    //    {
    //        if (arr[t] == r)
    //        {
    //            count[r] = count[r] + 1;
    //        }
    //    }
    //    if (count[r] % 2 == 0 && count[r] > 0)
    //    {
    //        std::cout << r << std::endl;
    //    }
    //}

    ////task06
    //int n;
    //int i = 0;
    //bool binary[32];
    //std::cout << "Enter number: ";
    //std::cin >> n;
    //while (n > 0)
    //{
    //    binary[i] = n % 2;
    //    n = n / 2;
    //    i++;
    //}
    //for (int j = i - 1; j >= 0; j--)
    //{
    //    std::cout << binary[j] << ", ";
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
