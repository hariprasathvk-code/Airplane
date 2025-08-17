#include <iostream>
using namespace std;

bool securityScreening() {
    char ans;
    cout << "Restricted articles? (y/n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') cout << "Give up restricted articles\n";

    cout << "Metal detected? (y/n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') cout << "Hand search\n";

    cout << "Dangerous goods? (y/n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') cout << "Give up dangerous goods\n";

    cout << "Screening cleared\n";
    return true;
}



int main() {
    cout << "Check-in\n";
    cout << "Baggage drop\n";
    if (!securityScreening()) return 0;
    immigration();
    cout << "Journey complete\n";
    return 0;
}
