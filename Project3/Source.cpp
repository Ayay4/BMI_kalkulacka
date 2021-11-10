#include <iostream>

using namespace std;

int main() {
	float BMI;
	float vaha;
	float vyska;

	cout << "zadaj svoju vahu v kilogramoch : ";
	cin >> vaha;
	cout << "zadaj svoju vysku v metroch : ";
	cin >> vyska;

	BMI = (vaha) / (vyska * vyska);
	cout << "Tvoje BMI je: " <<BMI << endl;

	if (BMI >= 25)
		cout << "nadvaha";
	else if (BMI >= 30)
		cout << "obezita";
	else if (BMI < 25 && BMI >18)
		cout << "normalna hmotnost";
	else
		cout << "podvyziva" << endl;
	return 0;

}

