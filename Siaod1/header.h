#pragma once

#ifndef HEADER_1
#define HEADER_1

#include <iostream>
#include <vector>
using namespace std;

//static
int rrand(int range_min, int range_max);
void fill(int* arr, int len);
void printArr(int* arr, int len);
bool checkElement(int x);
void first_static(int* data, int fact_len);
//задача 2
int findMaxIndex(int* arr, int len);
void insert(int* arr, int len, int a, int pos);
void second_static(int* arr, int len);

//задача 3
void deleteElement(int* arr, int len, int delIndex);
void third_static(int* arr, int len);


//dynamic
int rrand_dynamic(int range_min, int range_max);

void fill_dynamic(int* arr, int len);

void printArr_dynamic(int* arr, int len);
bool checkElement_dynamic(int x);
void first_dynamic(int* data, int len);
//задача 2
int findMaxIndex_dynamic(int* arr, int len);
void insert_dynamic(int* &arr, int &len, int a, int pos);
void second_dynamic(int* &arr, int &len);

//задача 3
void deleteElement_dynamic(int* &arr, int &len, int delIndex);

void third_dynamic(int* &arr, int &len);


//vector
int rrand_v(int range_min, int range_max);
void fill_v(vector<int>& data_v);
void print_v(vector<int> data_v);

//1
bool checkElement_v(int x);
void first_v(vector<int> data_v);

//2
int findMaxIndex_v(vector<int> data_v);
void insert_v(vector<int>& data_v, int a, int pos);
void second_v(vector<int>& data_v);

//3
void deleteElement_v(vector<int>& data_v, int delIndex);
void third_v(vector<int>& data_v);


#endif