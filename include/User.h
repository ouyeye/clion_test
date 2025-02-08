//
// Created by admin on 2025/2/8.
//

#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    int age;
    std::string name;
public:
    User(int age_, std::string name_): age(age_), name(name_){}
    std::string get_name();
};

#endif //USER_H
