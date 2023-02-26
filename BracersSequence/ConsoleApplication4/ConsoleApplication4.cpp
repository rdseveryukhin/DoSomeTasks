#include <fstream>
#include <iostream>

using namespace std;

int main() {
	ifstream file("C:\\Users\\rdsev\\Desktop\\data.txt");
	ofstream fout("C:\\Users\\rdsev\\Desktop\\out.txt");
	char inChar = '\0';
	bool isEqual = true;
	bool isInBody = false;
	int countBreacketOpen = 0;
	int countBreacketClose = 0;


	while (!file.eof()) {
		
		file >> inChar;
		if (file.eof()) {
			break;
		}

		if (!isInBody) {
			if (inChar == '}') {		//if body closes without opening before
				isEqual = false;
				break;
			}
			else if (inChar == '{') {	//if body opens
				isInBody = true;
				countBreacketOpen++;
			}
		}
		else {
			if (inChar == '{') {		//if one more body opens
				countBreacketOpen++;
			}
			else if (inChar == '}') {	//if body closes
				countBreacketClose++;
				if (countBreacketOpen == countBreacketClose) {	//if all bodies close
					isInBody = false;
					countBreacketOpen = 0;
					countBreacketClose = 0;
				}

			}
		}

	}
	if (countBreacketOpen != countBreacketClose) {
		isEqual = false;
	}

	//output
	if (isEqual) {
		cout << "Breackets are matched";
		fout << "Breackets are matched";
	}
	else {
		cout << "Breackets AREN'T matched";
		fout << "Breackets AREN'T matched";
	}
}