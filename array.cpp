#include <iostream>
#include <string>
using namespace std;

int main()
{
    int jumbo = 23;
    int * p = &jumbo;

    string str = "hello there!";
    string * pe = &str;

    char message [] = "hello there!";

    cout << &str << " " << *pe << endl;

    return 0;
}
