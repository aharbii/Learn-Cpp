// Section 9
// Range-based for Loop

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int scores[]{100, 90, 97};
    for (auto score : scores)
    {
        cout << score << endl;
    }

    vector<double> temps{87.2, 77.1, 80.0, 72.5};
    double average_temp{};
    double running_sum{};

    for (auto temp : temps)
    {
        running_sum += temp;
    }

    cout << fixed << setprecision(1);
    average_temp = running_sum / temps.size();
    cout << "average = " << average_temp << endl;

    for (auto val : {1, 2, 3, 4, 5})
    {
        cout << val << endl;
    }

    for (auto c : "This is a test")
    {
        if (c == ' ')
            cout << "\t";
        else
            cout << c;
    }
    cout << endl;
    return 0;
}