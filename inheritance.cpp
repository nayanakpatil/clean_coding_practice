// Online C++ compiler to run C++ program online
#include <iostream>
//abstract class
//implemented [reusable code] as well as non-implemented behaviors[template method]

class Vehicle{
    public:
    void start(){
        std::cout<<"Key Start"<<std::endl;
    }
 protected:
  Vehicle(){}
};

class Bus:public Vehicle{};
class Car:public Vehicle{};

int main() 
{
    Bus bObj;
    bObj.start();
    Car cObj;
    cObj.start();
    

    return 0;
}
