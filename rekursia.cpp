#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int max (int a, int b)
{
	int max;

	if (a > b)
	{
		a = max;	
	}
	else
	{
		b = max;
	}
}
int arr()
{
	
}

int main()
{
	int n, *arr;
	cout << "Enter n: ";
	cin >> n;
	arr = new int[n];
	
	srand (time(NULL));

	for (int i = 0; i < n; i ++)
	{
		arr[i] = rand()%41 - 20;
		cout << arr[i] << ' '; 
	}
	cout << endl; 

	return 0; 
}

