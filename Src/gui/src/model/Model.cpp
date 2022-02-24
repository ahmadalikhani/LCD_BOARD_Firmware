#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}

bool Model::checkBtnPressed(uint8_t button)
{
  bool btnMode=0;
  switch(button)
  {
  case ENTER_BUTTON :
    {
      btnMode = EnterBtnPressed;
      EnterBtnPressed = 0;      
      break;
    }
    
  case DELETE_BUTTON :
    {
      btnMode = DeleteBtnPressed;
      DeleteBtnPressed = 0;      
      break;
    }    
    
  case CALC_BUTTON :
    {
      btnMode = CalcBtnPressed;
      CalcBtnPressed = 0;      
      break;
    }    

  case CLEAR_BUTTON :
    {
      btnMode = ClearBtnPressed;
      ClearBtnPressed = 0;
      break;
    }

  case ESC_BUTTON :
    {
      btnMode = EscBtnPressed;
      EscBtnPressed = 0;
      break;
    }

  case MINUS_BUTTON :
    {
      btnMode = MinusBtnPressed;
      MinusBtnPressed = 0;      
      break;
    }

  case PLUS_BUTTON :
    {
      btnMode = PlusBtnPressed;
      PlusBtnPressed = 0;      
      break;
    }    
  case CALIBRATION_EXIT :
    {
      btnMode = CalibrationExitPressed;
      CalibrationExitPressed = 0;      
      break;
    }   
    
  case START_BUTTON :
    {
      btnMode = StartBtnPressed;
        StartBtnPressed = 0;      
      break;
    }
    
    case STOP_BUTTON :
    {
      btnMode = StopBtnPressed;      
      break;
    }  
    
    case PARAMETER1_BUTTON :
    {
      btnMode = ParameterBtn1Pressed;
      ParameterBtn1Pressed = 0;
      break;
    } 
  case PARAMETER2_BUTTON :
    {
      btnMode = ParameterBtn2Pressed;
      ParameterBtn2Pressed = 0;
      break;
    } 
  case PARAMETER3_BUTTON :
    {
      btnMode = ParameterBtn3Pressed;      
      ParameterBtn3Pressed = 0;
      break;
    } 
  case PARAMETER4_BUTTON :
    {
      btnMode = ParameterBtn4Pressed;
      ParameterBtn4Pressed = 0;      
      break;
    } 
  case PARAMETER5_BUTTON :
    {
      btnMode = ParameterBtn5Pressed; 
      ParameterBtn5Pressed = 0;
      break;
    } 
  case PARAMETER6_BUTTON :
    {
      btnMode = ParameterBtn6Pressed; 
      ParameterBtn6Pressed = 0;
      break;
    } 
  case PARAMETER7_BUTTON :
    {
      btnMode = ParameterBtn7Pressed; 
      ParameterBtn7Pressed = 0;
      break;
    } 
  case PARAMETER8_BUTTON :
    {
      btnMode = ParameterBtn8Pressed;   
      ParameterBtn8Pressed = 0;
      break;
    } 
  case PARAMETER9_BUTTON :
    {
      btnMode = ParameterBtn9Pressed;  
      ParameterBtn9Pressed = 0;
      break;
    } 
  case PARAMETER10_BUTTON :
    {
      btnMode = ParameterBtn10Pressed;      
      ParameterBtn10Pressed = 0;     
      break;
    } 
  }
  
  return btnMode;
}

void Model::setBtnPressed(uint8_t button)
{
  switch(button)
  {
  case ENTER_BUTTON :
    {
      EnterBtnPressed = 1;
      break;
    }
    
  case DELETE_BUTTON :
    {
      DeleteBtnPressed = 1;
      break;
    }    
    
  case CALC_BUTTON :
    {
      CalcBtnPressed = 1;
      break;
    }    

  case CLEAR_BUTTON :
    {
      ClearBtnPressed = 1;
      break;
    }

  case ESC_BUTTON :
    {
      EscBtnPressed = 1;
      break;
    }

  case MINUS_BUTTON :
    {
      MinusBtnPressed = 1;
      break;
    }

  case PLUS_BUTTON :
    {
      PlusBtnPressed = 1;
      break;
    }    
  case CALIBRATION_EXIT :
    {
      CalibrationExitPressed = 1;      
      break;
    }
    
  case START_BUTTON :
    {
      StartBtnPressed = 1;      
      break;
    }
    
  case STOP_BUTTON :
    {
      StopBtnPressed = 1;      
      break;
    }  
    
  case PARAMETER1_BUTTON :
    {
      ParameterBtn1Pressed = 1;      
      break;
    } 
  case PARAMETER2_BUTTON :
    {
      ParameterBtn2Pressed = 1;      
      break;
    } 
  case PARAMETER3_BUTTON :
    {
      ParameterBtn3Pressed = 1;      
      break;
    } 
  case PARAMETER4_BUTTON :
    {
      ParameterBtn4Pressed = 1;      
      break;
    } 
  case PARAMETER5_BUTTON :
    {
      ParameterBtn5Pressed = 1;      
      break;
    } 
  case PARAMETER6_BUTTON :
    {
      ParameterBtn6Pressed = 1;      
      break;
    } 
  case PARAMETER7_BUTTON :
    {
      ParameterBtn7Pressed = 1;      
      break;
    } 
  case PARAMETER8_BUTTON :
    {
      ParameterBtn8Pressed = 1;      
      break;
    } 
  case PARAMETER9_BUTTON :
    {
      ParameterBtn9Pressed = 1;      
      break;
    } 
  case PARAMETER10_BUTTON :
    {
      ParameterBtn10Pressed = 1;      
      break;
    } 
  }
}

