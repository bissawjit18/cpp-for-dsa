#include <iostream>
using namespace std;
int main(){

    int num;
    char inicial;
    cin >> num >> inicial;

    cout << num << " " << inicial << endl; 

    // Jodi character er ASCII value need hoy
    int s = 69;
    char charr = 'Y';
    int ascii = charr;
    cout << ascii << endl;

    // TypeCasting 
    cout << "Int Typecasting = " << (int)charr << endl;
    cout << "Char Typcasting = " << (char)s << endl;


    return 0 ;
}