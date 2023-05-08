#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *p = new int;
    //new int create the memory in heap while int *p create the menory in stack which has memory adress of heap memory of p

    *p = 10;
    cout << *p << endl;
    delete p;
    // remember that p will not delete  but the memomry that p is pointing is getting deleted, in this case it is 10;
    double *pd = new double;
    char *ch = new char;
    int *pa = new int[50];
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int *p2 = new int[n];
    p2[0] = 10;
    cout << p2[0] << endl;

    delete []p2;
    //we have to write this while deleting the array
    return 0;
}
