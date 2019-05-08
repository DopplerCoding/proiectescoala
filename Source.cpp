#include<iostream>
#include<fstream>
#include<math.h>

using namespace std;
// 16 din 18

//1. Select Sort
/*
1.1  Masivul sa fie manevrat incepand cu prima locatie de index 0
1.2. Sortarea sa fie descrescatoare si nu crescatoare
1.3. Lista nesortatelor sa fie parcursa de la dreapta spre stanga
*/
//2. Bubble Sort
/*
2.1 Masivul sa fie manevrat incepand cu prima locatie de index
2.2. Sortarea sa fie descrescatoare si nu crescatoare
2.3. Lista buellor sa fie parcursa de la dreapta spre stanga
*/
//3. Counter Sort
/*
1. Sa se sorteze descrescator
2. Sa se numere in ordine inversa
3. Sa se modifice pentru a rula si pentru numere cu repetitie
*/
//4. Shell Sort
/*
4.1 cu bubble a)
4.2 cu bubble b)
4.3 cu bubble c)
*/
//5. Heap sort
/*
5.1 Make heap
5.2 n-1 make heap
*/
//6. Merge sort
/*
6.1 Merge Tool
6.2 Merge Sort
*/
//7. Insert sort
/*
7.1 Insert sort principle
7.2 Insert sort optimized (?)
*/

//---------------------------
//1.Selection Sort
//1.1
/*
int main()
{
	int min;
	int min_pos;
	int z = 0;
	int arr[7] = { 34, 73 , 1 , 6 ,3 , 120 , 0};
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int y = 0; y < n-1; y++)
	{
		min = 500;
		for (int x = y; x < n; x++)
		{
			
			if (arr[x] < min)
			{
				min = arr[x];
				min_pos = x;
			}
		}
		swap(arr[min_pos], arr[z]);
		z++;

	}
	for (int x = 0; x < n; x++)
	{
		cout << arr[x] << " ";
	}
	return 0;
}
*/
//1.2
/*
int main()
{
	int max;
	int max_pos;
	int z = 0;
	int arr[7] = { 34, 73 , 1 , 6 ,3 , 120 , 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int y = 0; y < n - 1; y++)
	{
		max = -1;
		for (int x = y; x < n; x++)
		{

			if (arr[x] > max)
			{
				max = arr[x];
				max_pos = x;
			}
		}
		swap(arr[max_pos], arr[z]);
		z++;

	}
	for (int x = 0; x < n; x++)
	{
		cout << arr[x] << " ";
	}
	return 0;
}
*/
//1.3
/*
int main()
{
	int max;
	int max_pos;
	int z = 0;
	int arr[7] = { 34, 73 , 1 , 6 ,3 , 120 , 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int y = 0; y <n-1; y++)
	{
		max = -1;
		for (int x = n-1; x >= y; x--)
		{

			if (arr[x] > max)
			{
				max = arr[x];
				max_pos = x;
			}
		}
		swap(arr[max_pos], arr[z]);
		z++;

	}
	for (int x = 0; x < n; x++)
	{
		cout << arr[x] << " ";
	}

	return 0;
}
*/ 

//2. Bubble sort 
//2.1 
/*
int main()
{
	int arr[5] = { 3, 4, 6, 76, 23 };
	bool schimbare = true;

	while (schimbare == true)
	{
		schimbare = false;
		for (int x = 0; x < 4; x++)
		{
			if (arr[x] > arr[x + 1])
			{
				swap(arr[x], arr[x + 1]);
				schimbare = true;
			}
		}
	}
	for (int x = 0; x < 5; x++)
	{
		cout << arr[x] << " ";
	}
	return 0;
}
*/
//2.2
/*
int main()
{
	int arr[5] = { 3, 4, 6, 76, 23 };
	bool schimbare = true;

	while (schimbare == true)
	{
		schimbare = false;
		for (int x = 0; x < 4; x++)
		{
			if (arr[x] < arr[x + 1])
			{
				swap(arr[x], arr[x + 1]);
				schimbare = true;
			}
		}
	}
	for (int x = 0; x < 5; x++)
	{
		cout << arr[x] << " ";
	}
	return 0;
}
*/
//2.3
/*
int main()
{
	int arr[5] = { 3, 4, 6, 76, 23 };
	bool schimbare = true;

	while (schimbare == true)
	{
		schimbare = false;
		for (int x = 4; x > 0; x--)
		{
			if (arr[x] < arr[x - 1])
			{
				swap(arr[x], arr[x - 1]);
				schimbare = true;
			}
		}
	}
	for (int x = 0; x < 5; x++)
	{
		cout << arr[x] << " ";
	}
	return 0;
}
*/

//4. Shell Sort
//4.1
/*
int main()
{

	int arr[7] = { 7 , 2 , 15 , 32 , 0 , 10, 45  };
	bool schimbare = true;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int c = n / 2; c > 0; c /= 2)
	{
		schimbare = true;
		while (schimbare == true)
		{
			schimbare = false;
			for (int x = 0; x < n-c; x+=c)
			{
				if (arr[x] > arr[x + c])
				{
					swap(arr[x], arr[x + c]);
					schimbare = true;
				}
			}
		}
	}
	
	for (int x = 0; x < 7; x++)
	{
		cout << arr[x] << " ";
	}
	return 0;


}
*/ 
//4.2
/*
int main()
{

	int arr[7] = { 7 , 2 , 15 , 32 , 0 , 10, 45 };
	bool schimbare = true;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int c = n / 2; c > 0; c /= 2)
	{
		schimbare = true;
		while (schimbare == true)
		{
			schimbare = false;
			for (int x = 0; x < n - c; x += c)
			{
				if (arr[x] < arr[x + c])
				{
					swap(arr[x], arr[x + c]);
					schimbare = true;
				}
			}
		}
	}

	for (int x = 0; x < 7; x++)
	{
		cout << arr[x] << " ";
	}
	return 0;

}

*/ 
//4.3
/*
int main()
{

	int arr[7] = { 7 , 2 , 15 , 32 , 0 , 10, 45 };
	bool schimbare = true;
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int c = n / 2; c > 0; c /= 2)
	{
		schimbare = true;
		while (schimbare == true)
		{
			schimbare = false;
			for (int x = n-1; x >= c; x -= c)
			{
				if (arr[x] > arr[x - c])
				{
					swap(arr[x], arr[x - c]);
					schimbare = true;
				}
			}
		}
	}

	for (int x = 0; x < 7; x++)
	{
		cout << arr[x] << " ";
	}
	return 0;

}
*/ 

