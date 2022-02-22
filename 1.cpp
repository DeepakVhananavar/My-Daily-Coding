// C++ program to sort an array
// with 0, 1 and 2 in a single pass


#include<iostream>
using namespace std;

void sort(int a[], int arr_size)
{
	int lo = 0;
	int hi = arr_size - 1;
	int mid = 0;

	// Iterate till all the elements
	// are sorted
	while (mid <= hi) {
		switch (a[mid]) {

		// If the element is 0
		case 0:
			swap(a[lo++], a[mid++]);
			break;

		// If the element is 1 .
		case 1:
			mid++;
			break;

		// If the element is 2
		case 2:
			swap(a[mid], a[hi--]);
			break;
		}
	}
	for(int i=0;i<arr_size;i++)
	{
	printf("%d\t",a[i]);
	}
}

int main()
{
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, n);

	return 0;
}
