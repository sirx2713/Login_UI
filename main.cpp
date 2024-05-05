#include <iostream>
#include <cmath>


int main() {
    std::cout << "Welcome to iNerdCoder!" << std::endl;
    std::cout << "\n";
    std::string username;
    std::cout << "Create USERNAME: ";
    std::cin >> username;
    std::cout << "\n";
    std::cout << "Welcome " << username << std::endl;
    std::string password;
    std::cout << "Create a password: ";
    std::cin >> password;
    std::cout <<  "\n";
    std::string passwordConfirmation;
    std::cout << "Re-type password to confirm: ";
    std::cin >> passwordConfirmation;
    std::cout << "\n";
    if(password == passwordConfirmation) {
        std::cout << "Username: " << username << std::endl;
        std::cout << "\n";
        std::cout << "Password: " << password.substr(0, 1) << "****************" << std::endl;
    }
    while (password != passwordConfirmation){
        std::cout << "Passwords do not match! Try again." << std::endl;
        std::cout << "\n";
        std::string password1;
        std::cout << "Create a password: ";
        std::cin >> password1;
        std::cout <<  "\n";
        std::string passwordConfirmation1;
        std::cout << "Re-type password to confirm: ";
        std::cin >> passwordConfirmation1;
        std::cout << "\n";
        if(password1 == passwordConfirmation1){
            break;
        }
    }
    return 0;
}
