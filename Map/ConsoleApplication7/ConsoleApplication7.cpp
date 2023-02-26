#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {

	//initialization
	set <string> slovar, lowers;
	multiset <string> exer;
	int n, i, j, mis = 0, num = 0;
	string str, txt, chc = "";
	int pnt1 = 0, pnt2 = 0;

	//input
	cin >> n >> ws;
	for (i = 0; i < n; i++) {
		cin >> str >> ws;
		slovar.insert(str);
		for (j = 0; j < (int)str.length(); j++) {
			if (str[j] >= 'A' && str[j] <= 'Z') {
				str[j] = 'a' + (str[j] - 'A');
			}
		}
		lowers.insert(str);
	}
	getline(cin, txt);

	//parsing
	if (txt.empty()) {
		cout << mis;
	}
	else {
		pnt2 = txt.find(' ');
		if (pnt2 == -1) {
			exer.insert(txt.substr(0, txt.length()));
		}
		else {
			exer.insert(txt.substr(0, pnt2));
			while (pnt2 != -1) {
				pnt1 = pnt2 + 1;
				pnt2 = txt.find(' ', pnt1);
				if (pnt2 == -1) {
					exer.insert(txt.substr(pnt1, txt.length() - pnt1));
				}
				else {
					exer.insert(txt.substr(pnt1, pnt2 - pnt1));
				}
			}
		}

		//processing
		for (auto now : exer) {
			if (slovar.find(now) == slovar.end()) {
				num = 0;
				chc = "";
				for (i = 0; i < (int)now.length(); i++) {
					if (now[i] >= 'A' && now[i] <= 'Z') {
						chc += 'a' + (now[i] - 'A');
						num++;
					}
					else {
						chc += now[i];
					}
				}
				if (lowers.find(chc) != lowers.end()) {
					mis++;
				}
				else {
					if (num != 1) {
						mis++;
					}
				}
			}
		}
		//output
		cout << mis;
	}
}