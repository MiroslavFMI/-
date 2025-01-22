// УП_Тест_Подготовка.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;



//task01 - function
bool CheckMatrix(int matrix[][128], int size)
{
    int middle = size / 2;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    for (int i = 0; i < middle; i++)
    {
        sum1 += matrix[i][i];
    }
    for (int i = middle + 1; i < size; i++)
    {
        for (int j = 0; j < middle; j++)
        {
            if (j == i - middle - 1)
            {
                sum2 += matrix[i][j];
            }
        }
    }
    for (int i = 0; i < middle; i++)
    {
        for (int j = middle + 1; j < size; j++)
        {
            if (i == j - middle - 1)
            {
                sum3 += matrix[i][j];
            }
        }
        
    }
    for (int i = middle + 1; i < size; i++)
    {
        sum4 += matrix[i][i];
    }

    if (sum1 == sum2 && sum1 == sum3 && sum1 == sum4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////task02 - function
//bool CheckNumber(const char* strX, const char* strN, int length)
//{
//    bool match = true;
//    for (int i = 0; i < length; i++)
//    {
//        if (strX[i] != strN[i] + 49)
//        {
//            match = false;
//        }
//    }
//    return match;
//}



int main()
{
    //task01
    int size;
    do
    {
        cout << "Enter size: ";
        cin >> size;
    } while (size <= 3 || size % 2 == 0);
    int matrix[128][128];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
    bool match = CheckMatrix(matrix, size);
    if (match)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }


    ////task02
    //int length;
    //cout << "Enter length :";
    //cin >> length;
    //char* strX = new char[length + 1];
    //cin >> strX;
    //char* strN = new char[length + 1];
    //cin >> strN;
    //bool match = CheckNumber(strX, strN, length);
    //if (match)
    //{
    //    cout << "Yes";
    //}
    //else
    //{
    //    cout << "No";
    //}

    //delete []strX;
    //delete []strN;

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
