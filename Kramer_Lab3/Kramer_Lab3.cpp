#include <iostream>

using namespace std;

void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl; "/n /n";



	cout << "Your Selction: ";
	cin >> choice;

}

void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
	cin >> A; 

	cout << "Please enter the second value: ";
	cin >> B; 
}

int add(int A , int B) {
	cout << A << " + " << B << " = " << A + B << endl; 
	return A + B;


}

int sub(int A, int B) {
	cout << A << " - " << B << " = " << A - B << endl;
	return A - B;

}

int multi(int A, int B) {
	cout << A << " * " << B << " = " << A * B << endl;
	return A * B;

}

int divi(int A, int B) {
	cout << A << " / " << B << " = " << A / B << endl;
	return A / B;
}

int main() {


	int choice;
	float A;
	float B;

	printMenu(choice);
	getChoices(A, B);


	if (choice == 1) {
		 add( A, B);
		return A + B;

	}

	if (choice == 2) {
		sub(A, B);
		return A - B;

	}

	if (choice == 3) {
		multi(A, B);
		return A * B;

	}

	if (choice == 4) {
		divi(A, B);
		return A / B;

	}

}