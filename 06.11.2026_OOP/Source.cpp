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
    void print() {
        cout << "Model: " << model << "\nColor: " << color << "\nNumber of wheels: " << wheelNumber
            << "\nRelease year: " << releaseYear << "\nPrice: " << price << "\nSpeed: " << speed << endl;
    }
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
    void print() {
        Vehicle::print();
        cout << "Engine: " << engine << endl;
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
    void print() {
        Vehicle::print();
        cout << "Is electric: " << isElectric << "\nHas flashlight: " << hasFlashlight << endl;
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
    void print() {
        Vehicle::print();
        cout << "Engine: " << engine << "\nIs electric: " << isElectric << endl;
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
    void print() {
        Vehicle::print();
        cout << "Engine: " << engine << "\nNumber of seats: " << seats << endl;
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
    void print() {
        Vehicle::print();
        cout << "Engine: " << engine << "\nMax weight: " << maxWeight << endl;
    }
};

int main()
{
    Vehicle obj1;
    obj1.print();
    cout << endl;
    obj1.init("MODEL", "COLOR", 10, 2026, 99999, 100);
    obj1.print();
    cout << endl << "----------" << endl << endl;

    Scooter s;
    s.print();
    cout << endl;
    s.init("MODEL", "COLOR", "ENGINE", 2026, 99999, 100);
    s.print();
    cout << endl << "----------" << endl << endl;

    Bike b;
    b.print();
    cout << endl;
    b.init("MODEL", "COLOR", 2026, 99999, 100, 1, 1);
    b.print();
    cout << endl << "----------" << endl << endl;

    Car c;
    c.print();
    cout << endl;
    c.init("MODEL", "COLOR", "ENGINE", 2026, 99999, 100, 1);
    c.print();
    cout << endl << "----------" << endl << endl;

    Bus b2;
    b2.print();
    cout << endl;
    b2.init("MODEL", "COLOR", "ENGINE", 6, 2026, 50, 99999, 100);
    b2.print();
    cout << endl << "----------" << endl << endl;

    Truck t;
    t.print();
    cout << endl;
    t.init("MODEL", "COLOR", "ENGINE", 8, 2026, 99999, 100, 5000);
    t.print();
    cout << endl << "----------" << endl << endl;
    return 0;
}