#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    const int i = 10; // you have to intialoze it here just like reference variabke(int& i)
    cout << i << endl;

    // const refernce from a non const variable
    int j = 12;
    const int &k = j;
    j++;
    // so k cannot be updated because k is now link with j permanently that is k always contains the adress of j
    //  so the value at j can onlu be updated
    cout << j << endl;
    cout << k << endl;

    // const refernce from a const variable
    const int j2 = 12;
    const int &k2 = j2;
    //cannot do any changes
    cout << j2 << endl;
    cout << k2 << endl;

    // non const refernce from a const variable
    int const j3 = 30;
    // int& k3 = j3;
    //cannot do any changes
    cout << j3 << endl;



    //In pointer
    int const z  = 10;
    int const *ps = &z;
    // pointer should be constant for a constant variable 
    return 0;
}
