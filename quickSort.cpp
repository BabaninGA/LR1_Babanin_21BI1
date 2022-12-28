#include "Header.h"


template <typename T>
static int partition(T arr[], int idx_start, int idx_end)
{
	srand(time(NULL));//automatic randomization
	int idx_pivot = idx_start + rand() % (idx_end-idx_start+1);//randomiation of pivot element
	int pivot = arr[idx_pivot];

	int counter = 0;
	for (int i = idx_start; i <= idx_end; ++i)
		if (arr[i] <= pivot && i!= idx_pivot)//finding the right index of pivot element
			counter++;

	int idx_pivot_new = counter + idx_start;//the right index of pivot element
	std::swap(arr[idx_pivot], arr[idx_pivot_new]);//pivot element is placed in the right place

	int i = idx_start;
	int j = idx_end;
	while (i < idx_pivot_new && j > idx_pivot_new)//moving elements between the left and right side relative to the pivot element
	{
		while (arr[i] <= pivot)
			i++;

		while (arr[j] > pivot)
			j--;

		if (i < idx_pivot_new && j > idx_pivot_new)
			std::swap(arr[i], arr[j]);
	}
	return idx_pivot_new;
}


template <typename T>
void quickSort(T arr[], int idx_start, int idx_end)
{
	if (idx_start >= idx_end)//exit point of the function
		return;

	int idx_pivot = partition(arr, idx_start, idx_end);//finding pivot index for the next function call
	
	//recursive function call
	quickSort(arr, idx_start, idx_pivot - 1);
	quickSort(arr, idx_pivot + 1, idx_end);
}