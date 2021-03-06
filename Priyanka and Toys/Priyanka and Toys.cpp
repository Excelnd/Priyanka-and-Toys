// Priyanka and Toys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getMinimumUnits(vector<int> &w) {
	sort(w.begin(), w.end());
	int minUnits = 1, i = 0, ans = 1;
	for (int j = 1; j < w.size(); j++) {
		while (w[i] + 4 >= w[j]) j++;
		i = j;
		if (i < w.size()) ans++;
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	vector<int> w(n);
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	cout << getMinimumUnits(w);

    return 0;
}

