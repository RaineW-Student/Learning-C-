
#include <iostream> 

// shift + alt + down key copies
// create a namespace

namespace first {
    int a; 
}

namespace second {
    int a; 
}


int main(void){
    // :: scope resolution operator

    first::a = 10;
    second::a = 77;

    std::cout << first::a << std::endl;
    std::cout << second::a <<std::endl;
    std::cout << "first" <<std::endl;
    std::cout << "second" <<std::endl;


    return 0;
}