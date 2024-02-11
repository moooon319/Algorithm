#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int n,num;
	string order;
	stack<int> st;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> order;

		if (order == "push") {
			cin >> num;
			st.push(num);
		}

		else if (order == "pop") {
			if (st.empty()) cout << "-1" << '\n';		
			else {
				cout << st.top() << '\n';
				st.pop();
			}
		}

		else if (order == "size") {
			cout << st.size() << '\n';
		}

		else if (order == "empty") {
			if (st.empty()) cout << "1" << '\n';
			else cout << "0" << '\n';
		}

		else if (order == "top") {
			if (st.empty()) cout << "-1" << '\n';
			else cout << st.top() << '\n';
		}
	}
}

	