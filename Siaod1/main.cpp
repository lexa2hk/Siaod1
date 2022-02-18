// Siaod1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*
1.	Найти индекс элемента массива, произведение цифр которого больше нуля и кратно трем.
2.	Вставить новый элемент в массив перед элементом с максимальным значением.
3.	Удалить элемент массива, произведение цифр которого больше нуля и кратно трем.
*/

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "header.h"
using namespace std;


/*int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    //через статический массив
    int data[100];
    int fact_len=0;
    cout << "Type n (1<n<100):\n";
    cin >> fact_len;
    fill(data, 100);
    printArr(data, fact_len);
    first_static(data,fact_len);
    printArr(data, fact_len);
    second_static(data, fact_len);
    fact_len++;
    printArr(data, fact_len);
    third_static(data, fact_len);
    fact_len--;
    printArr(data, fact_len);

    //через динамический массив
    int len_dyn;
    cout << "Введите длину желаемого динамического массива: \n";
    cin >> len_dyn;
    len_dyn++;
    int* data_dyn = new int[len_dyn];
    len_dyn--;
    fill_dynamic(data_dyn,len_dyn);
    printArr_dynamic(data_dyn, len_dyn);
    first_dynamic(data_dyn,len_dyn);
    second_dynamic(data_dyn, len_dyn);
    len_dyn++;
    printArr_dynamic(data_dyn, len_dyn);
    third_dynamic(data_dyn, len_dyn);
    len_dyn--;
    printArr_dynamic(data_dyn, len_dyn);

    //вектор
    vector<int> data_v;
    fill_v(data_v);
    print_v(data_v);

    first_v(data_v);
    //second_v(data_v);
    second_v(data_v);
    print_v(data_v);

    third_v(data_v);
    print_v(data_v);




    return 0;
}*/

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    int work = 100;
    int data[100]; //static
    int fact_len = 0;

    int len_dyn=1;    //dynamic

    vector<int> data_v; //vector


    while (work != 0) {
        system("cls");
        cout << "Лабораторная работа №1 ИКБО-13-21 Смольников А.Б. Вариант 20" << endl << endl;
        cout << "Меню\n";
        cout << "Задание 1 (статический массив)" << endl;
        cout << "1) Найти индекс элемента массива, произведение цифр которого больше нуля и кратно трем.\n";
        cout << "2) Вставить новый элемент в массив перед элементом с максимальным значением. \n";
        cout << "3) Удалить элемент массива, произведение цифр которого больше нуля и кратно трем.\n\n";
        cout << "Задание 2 (динамический массив)" << endl;
        cout << "4) Найти индекс элемента массива, произведение цифр которого больше нуля и кратно трем.\n";
        cout << "5) Вставить новый элемент в массив перед элементом с максимальным значением. \n";
        cout << "6) Удалить элемент массива, произведение цифр которого больше нуля и кратно трем.\n\n";
        cout << "Задание 3 (вектор)" << endl;
        cout << "7) Найти индекс элемента массива, произведение цифр которого больше нуля и кратно трем.\n";
        cout << "8) Вставить новый элемент в массив перед элементом с максимальным значением. \n";
        cout << "9) Удалить элемент массива, произведение цифр которого больше нуля и кратно трем.\n\n";
        cout << "0) Выход\n";
        cout << "Ваш выбор: ";
        cin >> work;
        system("cls");
        cout << "Лабораторная работа №1 ИКБО-13-21 Смольников А.Б. Вариант 20" << endl << endl;

        len_dyn = 1;
        fact_len = 0;

        switch (work) {
        case 1: {
            cout << "Type n (1<n<100):\n";
            cin >> fact_len;
            fill(data, 100);
            cout << "Your array:\n";
            printArr(data, fact_len);
            first_static(data, fact_len);

            system("pause");
            break;
        }
        case 2: {
            cout << "Type n (1<n<100):\n";
            cin >> fact_len;
            fill(data, 100);
            cout << "Your array:\n";
            printArr(data, fact_len);
            second_static(data, fact_len);
            cout << "Modified array:\n";
            printArr(data, fact_len+1);
            
            system("pause");
            break;
        }
        case 3: {
            cout << "Type n (1<n<100):\n";
            cin >> fact_len;
            fill(data, 100);
            cout << "Your array:\n";
            third_static(data, fact_len);
            cout << "Modified array:\n";
            printArr(data, fact_len-1);

            system("pause");
            break;
        }
        case 4: {
            cout << "Введите длину желаемого динамического массива: \n";
            cin >> len_dyn;
            len_dyn++;
            int* data_dyn = new int[len_dyn];
            len_dyn--;
            fill_dynamic(data_dyn, len_dyn);
            cout << "Your array:\n";
            printArr_dynamic(data_dyn, len_dyn);
            first_dynamic(data_dyn, len_dyn);

            system("pause");
            break;
        }
        case 5: {
            cout << "Введите длину желаемого динамического массива: \n";
            cin >> len_dyn;
            len_dyn++;
            int* data_dyn = new int[len_dyn];
            len_dyn--;
            fill_dynamic(data_dyn, len_dyn);
            cout << "Your array:\n";
            printArr_dynamic(data_dyn, len_dyn);
            second_dynamic(data_dyn, len_dyn);
            cout << "Modified array:\n";
            printArr_dynamic(data_dyn, len_dyn+1);

            system("pause");
            break;
        }
        case 6: {
            cout << "Введите длину желаемого динамического массива: \n";
            cin >> len_dyn;
            len_dyn++;
            int* data_dyn = new int[len_dyn];
            len_dyn--;
            fill_dynamic(data_dyn, len_dyn);
            cout << "Your array:\n";
            printArr_dynamic(data_dyn, len_dyn);
            third_dynamic(data_dyn, len_dyn);
            cout << "Modified array:\n";
            printArr_dynamic(data_dyn, len_dyn-1);

            system("pause");
            break;
        }
        case 7: {
            data_v.clear();
            fill_v(data_v);
            cout << "Your vector:\n";
            print_v(data_v);
            first_v(data_v);

            system("pause");
            break;
        }
        case 8: {
            data_v.clear();
            fill_v(data_v);
            cout << "Your vector:\n";
            print_v(data_v);
            second_v(data_v);
            cout << "Modified vector:\n";
            print_v(data_v);

            system("pause");
            break;
        }
        case 9: {
            data_v.clear();
            fill_v(data_v);
            cout << "Your vector:\n";
            print_v(data_v);
            third_v(data_v);
            cout << "Modified vector:\n";
            print_v(data_v);

            system("pause");
            break;
        }
        default: {
            break;
        }
        }

    }
}