#include<iostream>
using namespace std;

int main() {

	int numeros[6] = { 10, 20, 30, 40, 50, 60 };
	int n[] = { 3, 4, 5 };
	char c[] = { 'L', 'U', 'I', 'S' };
	char s[] = "Mona Lisa";

	for (int i = 0; i < 6; i++) {
		cout << numeros[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << n[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		cout << c[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 9; i++) {
		cout << s[i] << " ";
	}
}