#ifndef MODEL_HPP
#define MODEL_HPP

#include <stdint.h>
#include <C:\Users\Ahmad\WorkSpace\PosheshHayeNanoSakhtar\LCD_BOARD_Firmware\Panel\Panel_V.14_LTDC_NEW_4.3_(V13-Modified)\Inc\defines.h>  // for final code change to #include <defines.h>
class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
    
    bool checkBtnPressed(uint8_t button);
    void setBtnPressed(uint8_t button);
    void clearBtnPressed(uint8_t button);
    void setEnteredValue(uint8_t mode , uint16_t value);
    uint16_t getEnteredValue(uint8_t mode);
    void setTimeMode(uint8_t mode);
    bool getTimeMode(uint8_t mode);
    
protected:
    ModelListener* modelListener;
    
    bool EnterBtnPressed;
    bool EscBtnPressed;
    bool ClearBtnPressed;
    bool CalcBtnPressed;
    bool MinusBtnPressed;
    bool PlusBtnPressed;
    bool DeleteBtnPressed;
    bool CalibrationExitPressed;
    bool StartBtnPressed;
    bool StopBtnPressed = 1;
    bool ParameterBtn1Pressed;
    bool ParameterBtn2Pressed;
    bool ParameterBtn3Pressed;
    bool ParameterBtn4Pressed;
    bool ParameterBtn5Pressed;
    bool ParameterBtn6Pressed;
    bool ParameterBtn7Pressed;
    bool ParameterBtn8Pressed;
    bool ParameterBtn9Pressed;
    bool ParameterBtn10Pressed;
    bool TimeMode = 0;
    bool InfinitMode = 1;
    
    uint16_t SetPointValue;
    uint16_t ArcLevelValue;
    uint16_t CcLevelValue;
    uint16_t CvLevelValue;
    uint16_t QuanchtimeValue;
    uint16_t TimeSetValue;
    uint16_t ElapsedTimevalue;
    uint16_t VoltageGraphValue;
    uint16_t CurrentGraphValue;
    uint16_t PowerGraphValue;
    
    uint16_t Parameter1Value;
    uint16_t Parameter2Value;
    uint16_t Parameter3Value;
    uint16_t Parameter4Value;
    uint16_t Parameter5Value;
    uint16_t Parameter6Value;
    uint16_t Parameter7Value;
    uint16_t Parameter8Value;
    uint16_t Parameter9Value;
    uint16_t Parameter10Value;
};

#endif // MODEL_HPP
