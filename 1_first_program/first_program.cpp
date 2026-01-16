
#include <iostream> 

//using namespace std; // adds whole std data base

//using std::cout; //only add cout
/*

    The First C++ program
    1/14/2026

*/

int main(void) {
    //Lets print to console

    std::cout <<"Hello from COP3337!\n I am Mad\n"; //escape sequences are back (/n)
    std::cout <<"example print\n" << std::endl; // std::endl makes an empty new line

    // std - standard namespace, 
    // cout - console output (object of iostream class)
    // << - stream insertion operator - assigns imput to a variable
    // >> - stream extraction operator
    // cin replaces scanf from C

    std::cout << "87 * 76 - 98" << std::endl; //with quotes
    std::cout << 87 * 76 - 98 << std::endl; // without quotes
    int num;
    std::cin >> num; 
    std::cout << num * 2 << std::endl;

    //In C++
    //int i(1), j(2); = int i = 1 and int j = 2

    //Unlike in C, you don't need an array to make string 



    return 0; // 0 is success, non-zero is fail
}