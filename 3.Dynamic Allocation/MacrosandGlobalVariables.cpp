#include <iostream> //this is preprocessor
using namespace std;
#define PI 3.14
//the main magic of macros is that it places the value of pi before compiling
int main(int argc, char const *argv[])
{
    int r;
    cin >> r;
    cout << PI * r * r << endl;
    return 0;
}
