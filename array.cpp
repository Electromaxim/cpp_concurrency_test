#include <iostream>
#include <string>
#include <fstream>

// archive in simple text format:
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
using namespace std;

int main()
{
    string snippet = "message there!";
    string * pe = &str;

    char message [] = snippet; // 

    cout << &str << " " << *pe << endl;

    return 0;
}
