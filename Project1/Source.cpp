#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
#pragma warning (disable:4996)

/*int &swap(int &a, int &b){
	int t;
	t = a;
	a = b;
	b = t;
	return a;
}*/


void multBy(int &a){
	int b = 5;
	a = a*b;
}

int main(){
	/*int a = 5;
	int*p = &a;
	cout << *&a << endl;
	cout << *p << endl;
	cout << &a << endl;
	cout << *&p << endl;*/
	int a = 50;
	multBy(a);
	cout << a << endl;
	char *c[] = { "lalala", "duplic", "what", "damn" };
	cout << c[0] << endl;

	cin.get();
	return 0;
}

/*	int &b = a;
int c = 66;
cout << a << endl;
cout << b << endl;
cout << c << endl;
b = c;
cout << a << endl;
cout << b << endl;
cout << c << endl;
c = 88;
cout << a << endl;
cout << b << endl;
cout << c << endl;*/

/*int a = 55; int b = 8;
int &c = swap(a, b);

cout << "a: " << a << endl;
cout << "b: " << b << endl;
cout << "c: " << c << endl;

c = 100;
cout << "a: " << a << endl;
cout << "b: " << b << endl;
cout << "c: " << c << endl;

a = 200;
cout << "a: " << a << endl;
cout << "b: " << b << endl;
cout << "c: " << c << endl;*/














/*void getFit(int *a){
*a = (*a) * 2;
}*/

/*	int arr[5] = { 1, 8, 3, 4, 5 };
cout << arr << endl;
cout << arr[0+1] << endl;
cout << &arr << endl;
cout << *(arr+1) << endl;*/
/*for (int i = 1; i <= 10; i++){
for (int j = 1; j <= 10; j++){
cout.width(4);
cout << (i*j);

}
cout << endl;
}*/
/*string Meny;
Meny = "DontFuckWithMe";
for (int i = 0; i < Meny.length(); i++){
cout << Meny[i] << " " << endl;
}*/
/*int a = 5;
getFit(&a);
cout << a << endl;*/

/*string name = "Whats";
string & const one = name;
string two = "hi";
cout << one << endl;
cout << name << endl;
one = two;
two = one;
one = "Dawee";
two = "Kirab";

cout << one << endl;
cout << name << endl;
cout << two << endl;
one = "YouNi";
cout << one << endl;
cout << name << endl;

int i = 0;
int y = 1;
int&const icr = i;
icr = y;          // Can change the object it is pointing to so it's not like a const pointer...
icr = 99;         // Can assign another value but the value is not assigned to y...
int x = 9;
icr = x;
cout << "icr: " << icr << ", y:" << y << endl;*/

/*int i = 32, j = 4, k, *q;
k = --i / j;
cout << k;
q = &j;
{
int i, j = 10;
i = j - ++(*q);
cout <<"i= " << i << ",j= " << j << "\n";
}
cout << "i= " << i << ",j= " << j << "\n";
system("pause");*/
//	cout << "MenyTheMeN";
//cin.get();