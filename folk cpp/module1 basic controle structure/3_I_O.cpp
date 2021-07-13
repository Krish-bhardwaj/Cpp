#include <iostream>

using namespace std;

int main()
{
    // cout
    char sample[] = "hello this is text";

    cout << sample << " part 2";
    // cin
    int age;

    cout << "Enter your age:";
    cin >> age;
    cout << "\nYour age is: " << age;
    // cerr
     cerr << "An error occured";
    // clog
    clog << "An error occured";

    return 0;
}