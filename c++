#include <iostream>

bool is_palindrome(int n){
    std:string n_str = std::to_string(n);
    return n_str == std::string(n_str.rbegin()
    n_str.rend());
}
int main(){
    int number;
    std::cin >> number;
    
    if (is_palindrome)(number)){
        std::cout <<number<<"является палиндромом"<<std::end|;
    } else {
        std::cout <<number<<"не является палиндромом"<<std::end|;
    }
    return 0;
    
}
