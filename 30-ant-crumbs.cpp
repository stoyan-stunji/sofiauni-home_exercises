#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the number of crumbs the ant has to take: \n";
    int N;
    cin >> N;
    int distancePool = 0;

    for (int counter = 1; counter <= N; counter++)
    {
        int distance = 3 * counter - 1;
        distance = distance + distance;
        distancePool += distance;
    }
    cout << "The ant has to travel " << distancePool 
        << " cm. to get all of the crumbs." << endl;

    return 0;
}
