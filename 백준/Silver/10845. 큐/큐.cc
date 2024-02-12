#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{

	int n, num;
	string order;
	queue<int> qu;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> order;

		if (order == "push") {
			cin >> num;
			qu.push(num);
		}

		else if (order == "pop") {
			if (qu.empty()) cout << "-1" << '\n';
			else {
				cout << qu.front() << '\n';
				qu.pop();
			}
		}

		else if (order == "size") {
			cout << qu.size() << '\n';
		}

		else if (order == "empty") {
			if (qu.empty()) cout << "1" << '\n';
			else cout << "0" << '\n';
		}

		else if (order == "front") {
			if (qu.empty()) cout << "-1" << '\n';
			else cout << qu.front() << '\n';
		}

		else if (order == "back") {
			if (qu.empty()) cout << "-1" << '\n';
			else cout << qu.back() << '\n';
		}
	}
}


	