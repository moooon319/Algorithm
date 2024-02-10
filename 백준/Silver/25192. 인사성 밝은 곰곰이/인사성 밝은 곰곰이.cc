#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	int n, cnt = 0;
	cin >> n;

	string str;
	set<string> s;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "ENTER") {
			cnt += s.size();
			s.clear();
		}
		else s.insert(str);
	}
	cnt += s.size();
	cout << cnt;
}
	