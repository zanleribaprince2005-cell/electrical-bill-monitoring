#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

const int MAX_APPLIANCES = 100;

// Appliance data model (will be used in later parts)
struct Appliance {
    string name;
    double watts;
    double hours;
};



// ---------- Menu + features (stubs for now) ----------
void showMenu() {
    cout << "\n==================== MENU ====================\n";
    cout << "1. Register appliance\n";
    cout << "2. View appliances\n";
    cout << "3. Exit\n";
    cout << "==============================================\n";
}

void registerAppliance(Appliance appliances[], int& count) {
    
    cout << "Register appliance feature coming soon...\n";
}

void viewAppliances(const Appliance appliances[], int count) {

    cout << "View appliances feature coming soon...\n";
}

// ---------- Program entry ----------
int main() {
    Appliance appliances[MAX_APPLIANCES];
    int count = 0;

    cout << "Electrical Load Monitoring System (Part 1)\n";

    while (true) {
        showMenu();

        // TODO (Part 2): Use readInt() after implementing it
        int option;
        cout << "Choose an option (1-3): ";
        cin >> option;

        if (option == 1) {
            registerAppliance(appliances, count);
        } else if (option == 2) {
            viewAppliances(appliances, count);
        } else if (option == 3) {
            cout << "Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice. Please choose between 1 and 3.\n";
        }
    }

    return 0;
}
