#include <iostream>
#include <string>

int main(void) {
    //create a string
    std::string str = "Supercalifragilisticespialidocious";

    std::cout << str << std::endl;
    std::cout << "The size of the string is " << str.size() << std::endl;
    std::cout << std::endl;
    str += " is a big word!";
    std::cout << str << std::endl;
    std::cout << "The size of the string I modified is " << str.size() << std::endl;

    return 0;

}