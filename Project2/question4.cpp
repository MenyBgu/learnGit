#include <iostream>
#include<iomanip>
using namespace std;
#pragma warning(disable:4996)

/*void swap(double *a, double *b){
	double temp = *a;
	*a = *b;
	*b = temp;
}*/
void swap(int *x, int *y){
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

int main(){
	int a = 5, b = 10;
	cout << "a: " << a << " and b: " << b << "\n";
	swap(&a, &b);
	cout << "now after swap,a: " << a << " and b: " << b << "\n";
	cin.get();
}
/*void foo(int&x){
	x=x%2+10;
}

int*goo(int&y){
	y = y / 100 + y % 10;
	return &y;
}

void main(){
	int temp = 1234;
	int *p = goo(temp);
	cout << temp << endl;
	foo(*p);
	cout << temp << endl;
	cin.get();
}*/