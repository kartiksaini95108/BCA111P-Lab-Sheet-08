#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car {
private:
    string brand;
    double price{};

public:
    void inputDetails() {
        cout << "Enter car brand: ";
        getline(cin >> ws, brand);
        cout << "Enter car price: ";
        cin >> price;
    }

    void displayDetails() const {
        cout << "Brand: " << brand << ", Price: " << price << '\n';
    }
};

int main() {
    int count;
    cout << "How many cars? ";
    cin >> count;

    if (count <= 0) {
        cout << "Number of cars must be positive.\n";
        return 1;
    }

    vector<Car> cars(count);
    for (int i = 0; i < count; ++i) {
        cout << "\nEnter details for car " << i + 1 << ":\n";
        cars[i].inputDetails();
    }

    cout << "\nCar Information\n";
    for (const Car& car : cars) car.displayDetails();

    return 0;
}
