#include <iostream>

using namespace std;

int main()
{
    cout << "Enter Ivanovi's budget: \n";
    double budget = 0;
    cin >> budget;
    cout << "Enter the number of nights: \n";
    double nights = 0;
    cin >> nights;
    cout << "Enter the price per night: \n";
    double pricePerNight = 0;
    cin >> pricePerNight;
    cout << "Enter percent for additional expences: \n";
    double percent = 0;
    cin >> percent;

    if (1.00 <= budget <= 10.000 && 0 <= nights <= 1000
        && 1.00 <= pricePerNight <= 500.00 && 0 <= percent <= 100)
    {
        double percentFromBudget = budget * ((double)percent / 100);
        
        if (nights > 7)
        {
            pricePerNight = pricePerNight - (pricePerNight * 0.05);
        }

        double price = (nights * pricePerNight) + percentFromBudget;

        if (budget > price)
        {
            double moneyLeft = budget - price;
            cout << "Ivanovi will be left with " << moneyLeft <<
                " leva after the vacation." << endl;
        }
        else
        {
            double moneyLeft = price - budget;
            cout << moneyLeft <<
                " leva needed." << endl;
        }
    }
    else
    {
        cout << "Please enter valid numbers!" << endl;
    }
    
    return 0;

    //800.50 -> 8 -> 100 -> 2 = 24.49
}

