#include <iostream>
using namespace std;

class vechile
{
public:
    string name;
    string model;
    vechile(string _name, string _model)
    {
        cout << "I am inside vechile class " << endl;
        this->model = _model;
        this->name = _name;
    }

public:
    void start_engine()
    {
        cout << "engine is started  " << name << endl;
    }

    void stop_enfine()
    {
        cout << "engine is stopped " << name << endl;
    }
};
class Car : public vechile
{
public:
    int tyres;
    string model;
    string transmissionType;
    Car(string _name, string _model, int _tyres, string _transmissionType) : vechile(_name, _model)
    {
        this->tyres = _tyres;
        this->transmissionType = _transmissionType;
    }
    void start_ac()
    {
        cout << "AC is started" << name << endl;
    }
};

int main()
{
    Car c("maruti alto", "delta", 4, "manual");
    c.start_engine();
    c.start_ac();
    c.stop_enfine();

    return 0;
}