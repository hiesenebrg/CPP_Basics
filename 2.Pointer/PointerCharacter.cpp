#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[] = {1,2,3};
    char b[] = "abc"; //remeber this will create a character array of size 3 as |a|b|c|

    cout << a << endl; //it will give adress of a[0] as usual
    cout << b << endl; // but htis will give the value of b[0] not the adress

    char *c = &b[0];
    cout << c << endl; //it again print the value not the adress



    char ab = 'a';
    char * as = &ab;
    cout << ab << endl;
    cout << as << endl;

    return 0;
}