void Model::clearBtnPressed(uint8_t button)
{
  switch(button)
  {
  case ENTER_BUTTON :
    {
      EnterBtnPressed = 0;
      break;
    }
    
  case DELETE_BUTTON :
    {
      DeleteBtnPressed = 0;
      break;
    }    
    
  case CALC_BUTTON :
    {
      CalcBtnPressed = 0;
      break;
    }    

  case CLEAR_BUTTON :
    {
      ClearBtnPressed = 0;
      break;
    }

  case ESC_BUTTON :
    {
      EscBtnPressed = 0;
      break;
    }

  case MINUS_BUTTON :
    {
      MinusBtnPressed = 0;
      break;
    }

  case PLUS_BUTTON :
    {
      PlusBtnPressed = 0;
      break;
    }    
  case CALIBRATION_EXIT :
    {
      CalibrationExitPressed = 0;      
      break;
    }
    
  case START_BUTTON :
    {
      StartBtnPressed = 0;      
      break;
    }
    
  case STOP_BUTTON :
    {
      StopBtnPressed = 0;      
      break;
    }  
  }
}

void Model::setEnteredValue(uint8_t mode , uint16_t value)
{
  switch(mode)
  {
  case SET_POINT :
    {
      SetPointValue = value;
      break;
    }
    
  case ARC_LEVEL :
    {
      ArcLevelValue = value;
      break;
    }    
 
  case CC_LEVEL :
    {
      CcLevelValue = value;
      break;
    }    

  case CV_LEVEL :
    {
      CvLevelValue = value;
      break;
    }

  case QUANCH_TIME :
    {
      QuanchtimeValue = value;
      break;
    } 
  case TIME_SET :
    {
      TimeSetValue = value;     
      break;
    } 

  case ELAPSED_TIME :
    {
      ElapsedTimevalue = value;     
      break;
    }  
    
   case VOLTAGEGRAPH :
    {
      VoltageGraphValue = value;     
      break;
    } 
    
   case CURRENTGRAPH :
    {
      CurrentGraphValue = value;     
      break;
    }
    
   case POWERGRAPH :
    {
      PowerGraphValue = value;     
      break;
    }
    
   case PARAMETER1 :
    {
      Parameter1Value = value;     
      break;
    }
  case PARAMETER2 :
    {
      Parameter2Value = value;     
      break;
    }
  case PARAMETER3 :
    {
      Parameter3Value = value;     
      break;
    }
  case PARAMETER4 :
    {
      Parameter4Value = value;     
      break;
    }
  case PARAMETER5 :
    {
      Parameter5Value = value;     
      break;
    }
  case PARAMETER6 :
    {
      Parameter6Value = value;     
      break;
    }
  case PARAMETER7 :
    {
      Parameter7Value = value;     
      break;
    }
  case PARAMETER8 :
    {
      Parameter8Value = value;     
      break;
    }
  case PARAMETER9 :
    {
      Parameter9Value = value;     
      break;
    }
  case PARAMETER10 :
    {
      Parameter10Value = value;     
      break;
    }
  }
}

uint16_t Model::getEnteredValue(uint8_t mode)
{
  uint16_t value = 0;
  switch(mode)
  {
  case SET_POINT :
    {
      value = SetPointValue;    
      break;
    }
    
  case ARC_LEVEL :
    {
      value = ArcLevelValue; 
      break;
    }

  case CC_LEVEL :
    {
      value = CcLevelValue; 
      break;
    }

  case CV_LEVEL :
    {
      value = CvLevelValue;    
      break;
    }

  case QUANCH_TIME :
    {
      value = QuanchtimeValue;     
      break;
    }

  case TIME_SET :
    {
      value = TimeSetValue;     
      break;
    } 

  case ELAPSED_TIME :
    {
      value = ElapsedTimevalue;     
      break;
    }    
    
   case VOLTAGEGRAPH :
    {
      value = VoltageGraphValue;     
      break;
    } 
    
   case CURRENTGRAPH :
    {
      value = CurrentGraphValue;     
      break;
    }
    
   case POWERGRAPH :
    {
      value = PowerGraphValue;     
      break;
    }
    
  case PARAMETER1 :
    {
     value = Parameter1Value ;     
      break;
    }
  case PARAMETER2 :
    {
     value = Parameter2Value ;     
      break;
    }
  case PARAMETER3 :
    {
     value = Parameter3Value ;     
      break;
    }
  case PARAMETER4 :
    {
     value = Parameter4Value ;     
      break;
    }
  case PARAMETER5 :
    {
     value = Parameter5Value ;     
      break;
    }
  case PARAMETER6 :
    {
     value = Parameter6Value ;     
      break;
    }
  case PARAMETER7 :
    {
     value = Parameter7Value ;     
      break;
    }
  case PARAMETER8 :
    {
     value = Parameter8Value ;     
      break;
    }
  case PARAMETER9 :
    {
     value = Parameter9Value ;     
      break;
    }
  case PARAMETER10 :
    {
     value = Parameter10Value;     
      break;
    }
  }
    
  return value;
}

bool Model::getTimeMode(uint8_t mode)
{
  uint16_t value = 0;
  switch(mode)
  {
  case INFINITE_MODE :
    {
      value = InfinitMode;    
      break;
    }
    
  case TIME_MODE :
    {
      value = TimeMode; 
      break;
    }
  }
    
  return value;
}

void Model::setTimeMode(uint8_t mode)
{
  switch(mode)
  {
  case INFINITE_MODE :
    {
     InfinitMode = 1;    
     TimeMode = 0;
      break;
    }
    
  case TIME_MODE :
    {
     InfinitMode = 0;    
     TimeMode = 1; 
      break;
    }
  }
}