#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{

	int n, num;
	string order;
	deque<int> de;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> order;

		if (order == "push_front") {
			cin >> num;
			de.push_front(num);
		}

		else if (order == "push_back") {
			cin >> num;
			de.push_back(num);
		}

		else if (order == "pop_front") {
			if (de.empty()) cout << "-1" << '\n';
			else {
				cout << de.front() << '\n';
				de.pop_front();
			}
		}
		else if (order == "pop_back") {
			if (de.empty()) cout << "-1" << '\n';
			else {
				cout << de.back() << '\n';
				de.pop_back();
			}
		}

		else if (order == "size") {
			cout << de.size() << '\n';
		}

		else if (order == "empty") {
			if (de.empty()) cout << "1" << '\n';
			else cout << "0" << '\n';
		}

		else if (order == "front") {
			if (de.empty()) cout << "-1" << '\n';
			else cout << de.front() << '\n';
		}

		else if (order == "back") {
			if (de.empty()) cout << "-1" << '\n';
			else cout << de.back() << '\n';
		}
	}
}


	