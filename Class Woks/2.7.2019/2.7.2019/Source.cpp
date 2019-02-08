#include <iostream>

#include <ctime>

using namespace std;
/*
template<typename T,typename T2>

void sum(T a, T2 b) {
	cout << a << endl;
	cout << b << endl;
	

}

int main() {
	cout << "<<<<<>>>>" << endl;
	sum(5, 6);

	cout << "<<<<<>>>>"<<endl;
	sum(5.4, 6.4);

	cout << "<<<<<>>>>" << endl;
	sum("bill", "vasil");

	cout << "<<<<<>>>>" << endl;
	sum(4 , 5.6);

	cout << "<<<<<>>>>" << endl;
	sum(8.4, 5);

	cout << "<<<<<>>>>" << endl;
	*/
/*
template<typename T, typename T2, typename T3>
T sum(T a, T2 b, T3 c) {
	return a + b + c;
}
template<typename T, typename T2>
T2 sum2(T a, T2 b) {
	return a + b;
}
int main() {
	cout << sum(5, 5, 5) << endl;
	cout << sum(5, 5.3) << endl;
*/


/*1 Написати наступні функції, які в якості параметра приймають двохвимірний масив і його розмірності.Перевірити роботу функції для двохвимірних масивів розмірністю 3х4 та 7х5.
функцію Fill(), яка заповнює двохвимірний масив випадковими значеннями в діапазоні[1..30]
шаблонну функцію Print(), яка виводить елементи масиву на екран в вигляді матриці
функцію, яка заміняє всі парні елементи нулями
*/

const int arr[rom][col];
const int rom = 3;
const int col = 7;
 int a (int arr[rom][col]){
	for (int i = 0;i < rom;i++) {
		for (int j = 0;j < col;j++) {
			cout << arr[i][j] = rand % 30 + 1;
		}
	}
}

 int b(int arr[rom][col]){
	for (int i = 0;i < rom;i++) {
		for (int j = 0;j < col;j++) {
			cout << arr[i][j] = rand % 30 + 1;
		}
	}
}


int main(){
	srand(unsigned(time(NULL)));
  
    const int arr[col][rom];
	 sum (arr);
	


	

	system("pause");
	return 0;
}
