#include <iostream>
using namespace std;
inline int max(int a, int b)
{
    return a > b ? a : b;
}
// now inline simply copies the function body whereever function is called so that no new variables(used inside the max function )is formed
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    int c = max(a, b);
    cout << c << endl;

    int m, n;
    cin >> m >> n;
    int o = max(m, n);
    cout << o;
    return 0;
}
