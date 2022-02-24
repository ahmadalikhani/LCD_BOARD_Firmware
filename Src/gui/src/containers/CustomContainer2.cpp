#include <gui/containers/CustomContainer2.hpp>
#include <gui/containers/CustomContainer1.hpp>
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
    CustomContainer1();
}

void CustomContainer2::CalibrationExitBtnClicked()
{
    CustomContainer2Base::CalibrationExitBtnClicked();
    
    model.setBtnPressed(CALIBRATION_EXIT);
    input_mode = NOTHING ;
}

void CustomContainer2::Parameter1BtnClicked()
{
    CustomContainer2Base::Parameter1BtnClicked();
    
    model.setBtnPressed(PARAMETER1_BUTTON);
    input_mode = PARAMETER1 ;
    
}  

void CustomContainer2::Parameter2BtnClicked()
{
    CustomContainer2Base::Parameter2BtnClicked();
    
    model.setBtnPressed(PARAMETER2_BUTTON);
    input_mode = PARAMETER2 ;
 
}  

void CustomContainer2::Parameter3BtnClicked()
{
    CustomContainer2Base::Parameter3BtnClicked();
    
    model.setBtnPressed(PARAMETER3_BUTTON);
    input_mode = PARAMETER3 ;
 
}  

void CustomContainer2::Parameter4BtnClicked()
{
    CustomContainer2Base::Parameter4BtnClicked();
    
    model.setBtnPressed(PARAMETER4_BUTTON);
    input_mode = PARAMETER4 ;
    
}  

void CustomContainer2::Parameter5BtnClicked()
{
    CustomContainer2Base::Parameter1BtnClicked();
    
    model.setBtnPressed(PARAMETER5_BUTTON);
    input_mode = PARAMETER5 ;

}  

void CustomContainer2::Parameter6BtnClicked()
{
    CustomContainer2Base::Parameter6BtnClicked();
    
    model.setBtnPressed(PARAMETER6_BUTTON);
    input_mode = PARAMETER6 ;
  
}  

void CustomContainer2::Parameter7BtnClicked()
{
    CustomContainer2Base::Parameter7BtnClicked();
    
    model.setBtnPressed(PARAMETER7_BUTTON);
    input_mode = PARAMETER7 ;
  
}  

void CustomContainer2::Parameter8BtnClicked()
{
    CustomContainer2Base::Parameter8BtnClicked();
    
    model.setBtnPressed(PARAMETER8_BUTTON);
    input_mode = PARAMETER8 ;
   
}  

void CustomContainer2::Parameter9BtnClicked()
{
    CustomContainer2Base::Parameter9BtnClicked();
    
    model.setBtnPressed(PARAMETER9_BUTTON);
    input_mode = PARAMETER9 ;

}  

void CustomContainer2::Parameter10BtnClicked()
{
    CustomContainer2Base::Parameter10BtnClicked();
    
    model.setBtnPressed(PARAMETER10_BUTTON);
    input_mode = PARAMETER10 ;

}  

void CustomContainer2::handleTickEvent()
{
    CustomContainer2Base::handleTickEvent();
    
    Unicode::snprintf(ParameterText1Buffer, PARAMETERTEXT1_SIZE, "%d", model.getEnteredValue(PARAMETER1));
    ParameterText1.setWildcard(ParameterText1Buffer);
    ParameterText1.invalidate();
    
    Unicode::snprintf(ParameterText2Buffer, PARAMETERTEXT2_SIZE, "%d", model.getEnteredValue(PARAMETER2));
    ParameterText2.setWildcard(ParameterText2Buffer);
    ParameterText2.invalidate();
    
    Unicode::snprintf(ParameterText3Buffer, PARAMETERTEXT3_SIZE, "%d", model.getEnteredValue(PARAMETER3));
    ParameterText3.setWildcard(ParameterText3Buffer);
    ParameterText3.invalidate();
    
    Unicode::snprintf(ParameterText4Buffer, PARAMETERTEXT4_SIZE, "%d", model.getEnteredValue(PARAMETER4));
    ParameterText4.setWildcard(ParameterText4Buffer);
    ParameterText4.invalidate();
    
    Unicode::snprintf(ParameterText5Buffer, PARAMETERTEXT5_SIZE, "%d", model.getEnteredValue(PARAMETER5));
    ParameterText5.setWildcard(ParameterText5Buffer);
    ParameterText5.invalidate();
    
    Unicode::snprintf(ParameterText6Buffer, PARAMETERTEXT6_SIZE, "%d", model.getEnteredValue(PARAMETER6));
    ParameterText6.setWildcard(ParameterText6Buffer);
    ParameterText6.invalidate();
    
    Unicode::snprintf(ParameterText7Buffer, PARAMETERTEXT7_SIZE, "%d", model.getEnteredValue(PARAMETER7));
    ParameterText7.setWildcard(ParameterText7Buffer);
    ParameterText7.invalidate();
    
    Unicode::snprintf(ParameterText8Buffer, PARAMETERTEXT8_SIZE, "%d", model.getEnteredValue(PARAMETER8));
    ParameterText8.setWildcard(ParameterText8Buffer);
    ParameterText8.invalidate();
    
    Unicode::snprintf(ParameterText9Buffer, PARAMETERTEXT9_SIZE, "%d", model.getEnteredValue(PARAMETER9));
    ParameterText9.setWildcard(ParameterText9Buffer);
    ParameterText9.invalidate();
    
    Unicode::snprintf(ParameterText10Buffer, PARAMETERTEXT10_SIZE, "%d", model.getEnteredValue(PARAMETER10));
    ParameterText10.setWildcard(ParameterText10Buffer);
    ParameterText10.invalidate();

}