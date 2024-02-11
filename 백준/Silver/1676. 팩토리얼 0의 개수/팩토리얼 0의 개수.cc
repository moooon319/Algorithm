#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int cnt = 0;

	cin >> n;
	for (int i = 5; i <= n; i *= 5) {
		cnt += n / i;
	}
	cout << cnt;
}

	