// C++ program to print all subarrays
// in the array which has sum 0
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int> > findSubArrays(int arr[], int n)
{

	// Array to store all the start and end
	// indices of subarrays with 0 sum
	vector<pair<int, int> > output;
	for (int i = 0; i < n; i++) {
		int prefix = 0;
		for (int j = i; j < n; j++) {
			prefix += arr[j];
			if (prefix == 0)
				output.push_back({ i, j });
		}
	}

	return output;
}

// Function to print all subarrays with 0 sum
void print(vector<pair<int, int> > output)
{
	for (auto it = output.begin(); it != output.end(); it++)
		cout << "Subarray found from Index " << it->first
			<< " to " << it->second << endl;
}

// Driver code
int main()
{

	// Given array
	int arr[] = { 6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function Call
	vector<pair<int, int> > output = findSubArrays(arr, n);

	// if we didn’t find any subarray with 0 sum,
	// then subarray doesn’t exists
	if (output.size() == 0) {
		cout << "No subarray exists";
	}
	else {
		print(output);
	}
	return 0;
}
