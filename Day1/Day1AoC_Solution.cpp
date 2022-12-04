#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream file;
	file.open("day1.txt", ios::in);

	int accum = 0;
	int high1 = 0;
	int high2 = 0;
	int high3 = 0; 
	string line;
	int stringnum = 0;
	while (getline(file, line))
	{
		if (line.empty() == true) {
			if (accum > high1) {
				high3 = high2;
				high2 = high1;
				high1 = accum;
			}
			else if (accum > high2) {
				high3 = high2;
				high2 = accum;
			}
			else if (accum > high3) {
				high3 = accum;
			}
			accum = 0;
		}
		else {
			accum += stoi(line);
		}
	}
	int highsum = high1 + high2 + high3;
	cout << "The highest elf calorie value is: " << high1 << " and the sum of the top three is: " << highsum << endl;

	file.close();

	return 0;
}