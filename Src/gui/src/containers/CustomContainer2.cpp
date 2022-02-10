#include <gui/containers/CustomContainer2.hpp>
#include <gui/model/Model.hpp>
#include <string> 
#include <iostream>

extern uint8_t input_mode;
extern Model model;
CustomContainer2::CustomContainer2()
{

}

void CustomContainer2::initialize()
{
    CustomContainer2Base::initialize();
}

void CustomContainer2::CalibrationExitBtnClicked()
{
    CustomContainer2Base::CalibrationExitBtnClicked();
    
    model.setBtnPressed(CALIBRATION_EXIT);
    input_mode = NOTHING ;
}