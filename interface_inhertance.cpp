// Online C++ compiler to run C++ program online
#include <iostream>
//interface 
class IEmployee{
    public:
    virtual void decent()=0;
    virtual void professional()=0; //object slicing : part of the object is visible, other part is hidden.
};
class IFamilyMember{
    public:
    virtual void casual()=0;
    virtual void funny()=0;
    virtual void caring()=0;
};
class IWithFriends{
    public:
    virtual void reckless()=0;
    virtual void funny()=0;
    virtual void restless()=0;
};
class Person:public IEmployee{
    public:
    virtual void decent(){}
    virtual void professional(){}
    virtual void casual(){}
    virtual void funny(){}
    virtual void caring(){}
    virtual void reckless(){}
    virtual void restless(){}
};
void visitOfficeContext(IEmployee *obj){
    obj->decent();
    obj->professional();
}
void visitFamilyContext(IFamilyMember *obj){
    obj->casual();
    obj->funny();
    obj->caring();
}
void visitFriendsContext(IWithFriends *obj){
    obj->reckless();
    obj->funny();
    obj->restless();
}
int main() 
{
    Person harry;
    visitOfficeContext(&harry);
    return 0;
}
