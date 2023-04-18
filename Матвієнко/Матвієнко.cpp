// Матвієнко.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include "Student.h"
#include "Fraction.h"
#include "Human.h"
#include "Array.h"
#include "Point.h"
#include "Ànimal.h"

using namespace std;


template<class T>
void printArray(T* a, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}


template<class T1, class T2>
auto Sum(T1 a, T2 b)
{
    return a + b;
}

template<class T>
T Min(T a, T b)
{
    return (a < b) ? a : b;
}


template<class T>
void printArray2D(T** arr, int rows, int columns)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

template<class T, int row, int col>
void func(T arr[row][col] )
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


void printAnimal(Animal* animal)
{
    cout << "Print from function:" << endl;
    animal->print();
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(1251);
    srand(time(0));
    cout.setf(ios::boolalpha);

    //////// 18.04.2023 ////////
    /*{
        Animal* a = new Dog();
        delete a;
    }*/


    Animal* animal[4] =
    {
        new Dog("Spike", 4, true),
        new Cat("Tom", 5, 50),
        new Dog("Chucha", 2, false),
        new Cat("Murka", 1, 5)
    };

    for (size_t i = 0; i < 4; i++)
    {
        animal[i]->print();
        cout << endl;
    }

    printAnimal(animal[2]);

    printAnimal(animal[3]);

    //Animal a;


    //////// 04.04.2023 ////////

    



    //Point p1(3, 5);
    //p1.print();
    //Point p2(2, 3);
    //p2.print();

    //Point p3 = p1 + p2;
    //p3.print();

    //p3++;
    //p3.print();

    //++p3;
    //p3.print();

    //p3 = p3 + 4;
    //p3.print();

    //p3 = 3 + p3;
    //p3.print();

    //if (p3 > p1)
    //{
    //    //
    //}

    //if (p3 == 8)
    //{

    //}



    /*int a[2][2] = {1,2,3,4};
    int b[2][5];

    func<int, 2, 2>(a);
    func<int, 2, 5>(b);*/
    
    


    //Array<int, 20> a;
    //a.set();
    //a.print();


    ////cout << Sum<int, int>(2.1, 3) << endl;

    //cout << Min(2, 3) << endl;
    //cout << Min(2.2, 3.6) << endl;

    /*const int size = 10;
    int a[size];
    for (size_t i = 0; i < size; i++)
    {
        a[i] = rand() % 20;
    }

    printArray(a, size);


    */

    //////// 28.03.2023 ////////


    //Human h("Nick", 30);
    //h.print();

    //Human* zidan = new FootballPlayer("Zidan", 40);
    ////zidan->print();
    ////cout << endl;


    //Human* empl = new Employee("Pupkin Vasya", 30, "Google");
    ////empl->print();


    //Human* humans[] = { zidan, empl };
    //for (size_t i = 0; i < 2; i++)
    //{
    //    humans[i]->print();
    //    humans[i]->whatAreYouDoing();
    //    cout << endl;
    //}


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
