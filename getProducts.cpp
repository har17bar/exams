#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
using std::vector;
void getProducts(int arr[], vector<int> &arrlist, int arrsize);
void show(const vector<int> a);
int main() {

	int arr[3] = { 5,3,4};
	int size = sizeof(arr) / sizeof(arr[0]);
	vector<int> arrlist(size);
	
	getProducts(arr, arrlist, size);
	show(arrlist);
}

void getProducts(int arr[], vector<int> &arrlist,int arrsize) {
	int result=1;
	int tmp;
	for (int i = 0; i < arrsize; i++) {
		tmp = arr[i];
		arr[i] = 1;
		for (int j = 0; j < arrsize; j++) {
			result *= arr[j];
		}
		arr[i] = tmp;
		arrlist[i] = result;
		result = 1;
	}
}
void show(const vector<int> a) {
	for (int elem : a)
		std::cout << elem << endl;
}