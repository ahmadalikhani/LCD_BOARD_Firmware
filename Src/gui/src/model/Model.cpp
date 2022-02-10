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
  }
    
  
  return value;
}