#include <iostream>
using namespace std;

// pass by value
void incrementByValue(int n)
{
    n++;
}
// pass by reference
void incrementByRefernce(int &n)
{
    n++;
}
// bad practice -> never do this
int &f(int n)
{
    int a = n;
    return a;
}
int main(int argc, char const *argv[])
{
    int i = 20;
    int &j = i;
    // it means j does not create its own memory it os just a refernce to i
    // remember we always have to declare j at the same line

    cout << i << endl;
    cout << j << endl;

    i++;
    cout << i << endl;
    cout << j << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    int k = 200;
    j = k; // by changing j it also changes the i because j always contains the refernece of i
    cout << j << endl;
    cout << i << endl;

    incrementByValue(i);
    cout << i << endl;
    incrementByRefernce(i);
    cout << i << endl;

    int &m = f(i);
    cout << "This is m " << m++ << endl;
    return 0;
}