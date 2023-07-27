#include "iostream"
// #include "string"
#include "cstring"
#include "windows.h"
// #include "inline.h"

inline double square(double a) {return a * a;}

int *f()
{
    // return new int(100);
    return new int[100];

}

int main(int argc, char const *argv[])
{
    using namespace std;
    // string s1 = "jjssz";
    // string s2 = "JJSSZ";
    // cout << s1 << s2 << endl;
    // string s3 = s1 + s2;
    // cout << s3 <<endl;

    // int *p = f();

    // cout << *p << endl;

    double a = 2;

    cout << square(a) << endl;


    system("pause");
    return 0;
}



