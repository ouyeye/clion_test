#include <iostream>
#include "User.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    User *user = new User(18, "libai");
    std::cout<<user->get_name()<<std::endl;
    return 0;
}
