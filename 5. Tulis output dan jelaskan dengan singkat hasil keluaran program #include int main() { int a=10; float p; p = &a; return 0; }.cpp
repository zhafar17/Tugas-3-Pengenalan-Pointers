//Tulis output dan jelaskan dengan singkat hasil keluaran program #include int main() { int a=10; float *p; p = &a; return 0; }
//Jawabannya:
#include <iostream>
using namespace std;
int main(){
	float a =10;
	float *p;
	p =&a;
	
	cout<<"Nilai pada variable p adalah "<<*p;
	

	return 0;
}

