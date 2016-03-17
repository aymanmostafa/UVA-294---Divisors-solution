//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

unsigned long long divno(unsigned long long x) {
	unsigned long long c = 1, i;
	for (i = 2; i * i < x; i++)
		if (x % i == 0)
			c++;
	if (x > 1)
		c *= 2;
	if (i * i == x)
		c++;
	return c;
}

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 294 - Divisors
	long long n, x, y, mx, i, t, res;
	cin >> n;
	while (n--) {
		cin >> x >> y;
		mx = -1e9, res = -1e9;
		for (i = x; i <= y; i++) {
			t = divno(i);
			if (t > mx) {
				mx = t;
				res = i;
			}
		}
		cout << "Between " << x << " and " << y << ", " << res
				<< " has a maximum of " << mx << " divisors.\n";
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
