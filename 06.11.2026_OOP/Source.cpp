#include<iostream>
#include<string>
using namespace std;

class Vehicle {
protected:
    string model;
    string color;
    int wheelNumber;
    int releaseYear;
    double price;
    double speed;
public:
    Vehicle(){
        model = "";
        color = "";
        wheelNumber = 0;
        releaseYear = 0;
        price = 0;
        speed = 0;
    }
    Vehicle(string _model, string _color, int _wheelNumber, int _releaseYear, double _price, double _speed){
        model = _model;
        color = _color;
        wheelNumber = _wheelNumber;
        releaseYear = _releaseYear;
        price = _price;
        speed = _speed;
    }
    void init(string _model, string _color, int _wheelNumber, int _releaseYear, double _price, double _speed) {
        model = _model;
        color = _color;
        wheelNumber = _wheelNumber;
        releaseYear = _releaseYear;
        price = _price;
        speed = _speed;
    }
    virtual void print() const {
        cout << "Model: " << model << "\nColor: " << color << "\nNumber of wheels: " << wheelNumber
            << "\nRelease year: " << releaseYear << "\nPrice: " << price << "\nSpeed: " << speed << endl;
    }
    virtual void showSpeed() const = 0;
    virtual void showFuelUsage() const = 0;
    virtual void showWheels() const = 0;
    virtual void showPassengers() const = 0;
};

class Scooter :public Vehicle {
    string engine;
public:
    Scooter():Vehicle() {
        wheelNumber = 2;
        engine = "";
    }
    Scooter(string _model, string _color, string _engine, int _releaseYear, double _price, double _speed, int _wheelNumber = 2) :Vehicle(_model, _color, _wheelNumber, _releaseYear, _price, _speed) {
        wheelNumber = 2;
        engine = _engine;
    }
    void init(string _model, string _color, string _engine, int _releaseYear, double _price, double _speed) {
        wheelNumber = 2;
        engine = _engine;

        model = _model;
        color = _color;
        releaseYear = _releaseYear;
        price = _price;
        speed = _speed;
    }
    void print() const {
        Vehicle::print();
        cout << "Engine: " << engine << endl;
    }
    virtual void showSpeed() const {
		cout << "Scooter speed: " << speed << " km/h" << endl;
    }
    virtual void showFuelUsage() const {
		cout << "Scooter fuel usage: 2.5 L/100km" << endl;
    }
    virtual void showWheels() const {
		cout << "Scooter has " << wheelNumber << " wheels" << endl;
    }
    virtual void showPassengers() const {
		cout << "Scooter can carry 1 passenger" << endl;
    }
};

class Bike :public Vehicle {
    bool isElectric;
    bool hasFlashlight;
public:
    Bike() :Vehicle() {
        wheelNumber = 2;
        isElectric = 0;
        hasFlashlight = 0;
    }
    Bike(string _model, string _color, int _releaseYear, double _price, double _speed, bool _isElectric, bool _hasFlashlight, int _wheelNumber = 2) :Vehicle(_model, _color, _wheelNumber, _releaseYear, _price, _speed) {
        wheelNumber = 2;
        isElectric = _isElectric;
        hasFlashlight = _hasFlashlight;
    }
    void init(string _model, string _color, int _releaseYear, double _price, double _speed, bool _isElectric, bool _hasFlashlight) {
        wheelNumber = 2;
        isElectric = _isElectric;
        hasFlashlight = _hasFlashlight;

        model = _model;
        color = _color;
        releaseYear = _releaseYear;
        price = _price;
        speed = _speed;
    }
    void print() const {
        Vehicle::print();
        cout << "Is electric: " << isElectric << "\nHas flashlight: " << hasFlashlight << endl;
    }
    virtual void showSpeed() const {
		cout << "Bike speed: " << speed << " km/h" << endl;
    }
    virtual void showFuelUsage() const {
		cout << "Bike fuel usage: 0 L/100km (no fuel needed)" << endl;
    }
    virtual void showWheels() const {
		cout << "Bike has " << wheelNumber << " wheels" << endl;
    }
    virtual void showPassengers() const {
		cout << "Bike can carry 1 passenger" << endl;
    }
};

class Car :public Vehicle {
    string engine;
    bool isElectric;
public:
    Car() :Vehicle() {
        wheelNumber = 4;
        engine = "";
        isElectric = 0;
    }
    Car(string _model, string _color, string _engine, int _releaseYear, double _price, double _speed, bool _isElectric, int _wheelNumber = 4) :Vehicle(_model, _color, _wheelNumber, _releaseYear, _price, _speed) {
        wheelNumber = 4;
        engine = _engine;
        isElectric = _isElectric;
    }
    void init(string _model, string _color, string _engine, int _releaseYear, double _price, double _speed, bool _isElectric) {
        wheelNumber = 4;
        engine = _engine;
        isElectric = _isElectric;

        model = _model;
        color = _color;
        releaseYear = _releaseYear;
        price = _price;
        speed = _speed;
    }
    void print() const {
        Vehicle::print();
        cout << "Engine: " << engine << "\nIs electric: " << isElectric << endl;
    }
    virtual void showSpeed() const {
		cout << "Car speed: " << speed << " km/h" << endl;
    }
    virtual void showFuelUsage() const {
		cout << "Car fuel usage: 8 L/100km" << endl;
    }
    virtual void showWheels() const {
		cout << "Car has " << wheelNumber << " wheels" << endl;
    }
    virtual void showPassengers() const {
		cout << "Car can carry 5 passengers" << endl;
    }
};

