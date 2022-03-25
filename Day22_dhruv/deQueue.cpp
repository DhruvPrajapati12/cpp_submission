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
		cout << "Subset array" << i+1 << ": [ ";
		for(int k=0; k<s; k++)
		{
			cout << subarray[k] << " ";
		}
		cout << "] Min: " << minim(subarray, s) << " Max: " << maxim(subarray, s) << endl;
		count=0;
	}
}

// #include <iostream>
// #include <deque>
// #include <vector>
// #include <climits>
// #include <algorithm>
// using namespace std;
// void showdq(deque<int> g)

// {

// 	deque<int>::iterator t;
// 	for (t = g.begin(); t != g.end(); ++t)
// 	{
// 		cout << *t << "\t";
// 	}
// 	cout << endl;
// }

// int main()

// {
// 	int n, s;
// 	cout << "enter size of dequeue and size of subset" << endl;
// 	cin >> n >> s;
// 	int arr1[n];
// 	deque<int> q;
// 	for (int i = 0; i < n; i++)
// 	{
// 		int a;
// 		cin >> a;
// 		arr1[i] = a;
// 		q.push_back(a);
// 	}

// 	// showdq(q);

// 	int arr[n - s][s];
// 	int arr2[n - s][s];
// 	int p = 0;
// 	int min = INT_MAX, max = INT_MIN;
// 	// int Min, Max;
// 	for (int i = 0; i <= n - s; i++)
// 	{
// 		cout << "[";
// 		for (int j = 0; j < s; j++)
// 		{
// 			arr[i][j] = arr1[p];
// 			p++;
// 			cout << arr[i][j] << ",";
// 			if (arr[i][j] < min)
// 				min = arr[i][j];
// 			if (arr[i][j] > max)
// 				max = arr[i][j];
// 		}
// 		cout << "]";
// 		// cout<<"["<<Min<<","<<Max<<"]";
// 		cout << "[" << min << "," << max << "]";
// 		p = p - s + 1;
// 		// p=p+1;
// 		min = INT_MAX, max = INT_MIN;
// 		cout << endl;
// 	}
// }
