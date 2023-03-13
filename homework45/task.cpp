#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
	srand(time(NULL));

	int time = 0;
	int column = 10;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	char char1 = 0;
	char char2 = 0;
	int answer = 0;
	int correct = 0;

	for (int j = 0; j < column; j++) {
		for (int i = 0; i < 2; i++) {
			num1 = rand() % (10 - 1) + 1;
			num2 = rand() % (10 - 1) + 1;
			num3 = rand() % (10 - 1) + 1;
			char1 = rand() % 2;
			char2 = rand() % 2;

			if (char1 == 0) {
				char1 = '+';
			}
			else {
				char1 = '-';
			}

			if (char2 == 0) {
				char2 = '+';
			}
			else {
				char2 = '-';
			}

			cout << num1 << " " << char1 << " " << num2 << " " << char2 << " " << num3 << " = ";
			cin >> answer;

			if ((num1 + num2 + num3 == answer)
				|| (num1 - num2 + num3 == answer)
				|| (num1 + num2 - num3 == answer)
				|| (num1 - num2 - num3 == answer)) {
				correct++;
			}
		}
	}

	cout << "Mistakes: " << (2 * column) - correct << endl;

	return 0;
}
