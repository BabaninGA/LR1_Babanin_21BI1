#include "Header.h"

template <typename T>
void selectionSort(T arr[], int arrSize) {
	for (int i = 0; i < arrSize - 1; i++) {//the current index which will be filled with the right element
		int cur_min_idx = i;
		T cur_min = arr[i];
		for (int j = i + 1; j < arrSize; j++) {//finding the index of element which will be swapped with the element with the current index
			if (arr[j] < cur_min) {
				cur_min_idx = j;
				cur_min = arr[j];
			}
		}
		if (cur_min_idx != i)
			std::swap(arr[i], arr[cur_min_idx]);//the current index is filled with the right element
	}
}