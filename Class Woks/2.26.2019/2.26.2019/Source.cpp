#include <iostream>

using namespace std;

//Написати функцію, яка отримує одновимірний масив і повертає ссилку на найменший елемент масиву.За допомогою цієї функції вивести на екран найменший елемент та подвоїти найменший елемент масиву.
//Написати функцію, яка замінює всі від’ємні елементи переданого масиву нулями.Примітка!Функція повинна повертати ссилку на відємний елемент

int Minarr(int arr[], int elarr) {
	for (int i = 0; i < 5; i++) {
		if (elarr > arr[i]) {
			elarr = arr[i];
		}
	}

	cout << "min" << elarr << endl;
}

int main() {
	int arr[5]{ 3,5,74,4,3};
	int elarr = 1000;
	Minarr(arr, elarr);







system("pause");
return 0;
}



//Дано три числа.Оголосити посилання на ці числа.Отримати добуток трьох заданих чисел, середє арифметичне, найменше з них, користуючись непрямим доступом до чисел(через посилання).

/*
void dobutok(int &pA, int &pB, int &pC,int &sum) {
	sum=pA * pB * pC;
}
void aryfmetychne(int &pA, int &pB, int &pC,int &sum1) {
	 sum1=pA * pB * pC/3;
}

void naymenshe(int &pA, int &pB, int &pC,int &pmin) {
	if (pA < pB || pA < pC) {
		pmin = pA;
	}
	else if (pB < pA || pB < pC) {
		pmin = pB;
	}
	else if (pC < pA || pC < pB) {
		pmin = pC;
	}
}
int main() {
	int a = 10, b = 20, c = 30;
	int &pA = a, &pB = b, &pC = c;
	
	int min = 0, sum = 0, sum1 = 0;
	int &pmin = min;
    int &psum = sum;
	int &psum1=sum1;



	dobutok(a,b,c,sum);

	cout << "otrymanyy dobutok:"<< sum << endl;
	
	aryfmetychne(a, b, c,sum1);

	cout << "serednye aryfmetychne:"<< sum1<< endl;

	naymenshe(a, b, c,pmin);

	cout<<"naymenshe:"<< pmin << endl;



	system("pause");
	return 0;
}
*/






/*
	int a = 10;
	cout << a <<endl<<&a<< endl;//отриманя значеня і адреси змной А.
	int *pA = &a;
	cout << *pA<<endl << pA << endl;//посиланя на (адресу)память в зміній А.
	int &rA=a;
	cout << rA << endl << &rA << endl;//посилая на значеня зміной А.
	*/


//приклад посиланя 
/*
# include <iostream>


using namespace std;

void FVAR(int a) {
	cout << "FVAR BEFORE a  value: " << a << " : a addr : " << &a << endl;
	a += 100;
	cout << "FVAR AFTER a  value: " << a << " : a addr : " << &a << endl;
}
void FREF(int &a) {
	cout << "FREF BEFORE a  value: " << a << " : a addr : " << &a << endl;
	a += 300;
	cout << "FREF AFTER a  value: " << a << " : a addr : " << &a << endl;
}

void FPTR(int *a) {
	cout << "FPTR BEFORE a  value: " << *a << " : a addr : " << a << endl;
	*a += 500;
	cout << "FPTR AFTER a  value: " << *a << " : a addr : " << a << endl;
}


int main() {

	int a = 10;

	cout << "main a  value: " << a << "  : a addr : " << &a << endl;
	//int *pA = &a;
	//cout << "*pA  value: " << *pA << " : *pA addr : " << pA << endl;
	//cout << "========================Before Ra==================>" << endl;

	//int &Ra = a;

	//cout << "a  value: " << a << " : a addr : " << &a << endl;
	//cout << "&Ra  value: " << Ra << " : &Ra addr : " << &Ra << endl;
	cout << "========================After Ra==================>" << endl;

	FVAR(a);
	//FREF(Ra);
	FREF(a); //FREF( Ra );
	FPTR(&a);

	cout << "main a  value: " << a << "  : a addr : " << &a << endl;

	system("pause");
	return 0;
}
*/