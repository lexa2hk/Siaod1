#pragma once

#ifndef VECTOR_HEADER
#define	VECTOR_HEADER

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

void fill_v(vector<int> &data_v) {
	cout << "¬ведите 0 дл€ ручного заполнени€ вектора, 1 дл€ случайного(0-1000)\n";
	int num;
	cin >> num;
	if (num == 0) {
		cout << "¬водите значени€, нажмите q чтобы закончить\n";
		while (cin>>num)
		{
			data_v.push_back(num);
		}
	}
	else if (num == 1) {
		cout << "¬ведите размер вектора\n";
		int len_v;
		cin >> len_v;
		for (int i = 0; i < len_v; i++) {
			data_v.push_back(rrand(0, 1000));
		}
	}
	else {
		cerr << "Error";
	}
}

void print_v(vector<int> data_v) {
	for (int i = 0; i < data_v.size(); i++) {
		cout << data_v[i] << " ";
	}
	cout << endl;
}

//1
bool checkElement_v(int x) {
	string s = to_string(x);
	int ans = 1;
	for (int i = 0; i < s.length(); i++) {
		ans *= int(s[i]-'0');
	}
	if (ans > 0 and ans % 3 == 0) {
		return true;
	}
	else {
		return false;
	}
}

void first_v(vector<int> data_v) {
	for (int i = 0; i < data_v.size(); i++) {
		if (checkElement_v(data_v[i])) {
			cout << "Index of first 'good' vector element: " << i << endl;
			return;
		}
	}
}

//2
int findMaxIndex_v(vector<int> data_v) {
	int globalMax = 0, maxIndex;
	for (int i = 0; i < data_v.size(); i++) {
		if (data_v[i] > globalMax) {
			globalMax = data_v[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}

void insert_v(vector<int> &data_v, int a, int pos) {
	int temp = a,len_v = data_v.size();
	for (int i = pos; i < len_v; i++) {
		if (i < len_v - 1) {
			swap(temp, data_v[i]);
		}
		else {
			data_v.push_back(temp);
		}
		
	}
	//return data_v;
}

void second_v(vector<int> &data_v) {
	int ind = findMaxIndex_v(data_v);
	cout << "Inserting 1321 before max element with index " << ind << endl;
	insert_v(data_v, 1321, ind);
}

//3
void deleteElement_v(vector<int> &data_v, int delIndex) {
	for (int i = delIndex; i < data_v.size() - 1; i++) {
		data_v[i] = data_v[i + 1];
	}
	data_v.pop_back();
}

void third_v(vector<int> &data_v) {
	for (int i = 0; i < data_v.size(); i++) {
		if (checkElement_v(data_v[i])) {
			cout << "Deleting element with index " << i << endl;
			deleteElement_v(data_v, i);
			break;
		}
	}

}

#endif