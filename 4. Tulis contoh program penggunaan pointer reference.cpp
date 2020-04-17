//Tulis contoh program penggunaan pointer reference (*)
//Jawabannya:
#include <iostream>
using namespace std;

int main()
{
     int x;
     int *p;

     x = 30;
     p = &x;



     cout<<"Nilai X   \t\t: "<<x<<endl;
     cout<<"Alamat X (&X) \t\t: "<<&x<<endl<<endl;

     cout<<"Nilai yang ditunjuk *P\t: "<<*p<<endl;
     cout<<"Alamat yang ditunjuk *P\t: "<<p<<endl;
     cout<<"Alamat *P (&P) \t\t: "<<&p<<endl;

     *p = 20;

     cout<<"\n\n\nNilai X   \t\t: "<<x<<endl;
     cout<<"Alamat X (&X) \t\t: "<<&x<<endl<<endl;

     cout<<"Nilai yang ditunjuk *P\t: "<<*p<<endl;
     cout<<"Alamat yang ditunjuk *P\t: "<<p<<endl;
     cout<<"Alamat *P (&P) \t\t: "<<&p<<endl;

     return 0;
}

