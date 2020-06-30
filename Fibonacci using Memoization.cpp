#include<bits/stdc++.h>
using namespace std;

int memoize(int arr[], int n)
{
	if(arr[n] != -1)
		return arr[n];
	if(n <= 1)
		return n;
	arr[n] = memoize(arr,n-2) + memoize(arr,n-1);
}

int fib(int n)
{
	int arr[n+1];
	
	for(int i = 0; i <= n; i++)
		arr[i] = -1;
		
	return memoize(arr,n);	
}
int main()
{
	int n;
	cin >> n;
	cout << fib(n);
}
