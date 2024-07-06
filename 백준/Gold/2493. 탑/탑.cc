#include <iostream>
#include <stack>
#include <utility>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n,input;
	
	stack<pair<int, int>> st;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;

		while(!st.empty()){

			if (st.top().second > input){
				cout << st.top().first + 1 << ' ';
				break;
				}
			st.pop();
			
		}
		if (st.empty()) cout << '0' << ' ';
		st.push({ i,input });
		
	}

	return 0;

}