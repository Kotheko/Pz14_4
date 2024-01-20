#include <iostream>

int main()
{
    std::string str = "The Cyrillic alphabet does not work. How can I fix it?";

    std::cout << str << "\n" << str.size() << "\n" << str.substr(0, 1) << "\n" << str.substr(str.length() - 1, 1) << "\n";
}