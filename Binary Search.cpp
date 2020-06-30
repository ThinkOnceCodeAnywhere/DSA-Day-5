#include <bits/stdc++.h> 
using namespace std; 

int binarySearch(int arr[], int l, int r, int key) 
{ 
	while (l <= r) 
	{ 
		int m = l + (r - l) / 2; 
		if(arr[m] == key)
		    return m; 
		arr[m] < key ? l = m + 1 : r = m - 1;		
	} 
	return -1; 
} 

int main() 
{ 
	int n;
	cin >> n; //size of array
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	int key;
	cin >> key; 
	int result = binarySearch(arr, 0, n - 1, key); 
	(result == -1) ? cout << "Element is not present in array": cout << "Element is present at index " << result; 

} 

