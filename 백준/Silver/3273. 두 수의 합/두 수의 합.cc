#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,result,sum;
	int cnt = 0;
	int arr[100000];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cin >> result;

	int left = 0;
	int right = n - 1;
	sort(arr, arr + n);

	while (left < right) {
		sum = arr[left] + arr[right];

		if (sum < result) {
			left++;
		}
		else if (sum > result) {
			right--;
		}

		else {
			cnt++;
			left++;
			right--;
		}
	}

	cout << cnt;

	return 0;

}