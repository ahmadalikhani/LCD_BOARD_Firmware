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
    void setEnteredValue(uint8_t mode , uint16_t value);
    uint16_t getEnteredValue(uint8_t mode);
    
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
};

#endif // MODEL_HPP
