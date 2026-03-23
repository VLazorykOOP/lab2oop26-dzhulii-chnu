// OOPLab2Tpl.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include "Tasks.h"
#include "Examples.h"
#include <string>


/// @brief 
/// @return 

void task1()
{
    //побітово виконати операцію ((17*a+312*c)/32)-(b*120)+(d*127)
    int a, c, b, d;
    int x;

    cout << "input a: ";
    cin >> a;
    cout << "input b: ";
    cin >> b;
    cout << "input c: ";
    cin >> c;
    cout << "input d: ";
    cin >> d;
    x = (((a + (a << 4)) + (c << 8) + (c << 5) + (c << 4) + (c << 3)) >> 5) - ((b << 7) - (b << 3)) + ((d << 7) - d);
    cout << "output x: " << x << endl;
}
void task2()
{
    string text;
    cout << "input text: ";
    getline(cin >> ws, text);
    // Шифрування: проходимо по кожному символу
    for (int i = 0; i < text.length(); ++i) {
        unsigned char c = (unsigned char)text[i];
        text[i] = (c << 4) | (c >> 4);
    }

    cout << "result: " << text << endl;
}

int main()
{
    int choice;

    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "1 - Task 1" << endl;
        cout << "2 - Task 2" << endl;
        cout << "0 - Exit" << endl;
        cout << "Choose: ";
        cin >> choice;

        switch (choice)
        {
        case 1: task1(); break;
        case 2: task2(); break;
        case 0: cout << "Exit program" << endl; break;
        default: cout << "Wrong choice" << endl;
        }

    } while (choice != 0);

    return 0;
}


