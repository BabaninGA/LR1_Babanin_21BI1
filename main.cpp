#include "quickSort.cpp"
#include "insertionSort.cpp"
#include "selectionSort.cpp"
#include "Header.h"


int main()
{
	const int n = 10;
	int arr1[n];
	srand(time(NULL));//automatic randomization
	for (int i = 0; i < n; ++i) {                   
		arr1[i] = 0 + rand() % (1000 - 0 + 1);//filling an array with random elements
	}

	for (int i = 0; i < n; ++i) {
		std::cout << arr1[i]<< " ";
	}
	std::cout << std::endl;

	quickSort(arr1, 0, n - 1);//calling the function

	for (int i = 0; i < n; ++i) {
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;


	const int m = 10;
	int arr2[m];
	srand(time(NULL));//automatic randomization
	for (int i = 0; i < m; ++i) {
		arr2[i] = 0 + rand() % (1000 - 0 + 1);//filling an array with random elements
	}

	for (int i = 0; i < m; ++i) {
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;

	insertionSort(arr2, m);//calling the function

	for (int i = 0; i < m; ++i) {
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;


	const int k = 10;
	int arr3[k];
	srand(time(NULL));//automatic randomization
	for (int i = 0; i < k; ++i) {
		arr3[i] = 0 + rand() % (1000 - 0 + 1);//filling an array with random elements
	}

	for (int i = 0; i < k; ++i) {
		std::cout << arr3[i] << " ";
	}
	std::cout << std::endl;

	selectionSort(arr3, k);//calling the function

	for (int i = 0; i < k; ++i) {
		std::cout << arr3[i] << " ";
	}

	return 0;
}