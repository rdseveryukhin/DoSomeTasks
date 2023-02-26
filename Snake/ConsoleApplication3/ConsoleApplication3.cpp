#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
	int n, m, i, j, c = 0;
	int a[100][100];

	//reading from console
	cin >> n >> m;

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			a[i][j] = 0;
		}
	}

	int md = m, nd = n;
	int val;
	val = 1;
	i = 0;
	j = 0;
	//processing
	while (val <= n * m) {
		switch (c) {
			case 0: {
				for (j = j; j < md; j++) {
					a[i][j] = val;
					val++;
				}
				i++;
				j--;
				break;
			}
			case 1: {
				for (i = i; i < nd; i++) {
					a[i][j] = val;
					val++;
				}
				j--;
				i--;
				nd--;
				break;
			}
			case 2: {
				for (j = j; j >= m - md; j--) {
					a[i][j] = val;
					val++;
				}
				i--;
				j++;
				md--;
				break;
			}
			case 3: {
				for (i = i; i >= n - nd; i--) {
					a[i][j] = val;
					val++;
				}
				j++;
				i++;
				break;
			}
		}
		c++;
		if (c == 4) {
			c = 0;
		}
	}



	//output
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
}
