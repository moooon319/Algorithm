#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n;
	stack<int> st;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		if (s == "push") {
			int num;
			cin >> num;
			st.push(num);
		}

		else if (s == "top") {
			if (st.empty() == 1) {
				cout << "-1" << '\n';
			}
			else {
				cout << st.top() << '\n';
			}
			
		}

		else if (s == "size") {
			cout<<st.size()<<'\n';
		}
		else if (s == "empty") {
			if (st.empty()) {
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}
		else if (s == "pop") {
			if (st.empty() == 1) {
				cout << "-1" << '\n';
			}
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}

	}
}