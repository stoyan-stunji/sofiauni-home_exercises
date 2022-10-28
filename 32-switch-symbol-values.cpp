#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the first symbol and its value: \n";
    char firstSymbol;
    cin >> firstSymbol;
    int firstSymbolValue;
    cin >> firstSymbolValue;

    cout << "Enter the second symbol and its value: \n";
    char secondSymbol;
    cin >> secondSymbol;
    int secondSymbolValue;
    cin >> secondSymbolValue;

    int temp = firstSymbolValue;
    firstSymbolValue = secondSymbolValue;

    cout << "The symbol " << firstSymbol 
        << " now has a value of " << firstSymbolValue << "." << endl;
    cout << "The symbol " << secondSymbol 
        << " now has a value of " << temp << "." << endl;
       
    return 0;
}
