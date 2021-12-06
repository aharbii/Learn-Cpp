// Section 9
// Shipping

/******************************************************************************
 * Shipping cost calculator
 * 
 * Ask the user for package dimension in inches
 * length, width, height - these should be integers
 * 
 * All dimension must be 10 inches or less or we cannot ship it
 * 
 * Base cost $2.50
 * If package volume is greater than 100 cubic inches there is a 10% surcharge
 * If package volume is greater than 500 cubic inches there is a 25% surcharge
******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int length{}, width{}, height{};
    cout << "Welcome the package cost calculator" << endl;
    cout << "Enter package dimension in inches: ";
    cin >> length >> width >> height;
    const int max_dimension{10};
    int volume{length * width * height};
    double cost{2.50};
    const int tier1{100};
    const int tier2{500};
    const double tier1_surcharge{0.10};
    const double tier2_surcharge{0.25};

    if (length <= max_dimension && width <= max_dimension && height <= max_dimension)
    {
        cout << "Base cost is: $" << cost << endl;
        if (volume > tier1)
        {
            if ( volume > tier2)
            {
                cout << "adding tier 2 surcharge" << endl;
                cost += (cost * tier2_surcharge);
            }
            else
            {
                cout << "adding tier 1 surcharge" << endl;
                cost += (cost * tier1_surcharge);
            }
        }
        cout << fixed << setprecision(2);
        cout << "Your final cost is: $" << cost << endl;
    }
    else
    {
        cout << "Sorry, we cannot ship your package." << endl;
    }

    cout << "The volume of your package is: " << volume << endl;

    return 0;
}