/**
 * @file main.cpp
 * @author Rick (Kay_Rick@outlook.com)
 * @version 1.0
 * @date 2022-09-22 16:17:36
 * @brief program entrance
 * 
 * @copyright Copyright (c) 2022 Rick, All Rights Reserved.
 * 
 */
#include <iostream>
#include "User.h"

int main() {
    auto user = new User(20, "Rick");
    std::cout << user->get_name() << std::endl;
}