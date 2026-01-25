#include <iostream>

using namespace std;

class Chef{

    protected:

        string chefName;

    public:

        Chef(string);
        ~Chef();

        string getName();

        int makeSoup(int ainekset);
        int makeSalad(int rehut);
};

class ItalianChef : public Chef{//--------

    public:
        ItalianChef(string name);
        ~ItalianChef();

        bool askSecret(string salasana, int flour, int water);

    private:
        string password = "pizza";

        int makePizza(int flour, int water);

};

ItalianChef::ItalianChef(string name) : Chef(name){

    cout << chefName << " constructor" << endl;
}

ItalianChef::~ItalianChef(){

    cout << chefName << " destructor" << endl;
}


int ItalianChef::makePizza(int flour, int water){

    return min(flour/5, water/5);
}

bool ItalianChef::askSecret(string salasana, int flour, int water){

    if(salasana == password){
        int pizzas = makePizza(flour, water);
        cout << pizzas << "pizzas made" << endl;
        return true;
    }

    else{
        cout << "wrong!!" << endl;
        return false;
    }
}


Chef::Chef(string name){

    chefName = name;

}

Chef::~Chef(){

    cout << chefName << " destructor" <<endl;
}


string Chef::getName(){

    return chefName;
}


int Chef::makeSoup(int ainekset){
    return ainekset / 3;
}

int Chef::makeSalad(int rehut){
    return rehut / 5;

}

int main()
{
    Chef chef("Gordon");
    cout << "salads: " << chef.makeSalad(20) << endl;
    cout << "soups: " << chef.makeSoup(15) << endl;

    ItalianChef italianChef("Mario");

    italianChef.askSecret("pizza", 10, 20);


    return 0;
}
