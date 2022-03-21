#pragma once
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

int rrand_dynamic(int range_min, int range_max) {
    return rand() % (range_max - range_min + 1) + range_min;
}

void fill_dynamic(int* arr, int len) {
    cout << "Filling array: 0 - manual,1-randomly(0-1000)\n";
    int inp;
    cin >> inp;
    if (inp == 0) {
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
    }
    else if (inp == 1) {
        for (int i = 0; i < len; i++) {
            arr[i] = rrand_dynamic(0, 1000);
        }
    }
    else {
        cerr << "InputError\n";
    }
}

void printArr_dynamic(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool checkElement_dynamic(int x) {
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
void first_dynamic(int* data, int len) {
    for (int i = 0; i < len; i++) {
        if (checkElement_dynamic(data[i])) {
            cout << "Index of first 'good' element: " << i << endl;
            return;
        }
    }
}
//задача 2
int findMaxIndex_dynamic(int* arr, int len) {
    int globalMax = 0, maxIndex=0;
    for (int i = 0; i < len; i++) {
        if (arr[i] > globalMax) {
            globalMax = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

void insert_dynamic(int* &arr, int& len, int a, int pos) {
    len++;
    int* arr1 = new int[len];

    for (int i = 0; i < len-1; i++) {
        arr1[i] = arr[i];
    }
    arr = arr1;

    delete[] arr1;

    int temp = a;
    for (int i = pos; i < len; i++) {
        swap(temp, arr[i]);
    }
    arr[len] = temp;
}

void second_dynamic(int* &arr, int &len) {
    int ind = findMaxIndex_dynamic(arr, len);
    cout << "Inserting 1321 before max element with index " << ind << endl;
    insert_dynamic(arr, len, 1321, ind);
}

//задача 3
void deleteElement_dynamic(int* &arr, int &len, int delIndex) {
    len--;
    int* arr1 = new int[len];
    for (int i = delIndex; i < len; i++) {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < len; i++) {
        arr1[i] = arr[i];
    }
    arr = arr1;
}

void third_dynamic(int* &arr, int &len) {
    for (int i = 0; i < len; i++) {
        if (checkElement_dynamic(arr[i])) {
            cout << "Deleting element with index " << i << endl;
            deleteElement_dynamic(arr, len, i);
            break;
        }
    }



}