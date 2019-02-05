#include<iostream>
using namespace std;


//overload
/*

int sam(int a, int b) {
	cout << "<int>:" ;
	return a + b;
}
double sam(double a ,double b) {
	cout << "<double>:" ;
	return a + b;

}
int sam(int a, int b, int c) {
	cout << "<3 int>:" ;
	return a + b + c;
}

int main() {
	cout << sam(5, 10) << endl;
	cout << sam(5.4, 8.1) << endl;
	cout << sam(8, 4, 5) << endl;
	*/



int Plus(int a, int b) {
	
	return a + b;
	
}

double Plus(double a, double b) {

	return a + b;
}
int Plus(int a, int b, int c) {

	return a + b + c;
}
double Plus(double a, double b, double c) {

	return a + b + c;
}



int Minus(int a, int b) {

	return a - b;

}
double Minus(double a, double b) {

	return a - b;
}
int multiplication(int a, int b) {

	return a * b;

}
double multiplication(double a, double b) {

	return a * b;
}

int division(int a, int b) {

	return a / b;

}
double division(double a, double b) {

	return a / b;
}

int Menu() {
	int choice = 0;
	cout << "1. +\n2. -\n3. *\n4. / " << endl;
	cin >> choice;
	return choice;
}



int main() {

	int choice = Menu();
	cout << choice;
	if (choice == 1) {
		int choice = 0;
		cout << " 1. whole  2. lungs" << endl;
		cin >> choice;

		if (choice == 1) {
			int a, b;
			cout << "enter the first number:";
			cin >> a;
			cout << "enter the secomd numder:";
			cin >> b;
			cout << Plus(a, b) << endl;
		}
		else if (choice == 2) {
			double a, b;
			cout << "enter the first number:";
			cin >> a;
			cout << "enter the secomd numder:";
			cin >> b;
			cout << Plus(a, b) << endl;
		

		}
		 if (choice == 2) {
			int a, b, c;
			cout << "enter the first number:";
			cin >> a;
			cout << "enter the secomd numder:";
			cin >> b;
			cout << "enter the third chislot:";
			cin >> c;
			cout << Plus(a, b, c) << endl;
		}






	}
		/*
	if (choice == 2) {
		double a, b;
		cout << "enter the first number:";
		cin >> a;
		cout << "enter the secomd numder:";
		cin >> b;
		cout << Minus(a, b) << endl;
	}
	 if (choice == 3) {
		double a, b;
		cout << "enter the first number:";
		cin >> a;
		cout << "enter the secomd numder:";
		cin >> b;
		cout << multiplication (a,b) << endl;
	}
	 if (choice == 4) {
		 double a, b;
		 cout << "enter the first number:";
		 cin >> a;
		 cout << "enter the secomd numder:";
		 cin >> b;
		 cout << division(a, b) << endl;

	 }
	 */
	system("pause");
	return 0;
}

