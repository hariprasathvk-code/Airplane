#include <iostream>
using namespace std;


int main() {
    cout << "Check-in\n";
    cout << "Baggage drop\n";
    if (!securityScreening()) return 0;
    immigration();
    cout << "Journey complete\n";
    return 0;
}
