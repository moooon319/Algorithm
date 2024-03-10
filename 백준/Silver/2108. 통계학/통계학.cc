#include <iostream>
#include <vector>
#include<algorithm>
#include <cmath>
using namespace std;

vector<int>v;
int n, num;
double sum;
int cnt[8001];


int avg() {
	for (int i = 0; i < n; i++) {
	
		sum += v[i];
	
	}
	return round(sum / n);
}

int middle() {
	sort(v.begin(), v.end());
	return v[(n-1)/2];

}

int most() {
	int flag;
	int max = 0;

	for (int i = 0; i < 8001; i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			flag = i;
		}
	}

	for (int i = flag + 1; i < 8001; i++) {
		if (cnt[i] == max) {
			flag = i;
			break;
		}
	}
	return flag - 4000;

}

int arrange() {
	return v[n-1] - v[0];
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
		cnt[num + 4000]++;
	}
	cout << avg() << '\n';
	cout << middle() << '\n';
	cout << most() << '\n';
	cout << arrange() << '\n';


}