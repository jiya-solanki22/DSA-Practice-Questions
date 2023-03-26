// C++ code to find
// duplicates in O(n) time
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 ,1};
	int n = sizeof(a) / sizeof(a[0]);
	// count the frequency
	for (int i = 0; i < n; i++) {
		a[a[i] % n] = a[a[i] % n] + n;
	}
	cout << "The repeating elements are : " << endl;
	for (int i = 0; i < n; i++) {
		if (a[i] >= n * 2) {
			cout << i << " " << endl;
		}
	}
	return 0;
}

// This code is contributed by aditya kumar (adityakumar129)

