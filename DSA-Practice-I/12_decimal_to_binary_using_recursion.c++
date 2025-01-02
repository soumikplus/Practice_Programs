//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

void toBinary(int n)
{
	// using recursion
	if (n == 0 || n == 1)
	{
		cout << n;
		return;
	}
	else
	{
		toBinary(n >> 1);
		cout << (n % 2);
	}
}

//{ Driver Code Starts.

int main()
{
	// code

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		toBinary(n);
		cout << endl;
	}
	return 0;
}
// } Driver Code Ends