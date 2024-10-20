// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    ////задача 7
    //int num, firstN, max;
    //std::cout << "Enter number: ";
    //std::cin >> num;
    //firstN = num / 1000;
    //max = firstN;
    //if (firstN % 2 != 0)
    //{
    //    std::cout << "First number is odd" << std::endl;
    //}
    //else
    //{
    //    std::cout << "First Number is even" << std::endl;
    //}
    //if (firstN >=num % 10 && firstN >= (num/10) % 10 && firstN >= (num/100) % 10)
    //{
    //    std::cout << "First number has the highest value" << std::endl;
    //}
    //else
    //{
    //    std::cout << "First number doesn't have the highest value" << std::endl;
    //}
    

    ////задача 6
    //double price;
    //int USB_ports, GB_RAM;
    //bool SSD;
    //std::cout << "Price: ";
    //std::cin >> price;
    //std::cout << "Number of USB ports: ";
    //std::cin >> USB_ports;
    //std::cout << "GB RAM: ";
    //std::cin >> GB_RAM;
    //std::cout << "SSD: ";
    //std::cin >> SSD;

    //if (USB_ports >= 3 && GB_RAM >= 8 && SSD == true)
    //{
    //    if (price <= 1500 && price >= 1000)
    //    {
    //        std::cout << "Will be bought";
    //    }
    //    else
    //    {
    //        std::cout << "Won't be bought";
    //    }
    //}
    //else
    //{
    //    if (price <= 800)
    //    {
    //        std::cout << "Will be bought";
    //    }
    //    else
    //    {
    //        std::cout << "Won't be bought";
    //    }
    //}


    // бонус 0
    int tomatoes, peppers, carrots, potatoes, olives, ovkusiteli;
    bool friend_;
    std::cout << "Tomatoes: ";
    std::cin >> tomatoes;
    std::cout << "Peppers: ";
    std::cin >> peppers;
    std::cout << "Carrots: ";
    std::cin >> carrots;
    std::cout << "Olives: ";
    std::cin >> olives;
    std::cout << "Potatoes: ";
    std::cin >> potatoes;
    std::cout << "Ovkusiteli (ml): ";
    std::cin >> ovkusiteli;
    std::cout << "avaliable friend: ";
    std::cin >> friend_;
       
    if (tomatoes >= 5 && peppers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && ovkusiteli >= 300 && friend_ == true)
    {
         std::cout << "You can cook all 3 dishes";
    }
    else if (tomatoes >= 2 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 10 && ovkusiteli >= 200 && friend_ == true)
    {
        std::cout << "You can cook student salad and student soup";
    }
    else if (tomatoes >= 1 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && ovkusiteli >= 150)
    {
        std::cout << "You can cook student salad";
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
