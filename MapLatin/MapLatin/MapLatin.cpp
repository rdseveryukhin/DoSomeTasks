#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main() {

	//initialization
	map <string, vector<string>> s;
	int n, i, pnt1, pnt2;
	string txt, key, elem;
	set <string> str2;

	//new input
	cin >> n >> ws;
	for (i = 0; i < n; i++) {
		getline(cin, txt);
		pnt2 = txt.find('-');
		key = txt.substr(0, pnt2 - 1);
		while (pnt2 != -1) {
			pnt1 = pnt2 + 2;
			pnt2 = txt.find(',', pnt1);
			if (pnt2 == -1) {
				elem = txt.substr(pnt1, txt.length() - pnt1);
				s[elem].push_back(key);
				str2.insert(elem);
			}
			else {
				elem = txt.substr(pnt1, pnt2 - pnt1);
				s[elem].push_back(key);
				str2.insert(elem);
			}
		}
	}

	//new output
	cout << str2.size() << '\n';
	for (auto now : str2) {
		cout << now << " - ";
		int counter = 0;
		for (auto str : s[now]) cout << str << (s[now].size() == ++counter ? "\n" : ", ");
	}
}

