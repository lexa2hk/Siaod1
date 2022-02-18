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


int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    /*cout << "Type array length\n";
    int len;
    cin >> len;*/

    //через статический массив
    int data[100];
    fill(data, 100);
    first_static(data);
    second_static(data,100);
    third_static(data, 100);

    //через динамический массив
    int len_dyn;
    cout << "Введите длину желаемого динамического массива: \n";
    cin >> len_dyn;
    int* data_dyn = new int[len_dyn];
    fill_dynamic(data_dyn,len_dyn);
    printArr_dynamic(data_dyn, len_dyn);
    first_dynamic(data,len_dyn);
    second_dynamic(data, len_dyn);
    third_dynamic(data, len_dyn);

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
}