class Bus :public Vehicle {
    string engine;
    int seats;
public:
    Bus() :Vehicle() {
        engine = "";
        seats = 0;
    }
    Bus(string _model, string _color, string _engine, int _wheelNumber, int _releaseYear, int _seats, double _price, double _speed) :Vehicle(_model, _color, _wheelNumber, _releaseYear, _price, _speed) {
        engine = _engine;
        seats = _seats;
    }
    void init(string _model, string _color, string _engine, int _wheelNumber, int _releaseYear, int _seats, double _price, double _speed) {
        engine = _engine;
        seats = _seats;

        wheelNumber = _wheelNumber;
        model = _model;
        color = _color;
        releaseYear = _releaseYear;
        price = _price;
        speed = _speed;
    }
    void print() const {
        Vehicle::print();
        cout << "Engine: " << engine << "\nNumber of seats: " << seats << endl;
    }
    virtual void showSpeed() const {
		cout << "Bus speed: " << speed << " km/h" << endl;
    }
    virtual void showFuelUsage() const {
		cout << "Bus fuel usage: 30 L/100km" << endl;
    }
    virtual void showWheels() const {
		cout << "Bus has " << wheelNumber << " wheels" << endl;
    }
    virtual void showPassengers() const {
		cout << "Bus can carry " << seats << " passengers" << endl;
    }
};

class Truck :public Vehicle {
    string engine;
    double maxWeight;
public:
    Truck() :Vehicle() {
        engine = "";
        maxWeight = 0;
    }
    Truck(string _model, string _color, string _engine, int _wheelNumber, int _releaseYear, double _price, double _speed, double _maxWeight) :Vehicle(_model, _color, _wheelNumber, _releaseYear, _price, _speed) {
        engine = _engine;
        maxWeight = _maxWeight;
    }
    void init(string _model, string _color, string _engine, int _wheelNumber, int _releaseYear, double _price, double _speed, double _maxWeight) {
        engine = _engine;
        maxWeight = _maxWeight;

        wheelNumber = _wheelNumber;
        model = _model;
        color = _color;
        releaseYear = _releaseYear;
        price = _price;
        speed = _speed;
    }
    void print() const {
        Vehicle::print();
        cout << "Engine: " << engine << "\nMax weight: " << maxWeight << endl;
    }
    virtual void showSpeed() const {
		cout << "Truck speed: " << speed << " km/h" << endl;
    }
    virtual void showFuelUsage() const {
		cout << "Truck fuel usage: 25 L/100km" << endl;
    }
    virtual void showWheels() const {
		cout << "Truck has " << wheelNumber << " wheels" << endl;
    }
    virtual void showPassengers() const {
		cout << "Truck can carry 2 passengers" << endl;
    }
};

int main()
{
    Vehicle* obj = nullptr;

	cout << "Choose a vehicle type:\n1. Scooter\n2. Bike\n3. Car\n4. Bus\n5. Truck\n";
    int choice;
	cin >> choice;

    switch (choice) {
	case 1:
		obj = new Scooter("Vespa", "Red", "Gasoline", 2020, 3000, 60);
        obj->print();
        obj->showSpeed();
        obj->showFuelUsage();
        obj->showWheels();
        obj->showPassengers();
		break;
	case 2:
		obj = new Bike("Giant", "Blue", 2021, 500, 25, true, true);
        obj->print();
        obj->showSpeed();
        obj->showFuelUsage();
        obj->showWheels();
        obj->showPassengers();
        break;
    case 3:
		obj = new Car("Tesla Model 3", "White", "Electric", 2022, 40000, 150, true);
        obj->print();
        obj->showSpeed();
        obj->showFuelUsage();
        obj->showWheels();
        obj->showPassengers();
        break;
    case 4:
		obj = new Bus("Mercedes-Benz", "Yellow", "Diesel", 6, 2019, 50, 80000, 100);
        obj->print();
        obj->showSpeed();
        obj->showFuelUsage();
        obj->showWheels();
        obj->showPassengers();
        break;
    case 5:
		obj = new Truck("Ford F-150", "Black", "Gasoline", 4, 2021, 30000, 120, 1000);
        obj->print();
        obj->showSpeed();
        obj->showFuelUsage();
        obj->showWheels();
        obj->showPassengers();
        break;
    }
    
    return 0;
}