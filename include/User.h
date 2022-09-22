/**
 * @file User.h
 * @author Rick (Kay_Rick@outlook.com)
 * @version 1.0
 * @date 2022-09-22 16:16:32
 * @brief Template header file
 * 
 * @copyright Copyright (c) 2022 Rick, All Rights Reserved.
 * 
 */
#ifndef CMAKE_TEMPLATE_USER_H
#define CMAKE_TEMPLATE_USER_H
#include <string>

class User {
private:
    int age;
    std::string name;
public:
    User(int age_, std::string name_) : age(age_), name(name_){}
    std::string get_name();
};
#endif // CMAKE_TEMPLATE_USER_H