#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& pos, int dist, int N, int K) {
	int count = 1;
	int prev = pos[0];
	for(auto curr:pos) {
		if(curr - prev >= dist) {
			prev = curr;
			count++;
		}
	}

	if (count >= K) return true;
	return false;
}

int main() {
	int N = 5, K = 3;
	vector<int> pos = { 1, 3, 5, 6, 10 };
	
	int ans = -1;

	sort(pos.begin(), pos.end());

	// maximum element from the position array
	int max_dist = pos[N-1];

	/*
	    try out each possible distance 
	    from 1 to max_dist
	    store the distance in ans, 
	    if the arrangement is possible
	    otherwise, break.
	*/
	for (int dist = 1; dist <= max_dist; dist++) {
		if (isPossible(pos, dist, N, K)) {
			ans = dist;
		}
		else {
			break;
		}
	}

	// print the answer
	cout << "The largest minimum distance is: "<< ans << endl;
	return 0;
}
