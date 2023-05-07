#include <iostream>
using namespace std;
int sum(int * a, int size)
{
    // now remember array a is passed as  a pointer and we are doing all operations in pointer
    // but we know an array pointer behave as it is an array itself so we can use for loop easily as if we are using the exact same array
    cout << sizeof(a) << endl;
    // here this only give 8 byte not 40 byte which shows a is just the pointer pointing to the array not the original array
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans += a[i];
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int a[10];

    cout << sizeof(a) << endl; // here if give 40 (10*4) byte as it is array

    cout << sum(a + 3, 7) << endl;
    // as we know that a is the adress so we can pass a+3 as the adress of the third index

    return 0;
}
