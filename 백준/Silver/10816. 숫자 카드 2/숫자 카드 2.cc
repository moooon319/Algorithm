#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, num;
	int arr[500000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		cout << upper_bound(arr, arr + n, num) - lower_bound(arr, arr + n, num) << ' ';
	}

}


	