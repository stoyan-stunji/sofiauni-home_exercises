#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the radius: \n";
    
    int radius;
    cin >> radius;

    double perimeter = 2 * atan(1) * 4 * radius;
    double area = atan(1) * 4 * radius * radius;
    
    cout << "The perimeter is " << round(perimeter)<< " cm." << endl;
    cout << "The area is " << round(area) << " cm^2." << endl;
    
    return 0;
}
