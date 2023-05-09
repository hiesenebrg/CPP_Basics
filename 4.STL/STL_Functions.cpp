#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>

using namespace std;

struct Interval
{
    int st;
    int et;
};

bool compare(Interval i1, Interval i2)
{
    return i1.st > i2.st; // sort this on decreasing order of st
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    // sorting 2D array
    Interval arr2D[] = {{6, 4}, {3, 4}, {4, 6}, {8, 13}};
    sort(arr2D, arr2D + 4, compare);
    int arr[] = {1, 3, 2, 5, 7, 6};
    sort(arr + 2, arr + 6);                 // sort in increasing order
    sort(arr + 4, arr + 6, greater<int>()); // sort in decreasing order
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << binary_search(arr, arr + 6, 2);
    cout << endl;

    cout << lower_bound(arr, arr + 6, 3) - arr;
    // lower bound gives the pointer to that index so subtracting with arr(which is pointer) gives the index of the element
    // also if element is not present then lower bound gives the adress the next higher element
    //  and if reperated ,it gives the element at first occurencing index
    cout << endl;

    cout << upper_bound(arr, arr + 6, 3) - arr;
    // if element is present or not present then lower bound gives the adress the next higher element

    cout << endl;

    cout << "The gcd is " << gcd(100, 60) << endl;

    cout << pow(2.2, 5) << endl;

    int x = 10;
    int y = 12;
    swap(x, y);
    //swap also works in vector,array,list and is defined in #include<utility>
    cout << x << endl;
    cout << y << endl;

    cout << min(14, 18) << endl;
    cout << max(14, 18) << endl;
    // for(int i=0;i<4;i++){
    // 	cout << arr[i].st << " : " << arr[i].et << endl;
    // }
    return 0;
}