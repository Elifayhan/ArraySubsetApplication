#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;


bool isSubset(int arr1[], int arr2[], int m, int n)
{
	int i = 0;
	int j = 0;
	for (j= 0; j < n; j++)
	{
		for (i = 0; i < m; i++)
		{
			if (arr2[j] == arr1[i])
				break;
		}

		if (i == m)
			return 0;
	}

	return 1; // Return 1 if arr2[] is a subset of arr1[]
	
}

int main()
{
	int x, n, i, j, k, l;

	//The First Array
	cout << "\n Enter the size of array 1 : ";
	cin >> x;

	int* arr1 = new int[x];
	cout << "\n";

	for (int i = 0; i < x; i++)
	{
		cout << i + 1 << ".element" << endl;
		cin >> arr1[i];
	}
	for (int i = 0; i < x - 1; i++)
	{
		for (int j = i; j < x; j++)
		{
			if (arr1[j] < arr1[i])
				swap(arr1[i], arr1[j]);
		}
	}
	cout << "The Sequential Array:\n";
	
	for (int i = 0; i < x; i++)
		cout << "Arr1(" << i + 1 << ")=" << arr1[i] << "\n";



	//The Second Array

	cout << "\nEnter the size of array 2 : ";
	cin >> n;


	int* arr2 = new int[n];
	for (k = 0; k < n; k++)
	{
		cout << k + 1 << ".element" << endl;
		cin >> arr2[k];
	}

	for (k = 0; k < n - 1; k++)
	{
		for (l = k; l < n; l++)
		{
			if (arr2[l] < arr2[k])
				swap(arr2[k], arr2[l]);
		}
	}

	cout << "The Sequential:\n";
	for (k = 0; k < n; k++)
		cout << "Arr2(" << k + 1 << ")=" << arr2[k] << "\n";


	if (isSubset(arr1, arr2, x, n))
		cout << "\nArray2 is a subset of Array1\n ";
	else
		cout << "\nArray2 is not a subset of Array1\n";

	getchar();
	return 0;
}