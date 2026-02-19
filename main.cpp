#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

const int MAX_APPLIANCES = 100;

struct Appliance {
    string name;
    double watts;
    double hours;
};

// Input helpers (implemented in Part 2)
void clearBadInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int readInt(const string& prompt) {
    int x;
    while (true) {
        cout << prompt;
        if (cin >> x) {
            clearBadInput();
            return x;
        }
        cout << "Invalid number. Try again.\n";
        clearBadInput();
    }
}

double readDouble(const string& prompt) {
    double x;
    while (true) {
        cout << prompt;
        if (cin >> x) {
            clearBadInput();
            return x;
        }
        cout << "Invalid number. Try again.\n";
        clearBadInput();
    }
}

string readNonEmptyLine(const string& prompt) {
    while (true) {
        cout << prompt;
        string s;
        getline(cin, s);

        bool ok = false;
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] != ' ' && s[i] != '\t') {
                ok = true;
                break;
            }
        }

        if (ok) return s;
        cout << "Name must not be empty. Try again.\n";
    }
}

double readPositiveDouble(const string& prompt) {
    while (true) {
        double v = readDouble(prompt);
        if (v > 0) return v;
        cout << "Value must be greater than 0.\n";
    }
}

double readHours(const string& prompt) {
    while (true) {
        double h = readDouble(prompt);
        if (h >= 0 && h <= 24) return h;
        cout << "Hours must be between 0 and 24.\n";
    }
}

// Menu
void showMenu() {
    cout << "\n==================== MENU ====================\n";
    cout << "1. Register appliance\n";
    cout << "2. View appliances\n";
    cout << "3. Exit\n";
    cout << "==============================================\n";
}

// Still stubs (next part will implement)
void registerAppliance(Appliance appliances[], int& count) {
    cout << "Register appliance coming in Part 3...\n";
}

void viewAppliances(const Appliance appliances[], int count) {
    cout << "View appliances coming in Part 3...\n";
}

int main() {
    Appliance appliances[MAX_APPLIANCES];
    int count = 0;

    cout << "Electrical Load Monitoring System (Part 2)\n";

    while (true) {
        showMenu();
        int option = readInt("Choose an option (1-3): ");

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