//7.Insert Sort
//7.1
/*
int main()
{
	int arr[5] = { 0 , 140 , 56 , 34 , 23  };
	int n = sizeof(arr) / sizeof(arr[0]);
	int j;

	for (int x = 1; x < n; x++)
	{
		j = x;
		while (arr[j] < arr[j - 1] && j - 1 >= 0)
		{
			swap(arr[j], arr[j - 1]);
			j = j - 1;
		}

	}
	for (int x = 0; x < n; x++)
	{
		cout << arr[x] << " ";
	}
	return 0;

}
*/

//5. Heap Sort
//5.1
/*
int main()
{
	int arr[5] = { 10 , 7 , 4 , 19 , 60 };

	int n = sizeof(arr) / sizeof(arr[0]);

	
	for (int x = n - 1; x > 0; x--)
	{
		if (arr[x] > arr[(x - 1) / 2])
		{
			swap(arr[x], arr[(x - 1) / 2]);
		}
	}
	for (int x = 0; x < n; x++)
	{
		cout << arr[x] << " ";
	}
 	return 0;
}
*/
//5.2
/*
int main()
{
	int arr[3] = { 0 , 26 , 45 };

	int n = sizeof(arr) / sizeof(arr[0]);
	int z = 0;
	for (int y = 0; y < n - 1; y++)
	{
		z++;
		for (int x = n - 1; x > y; x--)
		{
			if (arr[x] > arr[(x - 1 + z) / 2])
			{
				swap(arr[x], arr[(x - 1+z) / 2]);

			}
		}
	}
	
	for (int x = 0; x < n; x++)
	{
		cout << arr[x] << " ";
	}
	return 0;
}
*/ 

//3.Counter Sort ( l-am facut sa ruleze direct cu numere cu repetitii)
//3.1

int main()
{
	//int arr[10] = { -12 , 19 , 0, 0, 0,0 , -12 , 434 , -3123 , 4543 };
	int arr[8] = { 0, 0, 0, 0 , 12 , -1 , -1 , 12 };
	int arr2[8];
	int n = sizeof(arr) / sizeof(arr[0]);
	int count = 0;
	int z = 0;
	bool unique = true;
	for (int x = 0; x < n; x++)
	{
		unique = true;
		count = 0;
		z = 0;
		for (int y = 0; y < n; y++)
		{
			if (arr[x] > arr[y])
			{
				count++;
			}
			if (arr[x] == arr2[y])
			{
				z++;
				unique = false;
			}
		}
		
		
		if (unique == true)
		{
			arr2[count] = arr[x];
		}
		else
		{
			arr2[count + z] = arr[x];
			//cout << count + z <<" "<<z<< endl;
		}
		
	}
	for (int x = 0; x < n; x++)
	{ 
		cout << arr2[x] << " ";
	}
	

	return 0;

}
 
//3.2
/*
int main()
{
	int arr[10] = { -12 , 19 , 0, 0, 0,0 , -12 , 434 , -3123 , 4543 };
	int arr2[10];
	int n = sizeof(arr) / sizeof(arr[0]);
	int count = 0;
	int z = 0;
	bool unique = true;
	for (int x = n-1; x >= 0; x--)
	{
		unique = true;
		count = 0;
		z = 0;
		for (int y = n-1; y >= 0; y--)
		{
			if (arr[x] < arr[y])
			{
				count++;
			}
		}
		for (int y = 0; y < n; y++)
		{
			if (arr[x] == arr2[y])
			{
				z++;
				unique = false;
			}
		}

		if (unique == true)
		{
			arr2[count] = arr[x];
		}
		else
		{
			arr2[count + z] = arr[x];
			//cout << count + z <<" "<<z<< endl;
		}

	}
	for (int x = 0; x < n; x++)
	{
		cout << arr2[x] << " ";
	}


	return 0;

}
*/ 




/*
int main()
{
	int arr[10] = { -12 , 19 , 0, 0, 0,0 , -12 , 434 , -3123 , 4543 };
	int arr2[10];
	int n = sizeof(arr) / sizeof(arr[0]);
	int count = 0;
	int z = 0;
	bool unique = true;
	for (int x = 0; x < n; x++)
	{
		unique = true;
		count = 0;
		z = 0;
		for (int y = 0; y < n; y++)
		{
			if (arr[x] < arr[y])
			{
				count++;
			}
		}
		for (int y = 0; y < n; y++)
		{
			if (arr[x] == arr2[y])
			{
				z++;
				unique = false;
			}
		}

		if (unique == true)
		{
			arr2[count] = arr[x];
		}
		else
		{
			arr2[count + z] = arr[x];
			//cout << count + z <<" "<<z<< endl;
		}

	}
	for (int x = 0; x < n; x++)
	{
		cout << arr2[x] << " ";
	}


	return 0;

}
*/
