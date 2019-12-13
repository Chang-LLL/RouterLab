#include<iostream>
using namespace std;

int main(){
	int a = 0xdd2f;
	int b = 0x5555;
	int c = 0x3285;
	cout << a + b + (~c) + 1 << endl;
	cout << 0xffff << endl;
	return 0;
}