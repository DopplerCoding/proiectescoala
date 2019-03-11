#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream fin("nr.in");

	int arr[100] = { 0 };
	int arr2[100] = { 0 };

	int counter = 0;

	int n;
	fin >> n;

	for (int x = 0; x < n; x++)
	{
		fin >> arr[x];
	}

	for (int x = 0; x < n; x++)
	{
		counter = 0;
		for (int y = 0; y < n; y++)
		{
			if (arr[x] >= arr[y] && x != y)
			{
				counter++;
			}
		}
        
		// partea de program care se ocupa cu dubluri

		if (arr2[counter] == 0)
		{
			arr2[counter] = arr[x];
		}
		else
		{
			while (arr2[counter] != 0)
			{
				counter--;
			}
			arr2[counter] = arr[x];
		}
	}

	for (int x = 0; x < n; x++)
	{
		cout << arr2[x] << " ";
	}
	return 0;
}

//1. Sa se sorteze descrescator
/*
int main()
{
	ifstream fin("nr.in");

	int arr[100] = { 0 };
	int arr2[100] = { 0 };

	int counter = 0;

	int n;
	fin >> n;

	for (int x = 0; x < n; x++)
	{
		fin >> arr[x];
	}

	for (int x = 0; x < n; x++)
	{
		counter = 0;
		for (int y = 0; y < n; y++)
		{
			if (arr[x] < arr[y])
			{
				counter++;
			}
		}
		arr2[counter] = arr[x];
	}

	for (int x = 0; x < n; x++)
	{
		cout << arr2[x] << " ";
	}
	return 0;
}
*/

//2. Sa se numere in ordine inversa
/*
int main()
{
	ifstream fin("nr.in");

	int arr[100] = { 0 };
	int arr2[100] = { 0 };

	int counter = 0;

	int n;
	fin >> n;

	for (int x = 0; x < n; x++)
	{
		fin >> arr[x];
	}

	for (int x = n-1; x >= 0; x--)
	{
		counter = 0;
		for (int y = n-1; y >= 0; y--)
		{
			if (arr[x] > arr[y])
			{
				counter++;
			}
		}
		arr2[counter] = arr[x];
	}

	for (int x = 0; x < n; x++)
	{
		cout << arr2[x] << " ";
	}
	return 0;
}
*/