#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <string>
//#include "functions.h"
using namespace std;


int rrand(int range_min, int range_max) {
    return rand() % (range_max - range_min + 1) + range_min;
}
void fill(int* arr, int len) {
    cout << "Filling array: 0 - manual,1-randomly(0-1000)\n";
    char inp;
    cin >> inp;
    if (inp == '0') {
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
    }
    else if (inp == '1') {
        for (int i = 0; i < len; i++) {
            arr[i] = rrand(0, 1000);
        }
    }
    else {
        cerr << "InputError\n";
    }
}

void printArr(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool checkElement(int x) {
    string s = to_string(x);
    int ans = 1;
    for (int i = 0; i < s.length(); i++) {
        ans *= int(s[i] - '0');
    }
    if (ans > 0 and ans % 3 == 0) {
        return true;
    }
    else {
        return false;
    }
}
void first_static(int* data) {
    for (int i = 0; i < 100; i++) {
        if (checkElement(data[i])) {
            cout << "Index of first 'good' element: " << i << endl;
            return;
        }
    }
}
//задача 2
int findMaxIndex(int* arr, int len) {
    int globalMax = 0, maxIndex;
    for (int i = 0; i < len; i++) {
        if (arr[i] > globalMax) {
            globalMax = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

void insert(int* arr, int len, int a, int pos) {
    int temp = a;
    for (int i = pos; i < len; i++) {
        swap(temp, arr[i]);
    }
}

void second_static(int* arr, int len) {
    int ind = findMaxIndex(arr, len);
    cout << "Inserting 1321 before max element with index " << ind << endl;
    insert(arr, len, 1321, ind);
}

//задача 3
void deleteElement(int* arr, int len, int delIndex) {
    for (int i = delIndex; i < len - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

void third_static(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        if (checkElement(arr[i])) {
            cout << "Deleting element with index " << i << endl;
            deleteElement(arr, len, i);
            break;
        }
    }



}
