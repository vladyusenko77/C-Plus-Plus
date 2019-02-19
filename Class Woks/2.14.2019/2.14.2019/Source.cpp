#include<iostream>

#include<ctime>

using namespace std;

//Дано три числа.Оголосити вказівники на ці числа.Отримати добуток трьох заданих чисел, середє арифметичне, найменше з них, користуючись непрямим доступом до чисел(через вказівники).
//Виконати задачу 1 з використанням void вказівників.


void Sum2(int *pA, int *pB, int *pC,int *pSum,int *parf) {
	
	*pSum=*pA * *pB * *pC ;
	*parf=(*pA * *pB * *pC) / 3;
}

void Sum2(int *pA, int *pB, int *pC ,int *pmin ) {
	
	if (*pA<*pB||*pA<*pC) {
		*pmin = *pA;
	}
	else if (*pB<*pA||*pB<*pC) {
		*pmin = *pB;
	}
	else if (*pC<*pA||*pC<*pB) {
		*pmin = *pC;
	}
}
		
int main() {

	int a = 7, b = 20, c = 30;
	int Sum = 0;
	int arf = 0;
	int min=0 ;

	int *pmin = &min;
	int *parf = &arf;
	int *pSum = &Sum;
	int *pA = &a;
	int *pB = &b;
	int *pC = &c;
	Sum2(pA,pB,pC,pSum,parf);
	

	cout << "dobutok = " <<*pSum<< endl;
	cout << "arithmetic mean = " << *parf << endl;
	Sum2(pA, pB, pC,pmin);
	cout << "min = "<< min << endl;

	system("pause");
	return 0;
}

//Написать  калькулятор, пользуясь только указателями.








/*int main() {
	int const zero=10;
	int arr[zero];
	int max = 0;
	int sum = 0;
	int maxi = 0;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < zero; i++) {
		arr[i] = rand() % 1000 - 20;

		cout << i << ":" << arr[i] << endl;

		if (arr[i] > max) {
			max = arr[i];
			maxi = i;
		}
	}

	cout << "Max=" << max << endl;
	cout << "maxi=" << maxi << endl;


	system("pause");
	return 0;
}*/
