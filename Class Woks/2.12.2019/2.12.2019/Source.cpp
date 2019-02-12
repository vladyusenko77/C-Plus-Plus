

/*
void foo(int couter) {
	couter--;
	cout << "couter" << couter << endl;
   if(couter>0)
	foo(couter);
	
	
	
}

int main() {

	foo(100);
	*/
/*
int foo(int couter) {
	
	if (couter < 1) {
		return 0;
	}
	couter--;
	cout << "couter" << couter << endl;
	return foo(couter);



}

int main() {

	foo(70);
*/

//Написати функцію, яка рекурсивно обчислює суму чисел в переданому діапазоні

/*
int sum = 0;

int Sum(int a,int b) {
	cout << a << "=" << b << endl;
	sum += a;
	
	if (a == b) {
		return sum;
	}
	return Sum(a + 1, b);
}

	

int main() {
	int rezult = Sum(5, 10);
	cout << rezult << endl;
*/
	

	//Написати шаблон функцію для роботи з масивом :
	//a. (або заповнення випадковими числами)  масиву
	//b.виведення масиву на екран
	//c.реалізувати можливість сортування масиву(зростання.спадання) по вибору користувача(вибір здійснюється за допомогою типу bool)

#include<iostream>

#include<ctime>



const int size = 100;
template<typename T>
T Output(T arr[],int[size]) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < size; i++) {
		 arr[i] = rand % 200-100;
	}
	return 0;
}

template<typename T>
T Show(T arr[],int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
cout<<endl;
return 0;
}

template <typename T1,typename T2>
T1 Serch(T1 arr[], int size, T2 x) {
	for (int i = 0; i < size; i++) {
		if (x == arr[i]) {
			return i;
		}
	}
	return -1;
}
template<typename T>
T BubbleSort(T arr[], int size, bool isFromLess) {
	for (int i = 0; i < size; i++) {
		for (int j = SIZE - 1; j > i; j--) {
			if (isFromLess ? arr[j] < arr[j - 1] : arr[j] > arr[j - 1]) {
				T x = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = x;
			}
		}
	}
}




int main() {
	





	system("pause");
	return 0;

}