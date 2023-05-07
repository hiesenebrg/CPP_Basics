#include<iostream>
using namespace std;

void increment1(int **p){ p+=1;} //this not going to work as we are changing in copy we have already discused
void increment2(int **p){*p+=1;} //here value changes as we are changing the value (which is adress of i)
void increment3(int **p){**p+=1;} //here value changes as we are changing the value of i

int main(int argc, char const *argv[])
 {
    int i = 10;
    int *p = &i;
    int ** p2 = &p;
    // int *** p3 = &p2;
    cout <<p<<endl;
    cout << &p <<endl;
    cout << p2<<endl;
    cout << *p2 <<endl;


        cout << i <<endl;

    cout << *p <<endl;

    cout << **p2 <<endl;

    
    
    // cout << p3<<endl;
    return 0;
 }
 
