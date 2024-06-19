//#include <iostream>
//#include <Windows.h>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	ifstream File("readonly.txt");
//	if (!File.is_open()) { cout << "Error"; return 0; }
//
//	string Serial;
//	char Characters[30];
//	int Total = 0;
//	while (File) {
//		File.getline(Characters, 30);
//		//for (char i : Characters) {
//		for (int i = 0; Characters[i] != '\0'; i++) {
//			if (isdigit(Characters[i])) { Serial += Characters[i]; }
//			if (Characters[i] == ' ') {
//				cout << Serial << endl;
//				Total++;
//				Serial = "";
//			}
//		}
//	}
//	File.close();
//	cout << "\nВсего чисел: " << Total;
//
//}
//	


#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
using namespace std;

struct People {
	string Prizv;
	string phone;
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ofstream file("abonent.txt");
	if (!file) {
		cout << "File not find\n";
		return 0;
	}
	int ans, count = 1;
	People Abonents[5];
	do {

		cout << "Input"<<count<<"abonent: ";
		getline(cin, Abonents->Prizv);
		getline(cin, Abonents->phone);
		file<<count<<") " << Abonents->Prizv << ' ' << Abonents->phone << endl;
		cout << "Do you have abonents Yes[1] | No[2]: ";
		cin >> ans;
		count++;
		cin.ignore();
	} while (ans == 1);
	return 0;
}