#include<iostream>
using namespace std;

void print(int *p){
    cout << *p <<endl;
}


void increment(int *p){
    (*p)++;

}
void incrementPointer(int *p){
    p+=1;
}


int main(int argc, char const *argv[])
{
    int i = 10;
    print(&i);

    cout << &i <<endl;
   incrementPointer(&i);
    cout << &i <<endl;
    //now here value of i does  not changes aas it passed as passed by value which means *p is the copy
    //of adress of i, so we changed the copy not the original value
    increment(&i);
cout << i<<endl;
    return 0;
}
