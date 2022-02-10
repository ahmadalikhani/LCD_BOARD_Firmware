#ifndef CUSTOMCONTAINER1_HPP
#define CUSTOMCONTAINER1_HPP
#include <gui_generated/containers/CustomContainer1Base.hpp>

class CustomContainer1 : public CustomContainer1Base
{
public:
    CustomContainer1();
    virtual ~CustomContainer1() {}

    virtual void initialize();
    virtual void NumberOne();
    virtual void NumberTwo();
    virtual void NumberThree();
    virtual void NumberFour();
    virtual void NumberFive();
    virtual void NumberSix();
    virtual void NumberSeven();
    virtual void NumberEight();
    virtual void NumberNine();
    virtual void NumberZero();
    virtual void EnterFunc();
    virtual void EscFunc();
    virtual void ClearFunc();
    virtual void DeleteFunc();
    virtual void CalcFunc();
    virtual void MinusFunc();
    virtual void PlusFunc();
    
    void handleTickEvent();
protected:
};

#endif // CUSTOMCONTAINER1_HPP
