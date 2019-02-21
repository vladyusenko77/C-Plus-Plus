#include <iostream>

#include<ctime>

using namespace std;

void Fila(int *pArr) {
	for (int i = 0;i < 10;i++) {
		*(pArr + i) = rand()%10 ;
	}
}
void NIKE(int *pArr) {
	for (int i = 0;i < 10;i++) {
		cout<<*(pArr + i) ;
	}
}

int main() {
	
	srand(unsigned(time(NULL)));

	
	int arr[10];
	int *pArr = arr;


	//приклад

	/*
	const int SIZE = 5;
	int  arr[SIZE] = { 4,8,12,16,20 };
	int *pArr = arr;
	for (int i = 0;i < SIZE;i++) {
		cout << "[" << i << "]" <<arr[i]<< endl;
		cout <<"adres"<<i<<"="<< &arr[i]  << endl;
	}
	
	for (int i = 0;i < SIZE;i++) {
		cout << "[" << i << "]" << arr[i] << endl;
		
	}
	*/
   //Дано цілочисельний одновимірний масив.Заповнити його, вивести на екран у прямому та зворотньому порядку та порахувати суму елементів з використанням вказівників.

	

	/*
	const int SIZE = 5;
	int  arr[SIZE];
	int sum = 0;
	
	int *pArr = arr;
	
	

	for (int i = 0;i < SIZE;i++) {
		arr[i] = rand() % 5;
		cout << pArr[i] << endl;
		sum += pArr[i];
	
	}
	cout << "<_________________________>"<<endl;
	for (int j = 5 - 1; j >= 0; --j) {


		cout << pArr[j] << endl;
	}
		cout << "sum=" << sum << endl;
	*/
	


	//Дано одновимірний масив.Знайти найбільше та найменше значення у масиві та поміняти їх у масиві місцями.Вивести перетворений масив на екран

	/*
		const int SIZE = 5;
		int  arr[SIZE];
		
		int MAX = 0;
		int MIN=100;
		int temp = 0;
		int MAX1 = 0;
		int MIN1 = 100;

		int *pArr = arr;
		
		for (int i = 0;i < SIZE;i++) {
			arr[i] = rand() % 50;
			cout << pArr[i] << endl;

			if (MAX <= pArr[i]) {
				MAX = pArr[i];
				MAX1= i;
			}
			if (MIN>pArr[i]) {
				MIN=pArr[i];
				MIN1 = i;

			}
		}
				
		cout << "<_________________________>" << endl;

		for (int j = 5 - 1; j >= 0; --j) {
			cout << pArr[j] << endl;
			
		}
		
		cout << "<_________________________>" << endl;
		
		cout <<"Max="<<"["<<MAX1<<"]"<<MAX << endl;
		cout << "Min=" <<"["<<MIN1<<"]"<< MIN << endl;
		cout << "<_________________________>" << endl;
		cout << "Max=" <<"["<< MAX1 <<"]"<< MIN << endl;
		cout << "Min=" << "[" << MIN1 << "[" << MAX << endl;
*/

	//Дано два масиви, впорядкованих по зростанню : .Сформуйте третій масив, який складається з елементів масивів А і В, впорядкованих по зростанню.





	system("pause");
	return 0;
}

