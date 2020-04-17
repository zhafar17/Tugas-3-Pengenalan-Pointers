//Tulis contoh program penggunaan operator pointer dereference (&)
//Jawabannya:
#include <iostream>
using namespace std;
int main(){
	float a =10;
	float *p;
	p =&a;
	cout<<"Alamat memori variable a adalah "<<p;
	return 0;
}

