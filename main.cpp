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

void immigration() {
    char ans;
    cout << "Immigration approved? (y/n): ";
    cin >> ans;
    if (!(ans == 'y' || ans == 'Y')) {
        cout << "Denied\n";
        return;
    }

    cout << "Board flight\n";
    cout << "Flight departs\n";
    cout << "Flight lands\n";

    cout << "Connection flight? (y/n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') {
        securityScreening();
        immigration(); // loop back for connection
        return;
    }

    cout << "Leave flight\n";
    cout << "Immigration on arrival approved? (y/n): ";
    cin >> ans;
    if (!(ans == 'y' || ans == 'Y')) {
        cout << "Denied, sent back\n";
        return;
    }

    cout << "Permit to enter country? (y/n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') cout << "Claim baggage\n";
    else cout << "Sent back\n";
}

int main() {
    cout << "Check-in\n";
    cout << "Baggage drop\n";
    if (!securityScreening()) return 0;
    immigration();
    cout << "Journey complete\n";
    return 0;
}
