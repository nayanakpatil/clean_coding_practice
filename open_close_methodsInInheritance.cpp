// Online C++ compiler to run C++ program online
#include <iostream>
//abstract class
//implemented [reusable code] as well as non-implemented behaviors[template method]

class Vehicle{
    public:
    //closed
    //void start(){
        //open method for specialisation
    virtual void start(){
        std::cout<<"Key Start"<<std::endl;
    }
    //template method : allowed to implement our own behavior in child classes.
    virtual void drive()=0;
 protected:
  Vehicle(){}
};

class Bus:public Vehicle{};
//car will have different modes of starting , so we are using override keyword for open method
class Car:public Vehicle{
public:
void start() override{
     std::cout<<"Push button Start"<<std::endl;
}
}
int main() 
{
    Bus bObj;
    bObj.start();
    Car cObj;
    cObj.start();
    

    return 0;
}
