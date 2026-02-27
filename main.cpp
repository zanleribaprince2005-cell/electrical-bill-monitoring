// PART 5: Load Appliances from File

void loadFromFile() {
    ifstream file("appliances.txt");
    if (!file) return;

    string name;
    double power, hours;
    char comma;

    while (getline(file, name, ',')) {
        file >> power >> comma >> hours;
        file.ignore();
        appliances.push_back(Appliance(name, power, hours));
    }

    file.close();
}