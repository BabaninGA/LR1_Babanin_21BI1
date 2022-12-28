#include "Header.h"

template <typename T>
void insertionSort(T arr[], int sizeArr) {
	for (int i = 1; i < sizeArr; i++) {//the index of the element which will be placed in the right place among previously sorted elements
		T current = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > current) {//finding the right place of the current element among previously sorted elements
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = current;//the current element is placed in the right place
	}
}