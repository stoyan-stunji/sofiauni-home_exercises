#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the X and Y coordinate: \n";
    double xcoord = 0;
    cin >> xcoord;
    double ycoord = 0;
    cin >> ycoord;

    const double CIRCLERADIUS = 2;

    bool isInCircle = (xcoord * xcoord) + (ycoord * ycoord) 
        < CIRCLERADIUS * CIRCLERADIUS;
    bool isInRectangle = xcoord > 1;
    bool isOnContur = ((xcoord * xcoord) + (ycoord * ycoord)
        == CIRCLERADIUS * CIRCLERADIUS) || xcoord == 1;

    cout << "Is the point within the figure?\n";
    cout << boolalpha << ((isInCircle && !isInRectangle) || (!isInCircle &&
        isInRectangle) || isOnContur) << endl;

    return 0;
}
