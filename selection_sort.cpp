//selection sort
#include <iostream>

using namespace std;

void sort(int arr[], int n)
{
	int i, j, min;
	for (i = 0; i < n-1; i++)
	{
		min = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min])
			min = j;
		swap(&arr[min],&arr[i]);
	}
}
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int arr[20], n, i;
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter each elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Unsorted array is:\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	sort(arr, n);
	cout<<"\nSorted Array is:\n";
	for (i=0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}


