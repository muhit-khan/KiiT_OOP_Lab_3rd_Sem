/*1. We want to store the information of different vehicles. Create a class named Vehicle with two data members named mileage and price. Create its two
subclasses*Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).*Bike with data members to store
the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)Make another two subclasses
Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS, each having a data member to store the
make-type. Now, store and print the information of an Audi and a Ford car (i.e.model type, ownership cost, warranty, seating capacity, fuel type, mileage and
price.) Do the same for a Bajaj and a TVS bike.*/
// Muhit Khan(21052943)

#include <iostream>
#include <stdlib.h>
using namespace std;

class Vehicle
{
protected:
    float mileage, price;

public:
    Vehicle(float mlg, float prc)
    {
        mileage = mlg;
        price = prc;
    }
    void show_vehicle()
    {
        cout << "Mileage\t\t: " << mileage << endl
             << "Price\t\t: " << price << endl;
    }
};
class Car : public Vehicle
{
protected:
    float cost, warranty, seat_cap;
    string fuel;

public:
    Car(float cst, float wrnty, float st_cap, string fl_typ, float mlg, float prc) : Vehicle(mlg, prc)
    {
        cost = cst;
        warranty = wrnty;
        seat_cap = st_cap;
        fuel = fl_typ;
    }
    void show_car()
    {
        show_vehicle();
        cout << "Cost\t\t: " << cost << endl
             << "Seating Capacity: " << seat_cap << endl
             << "Fuel Type\t: " << fuel << endl
             << "Warranty\t: " << warranty << endl;
    }
};

class Audi : public Car
{
protected:
    string model_type;

public:
    Audi(string mdl_typ, float cst, float wrnty, float st_cap, string fl_typ, float mlg, float prc) : Car(cst, wrnty, st_cap, fl_typ, mlg, prc)
    {
        model_type = mdl_typ;
    }
    void show_audi()
    {
        show_car();
        cout << "Model Type\t: " << model_type << endl;
    }
};

class Ford : public Car
{
protected:
    string model_type;

public:
    Ford(string mdl_typ, float cst, float wrnty, float st_cap, string fl_typ, float mlg, float prc) : Car(cst, wrnty, st_cap, fl_typ, mlg, prc)
    {
        model_type = mdl_typ;
    }
    void show_ford()
    {
        show_car();
        cout << "Model Type\t: " << model_type << endl;
    }
};

class Bike : public Vehicle
{
protected:
    float num_cylinder, num_gears, tank_size;
    string cooling_type, wheel_type;

public:
    Bike(float nm_cyl, float nm_gr, float tnk_sz, string cool_typ, string whl_typ, float mlg, float prc) : Vehicle(mlg, prc)
    {
        num_cylinder = nm_cyl;
        num_gears = nm_gr;
        tank_size = tnk_sz;
        cooling_type = cool_typ;
        wheel_type = whl_typ;
    }
    void show_bike()
    {
        show_vehicle();
        cout << "No. of Cyl\t: " << num_cylinder << endl
             << "No. of Gears\t: " << num_gears << endl
             << "Tank Size\t: " << tank_size << endl
             << "Cooling Type\t: " << cooling_type << endl
             << "Wheel Type\t: " << wheel_type << endl;
    }
};

class Bajaj : public Bike
{
protected:
    string make_type;

public:
    Bajaj(string make_typ, float nm_cyl, float nm_gr, float tnk_sz, string cool_typ, string whl_typ, float mlg, float prc) : Bike(nm_cyl, nm_gr, tnk_sz, cool_typ, whl_typ, mlg, prc)
    {
        make_type = make_typ;
    }
    void show_bajaj()
    {
        show_bike();
        cout << "Make Type\t: " << make_type << endl;
    }
};

class TVS : public Bike
{
protected:
    string make_type;

public:
    TVS(string make_typ, float nm_cyl, float nm_gr, float tnk_sz, string cool_typ, string whl_typ, float mlg, float prc) : Bike(nm_cyl, nm_gr, tnk_sz, cool_typ, whl_typ, mlg, prc)
    {
        make_type = make_typ;
    }
    void show_tvs()
    {
        show_bike();
        cout << "Make Type\t: " << make_type << endl
             << endl;
    }
};

int main()
{
    TVS CENTRA("100 cc", 100.0, 3.0, 8.0, "No radiator", "Spoke", 50.0, 35000);
    CENTRA.show_tvs();
    Bajaj CT100("100 cc", 150.0, 3.0, 12.0, "No radiator", "Spoke", 65.0, 48000);
    CT100.show_bajaj();
    Audi A8("A8", 300000.0, 5.0, 5.0, "Petrol", 7.0, 130000000.0);
    A8.show_audi();
    Ford Tauras("Tauras", 40000.0, 7.0, 5.0, "Petrol", 9.0, 12000000.0);
    Tauras.show_ford();
    return 0;
}