#include <bits/stdc++.h>
using namespace std;

int arr[129][129];
int white, blue = 0;

void paper(int N, int a, int b) {

	for (int i = a; i < a+N; i++) {
		for (int j = b; j < b+N; j++) {
			if (arr[i][j] != arr[a][b]) {
				paper(N / 2, a, b);
				paper(N / 2, a + N / 2, b);
				paper(N/2, a, b + N / 2);
				paper(N/2, a + N / 2, b + N / 2);
				return;
				
			}
		}
	}

	if (arr[a][b]) {
		blue++;
	}
	else if(arr[a][b] == 0) {
		white++;
	}


}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	paper(n, 0, 0);
	cout << white << '\n';
	cout << blue;

}