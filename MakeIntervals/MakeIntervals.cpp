#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string makeIntervals(vector<int>& arr) {
	string result = "";
	if (!arr.empty()) {
		sort(arr.begin(), arr.end());
		for (int i = 0; i + 1 < arr.size(); i++) {
			if (arr[i + 1] - arr[i] == 1 && (result == "" || result[result.length() - 1] != '-')) {
				result += to_string(arr[i]) + "-";
			}
			else if (arr[i + 1] - arr[i] > 1) {
				result += to_string(arr[i]) + ",";
			}
		}
		result += to_string(arr[arr.size() - 1]);
	}
	return result;
}

int main() {
	vector<int> a = { 1,4,7,8,10,3,2 };
	cout << makeIntervals(a);
}
