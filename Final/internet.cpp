#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stdexcept>

// Base class for all cars
class Car {
protected:
    std::string brand;
    std::string model;
    int year;
    double price;

public:
    Car(std::string b, std::string m, int y, double p)
        : brand(b), model(m), year(y), price(p) {
        if (y < 1886 || y > 2024) { // Assuming the first car was invented in 1886
            throw std::invalid_argument("Invalid year for the car.");
        }
        if (p < 0) {
            throw std::invalid_argument("Price cannot be negative.");
        }
    }

    virtual void displayDetails() const {
        std::cout << "Brand: " << brand << "\nModel: " << model
                  << "\nYear: " << year << "\nPrice: $" << price << std::endl;
    }

    virtual ~Car() {}
};

// JapaneseCar subclasses
class Toyota : public Car {
public:
    Toyota(std::string m, int y, double p)
        : Car("Toyota", m, y, p) {}

    void displayDetails() const override {
        std::cout << "Toyota Car Details:\n";
        Car::displayDetails();
    }
};

class Honda : public Car {
public:
    Honda(std::string m, int y, double p)
        : Car("Honda", m, y, p) {}

    void displayDetails() const override {
        std::cout << "Honda Car Details:\n";
        Car::displayDetails();
    }
};

class Nissan : public Car {
public:
    Nissan(std::string m, int y, double p)
        : Car("Nissan", m, y, p) {}

    void displayDetails() const override {
        std::cout << "Nissan Car Details:\n";
        Car::displayDetails();
    }
};

// AmericanCar subclasses
class Ford : public Car {
public:
    Ford(std::string m, int y, double p)
        : Car("Ford", m, y, p) {}

    void displayDetails() const override {
        std::cout << "Ford Car Details:\n";
        Car::displayDetails();
    }
};

class Chevrolet : public Car {
public:
    Chevrolet(std::string m, int y, double p)
        : Car("Chevrolet", m, y, p) {}

    void displayDetails() const override {
        std::cout << "Chevrolet Car Details:\n";
        Car::displayDetails();
    }
};

class Tesla : public Car {
public:
    Tesla(std::string m, int y, double p)
        : Car("Tesla", m, y, p) {}

    void displayDetails() const override {
        std::cout << "Tesla Car Details:\n";
        Car::displayDetails();
    }
};

// Dealership class
class Dealership {
private:
    std::vector<std::shared_ptr<Car>> inventory;

public:
    void addCar(const std::shared_ptr<Car>& car) {
        inventory.push_back(car);
    }

    void displayInventory() const {
        for (const auto& car : inventory) {
            car->displayDetails();
            std::cout << std::endl;
        }
    }
};

int main() {
    Dealership dealership;
    std::string brand, model;
    int year;
    double price;

    while (true) {
        try {
            std::cout << "Enter car brand (Toyota, Honda, Nissan, Ford, Chevrolet, Tesla) or 'exit' to finish: ";
            std::cin >> brand;
            if (brand == "exit") {
                break;
            }

            std::cout << "Enter car model: ";
            std::cin >> model;

            std::cout << "Enter car year (e.g., 2020): ";
            std::cin >> year;
            if (std::cin.fail() || year < 1886 || year > 2024) {
                throw std::invalid_argument("Invalid year input. Please enter a valid year (e.g., 2020).");
            }

            std::cout << "Enter car price (e.g., 30000): ";
            std::cin >> price;
            if (std::cin.fail() || price < 0) {
                throw std::invalid_argument("Invalid price input. Please enter a valid price (e.g., 30000).");
            }

            if (brand == "Toyota") {
                dealership.addCar(std::make_shared<Toyota>(model, year, price));
            } else if (brand == "Honda") {
                dealership.addCar(std::make_shared<Honda>(model, year, price));
            } else if (brand == "Nissan") {
                dealership.addCar(std::make_shared<Nissan>(model, year, price));
            } else if (brand == "Ford") {
                dealership.addCar(std::make_shared<Ford>(model, year, price));
            } else if (brand == "Chevrolet") {
                dealership.addCar(std::make_shared<Chevrolet>(model, year, price));
            } else if (brand == "Tesla") {
                dealership.addCar(std::make_shared<Tesla>(model, year, price));
            } else {
                std::cerr << "Unknown car brand." << std::endl;
            }
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            std::cin.clear(); // Clear the error flag on cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
        }
    }

    dealership.displayInventory();

    return 0;
}
