#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream File("readonly.txt");
	if (!File.is_open()) { cout << "Error"; return 0; }

	string Serial;
	char Characters[30];
	int Total = 0;
	while (File) {
		File.getline(Characters, 30);
		//for (char i : Characters) {
		for (int i = 0; Characters[i] != '\0'; i++) {
			if (Characters[i] != ' ' && isdigit(Characters[i])) { Serial += Characters[i]; }
			if (Characters[i] == ' ') {
				cout << Serial << endl;
				Total++;
				Serial = "";
			}
		}
	}
	File.close();
	cout << "\nВсего чисел: " << Total;




}
	

	/*short numsCount = 0;

	float floatCount = 0;

	while (file >> numsCount) {
		cout << floatCount << ' ';
		numsCount++;
	}
	cout << numsCount;*/
