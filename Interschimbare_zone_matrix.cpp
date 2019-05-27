#include<fstream>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int arr[5][5] = { 0 }; // matrice patratica goala care urmeaza a fi completata 
	int i = 5;  // dimensiunea matricei 

	int n = i;
	ifstream fin("intrare.in");

	for (int x = 0; x < i; x++)
	{
		for (int y = 0; y < i; y++)
		{
			fin >> arr[x][y];
		}
	}
	
	int t = 1;
	int x = t;
	int y = 0;
	int z = 1;
	int w = n - 1;

	while (x < n && y < n / 2 && z < n && w > n / 2)
	{
		if (y == n / 2 && w == n / 2)
		{
			break;
		}
		swap(arr[y][x], arr[w][z]);
		x++;
		z++;
		if (x == n - 1)
		{
			x = t + 1;
			z = t + 1;
			y++;
			w--;
			n--;
		}
	}

	for (int x = 0; x < i; x++)
	{
		cout << endl;
		for (int y = 0; y < i; y++)
		{
			cout << arr[x][y] << " ";
		}
	}

}
