#include <iostream>
using namespace std;

int main()

{
    int a[10];
    cout << a<<endl;
    cout << &a[0] << endl;

     a[0]= 5;
     a[1] = 10;
    cout <<*a << endl;
    cout << *(a+1) << endl;
    int *p = &a[0];
    cout << a << endl;
    cout << p<< endl;

    cout << &p << endl;
    cout << &a << endl;

    cout << sizeof(p) << endl;
    cout <<sizeof(a) << endl;

}

// remeber in array a[i] == i[a] because *(a+i) is same as *(i+a) as 2+3 is same as 3+2

// you cannot do a++ but you can do p++;