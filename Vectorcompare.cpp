// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;
bool isEqual(vector<int> a, vector<int> b, int n, int m)
{
	// If size is not same return false
	// if (n != m) {
	// 	return 0;
	// }

	// Create 2 unordered maps to store
	// the frequency
	unordered_map<int, int> mp1, mp2;
	for (int i : a) {
		mp1[i]++;
	}
	for (int i : b) {
		mp2[i]++;
	}

	//Compare the frequency
	for (auto i = mp1.begin(),i1=mp2.begin(); i != mp1.end(); i++,i1++) {

		// If frequency not same return false
		if (mp2[(*i1).first] != mp1[(*i1).first]) {
			return 0;
		}
	}
	return 1;
}

// Drivers code
int main()
{
	vector<int> a = { 2, 4, 5, 7, 5, 6 ,2,},
				b = { 4, 2, 5, 5, 6, 7 ,2};
	int n = a.size(), m = b.size();
	bool flag = isEqual(a, b, n, m);

	// Return 1 if equal
	if (flag) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}
