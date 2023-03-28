// Матвієнко.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include "Student.h"
#include "Fraction.h"
#include "Human.h"

using namespace std;

void func(int& a)
{
    a++;
}



int main()
{
    SetConsoleOutputCP(1251);

    //////// 28.03.2023 ////////


    Human h("Nick", 30);
    h.print();

    FootballPlayer f("Zidan", 40);
    f.print();




    // .  ::   ?:  sizeof()  


    // ++, --, -, +
    // +, -, /, *, % , = , +=, .....

    // ! 
    // ==, < , > , !=, ....

    // [], << , >> 




    //Fraction f1(2, 5);
    //f1.print();
    //Fraction f2(3, 7);
    //f2.print();
    ////cout << f1 << endl;
    //
    //Fraction f3 = f1 + f2; //f1.operator+(f2)
    //f3.print();

    //(f2 + 3).print();
    //(3 + f2).print();

    /*Student st("Petro", 20);
    st.setAge(2000);
    print(st);

    cout << "Вік : " << st.getAge() << endl;*/


    //int a[300000];


    /*int a = 9;

    cout << a << endl;
    cout << sizeof(a) << endl;
    cout << typeid(a).name() << endl;
    cout << &a << endl;

    int* ptr = &a;

    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 55;*/


    /*double a[5] = { 3,67,7,4,2 };

    cout << *a << endl;

    cout << *a << endl;
    cout << *(a+1) << " "  << a[1] << endl;

    for (size_t i = 0; i < 5; i++)
    {
        cout << *(a + i) << " ";
    }
    cout << endl;

    int n;
    cin >> n;
    int* p = new int[n];
    
    delete[] p;*/



    /*int a = 5;      int b = 4;
    int* pa = &a;   int& rb = b;
    *pa = 200;      rb = 200;*/


    /*int a = 5;
    func(a);
    cout << a << endl;*/



    /*const int a = 5;

    int b1 = 5;
    int b2(5);
    int b3{ 5 };

    cout << Student::getCount() << endl;*/

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
