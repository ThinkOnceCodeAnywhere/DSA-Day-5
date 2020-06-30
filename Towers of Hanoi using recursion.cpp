#include<bits/stdc++.h>
using namespace std;
void toh(int n, char fromrod, char torod, char auxrod)
{
	if(n == 1)
	{
		cout << "Move disk 1 from rod "<<fromrod << " to rod " << torod << endl;
		return;
	}
	toh(n - 1, fromrod, auxrod, torod);
	
	cout << "Move disk " << n << " from rod " << fromrod << " to rod "<<torod << endl;
	
	toh(n - 1, auxrod, torod, fromrod);
}

int main()
{
	int n = 3;
	toh(n,'A','C','B');
}
