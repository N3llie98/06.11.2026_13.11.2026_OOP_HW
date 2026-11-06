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
    }
    void init(string _model, string _color, string _engine, int _releaseYear, double _price, double _speed, bool _isElectric) {
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
        cout << "Engine: " << engine << "\nIs electric: " << isElectric << endl;
    }
};

//scooter, bike, car, bus, truck

int main()
{
    
    return 0;
}