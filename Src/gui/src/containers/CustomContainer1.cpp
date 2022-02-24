#include <gui/containers/CustomContainer1.hpp>
#include <gui/model/Model.hpp>
#include <string> 
#include <iostream>

Model model;
int temporary_value=0;
extern uint8_t input_mode;

CustomContainer1::CustomContainer1()
{

}

void CustomContainer1::initialize()
{
    CustomContainer1Base::initialize();
}

void CustomContainer1::NumberOne()
{
    CustomContainer1Base::NumberOne();
    temporary_value *= 10 ;
    temporary_value += 1;
}

void CustomContainer1::NumberTwo()
{
    CustomContainer1Base::NumberTwo();
    temporary_value *= 10 ;
    temporary_value += 2;    
}

void CustomContainer1::NumberThree()
{
    CustomContainer1Base::NumberThree();
    temporary_value *= 10 ;
    temporary_value += 3;    
}

void CustomContainer1::NumberFour()
{
    CustomContainer1Base::NumberFour();
    temporary_value *= 10 ;
    temporary_value += 4;
}

void CustomContainer1::NumberFive()
{
    CustomContainer1Base::NumberFive();
    temporary_value *= 10 ;
    temporary_value += 5;
}

void CustomContainer1::NumberSix()
{
    CustomContainer1Base::NumberSix();
    temporary_value *= 10 ;
    temporary_value += 6;
}

void CustomContainer1::NumberSeven()
{
    CustomContainer1Base::NumberSeven();
    temporary_value *= 10 ;
    temporary_value += 7;    
}

void CustomContainer1::NumberEight()
{
    CustomContainer1Base::NumberEight();
    temporary_value *= 10 ;
    temporary_value += 8;
}

void CustomContainer1::NumberNine()
{
    CustomContainer1Base::NumberNine();
    temporary_value *= 10 ;
    temporary_value += 9;
}

void CustomContainer1::NumberZero()
{
    CustomContainer1Base::NumberZero();
    temporary_value *= 10 ;
    temporary_value += 0;
}

void CustomContainer1::EnterFunc()
{
    CustomContainer1Base::EnterFunc();
    
    model.setBtnPressed(ENTER_BUTTON);
    model.setEnteredValue( input_mode , temporary_value);
    input_mode = NOTHING ;
    temporary_value = 0;
}

void CustomContainer1::EscFunc()
{
    CustomContainer1Base::EscFunc();
    
    model.setBtnPressed(ESC_BUTTON);
    input_mode = NOTHING ;
    temporary_value = 0;
}

void CustomContainer1::CalcFunc()
{
    CustomContainer1Base::CalcFunc();
}

void CustomContainer1::ClearFunc()
{
    CustomContainer1Base::ClearFunc();
    
    temporary_value = 0;
}

void CustomContainer1::DeleteFunc()
{
    CustomContainer1Base::DeleteFunc();
    
    temporary_value = 0;
}

void CustomContainer1::MinusFunc()
{
    CustomContainer1Base::MinusFunc();
    
    temporary_value = ((temporary_value-5) < 0) ? 0 : temporary_value-5 ;
}

void CustomContainer1::PlusFunc()
{
    CustomContainer1Base::PlusFunc();
    
    temporary_value = ((temporary_value+5) > 9999) ? 9999 : temporary_value+5 ;
}

void CustomContainer1::handleTickEvent()
{
    CustomContainer1Base::handleTickEvent();
    
    
    Unicode::snprintf(textAreaBuffer, TEXTAREA_SIZE, "%d", temporary_value);
    textArea.setWildcard(textAreaBuffer);
    textArea.invalidate();
}