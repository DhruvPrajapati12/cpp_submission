#include <iostream>
#include <deque>
using namespace std;

int maxim(int arr[], int n)
{
	int maxi = -9999;
	for(int i=0; i<n ; i++)
	{
		if(arr[i] > maxi)
		{
			maxi = arr[i];
		}
	}
	return maxi;
}

int minim(int arr[], int n)
{
	int mini = 9999;
	for(int i=0; i<n ; i++)
	{
		if(arr[i] < mini)
		{
			mini = arr[i];
		}
	}
	return mini;
}

int main()
{
	deque<int> queue;
	deque<int>::iterator p;

	int n, s;
	cout << "Enter the number of elements: ";
	cin >> n;

	cout << "Enter the subset size: ";
	cin >> s;

	cout << "Enter the numbers: ";
	for (int i = 0; i < n; i++)
	{
		int nn;
		cin >> nn;
		queue.push_back(nn);
	}

	p = queue.begin();
	cout << "Numbers: ";
	while (p != queue.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;

	int subarray[s];
	int count=0;
	for(int i=0; i<n-s+1; i++)
	{
		for(int j=0; j<s; j++)
		{
			subarray[count] = queue.at(j+i);
			count++;
		} 
		cout << "Sub array" << i+1 << ": ";
		for(int k=0; k<s; k++)
		{
			cout << subarray[k] << " ";
		}
		cout << " Min: " << minim(subarray, s) << " Max: " << maxim(subarray, s) << endl;
		count=0;
	}
}
