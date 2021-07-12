#include<iostream>
using namespace std ;
// data types
int global =8;
void func ()
{
    cout<< global <<endl;
}

int main()
{
    // int type variable
    int a = 5;
    int b = 3;
    // float type
    float f =3.15;
    // char type
    char char_ = 'a';
    // boolean 
    bool T = true;
    bool F = false;
    cout<<T<<F<<endl;
    // single line decleration 
    int c = 12 , d = 13 ;
    cout<<a << " " << b<<endl;
    cout<<c << " " << d<<endl;
    cout<<f<<endl;
    cout<<char_<<endl;
    

    // global variable
    cout<<global<<endl;
    // local variable
    int global = 9;
    func(); 
    cout<<global<<endl; 


    return 0;

}