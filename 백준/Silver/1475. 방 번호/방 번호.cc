#include <iostream>
#include <string>
using namespace std;

int main() {

	int n;
	int arr[10]={0};
	int max = 0;


	cin >> n;

	while(n>0) {
		int index = n % 10;
		arr[index]++;
		n /= 10;
	}

	arr[6]= (arr[6] + arr[9] + 1) / 2;

	for (int i = 0; i < 9; i++) {

		if (max < arr[i]) {
			max = arr[i];
		}
	}

	cout << max;
}