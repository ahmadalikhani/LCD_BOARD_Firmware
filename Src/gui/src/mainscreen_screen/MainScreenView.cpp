#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <gui/model/Model.hpp>
#include <stdint.h>
extern Model model;
uint8_t input_mode;
uint16_t counter=0;
uint16_t end_time=0;
uint16_t elapsed_time=0;

MainScreenView::MainScreenView()
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
    
    Unicode::snprintf(SetpointTextBuffer, SETPOINTTEXT_SIZE, "%04d", 0000);
    SetpointText.setWildcard(SetpointTextBuffer);
    SetpointText.invalidate();
    
    Unicode::snprintf(ARCTextBuffer, ARCTEXT_SIZE, "%04d", 0000);
    ARCText.setWildcard(ARCTextBuffer);
    ARCText.invalidate();
    
    Unicode::snprintf(CCTextBuffer, CCTEXT_SIZE, "%04d",0000);
    CCText.setWildcard(CCTextBuffer);
    CCText.invalidate();
}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}

void MainScreenView::PowerModeFunc()
{
    MainScreenViewBase::PowerModeFunc();
    /*          change color of slide menu buttons              */
    PowermodeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB (69, 69, 69), touchgfx::Color::getColorFrom24BitRGB (69, 69, 69), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    VoltagemodeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB (139, 139, 139), touchgfx::Color::getColorFrom24BitRGB (89, 89, 89), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    CurrentmodeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB (139, 139, 139), touchgfx::Color::getColorFrom24BitRGB (89, 89, 89), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
}
void MainScreenView::VoltageModeFunc()
{
    MainScreenViewBase::VoltageModeFunc();
    /*          change color of slide menu buttons              */
    PowermodeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB (139, 139, 139), touchgfx::Color::getColorFrom24BitRGB (89, 89, 89), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    VoltagemodeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB (69, 69, 69), touchgfx::Color::getColorFrom24BitRGB (69, 69, 69), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    CurrentmodeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB (139, 139, 139), touchgfx::Color::getColorFrom24BitRGB (90, 89, 89), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
}
void MainScreenView::CurrentModeFunc()
{
    MainScreenViewBase::CurrentModeFunc();
    /*          change color of slide menu buttons              */
    PowermodeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB (139, 139, 139), touchgfx::Color::getColorFrom24BitRGB (89, 89, 89), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    VoltagemodeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB (139, 139, 139), touchgfx::Color::getColorFrom24BitRGB (89, 89, 89), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
    CurrentmodeButton.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB (69, 69, 69), touchgfx::Color::getColorFrom24BitRGB (69, 69, 69), touchgfx::Color::getColorFrom24BitRGB(0, 51, 102), touchgfx::Color::getColorFrom24BitRGB(51, 102, 153));
}

void MainScreenView::SetPointBtnClicked()
{
  MainScreenViewBase::SetPointBtnClicked();
  
  keypad1.setVisible(true);
  keypad1.invalidate();
  
  input_mode = SET_POINT;
}

void MainScreenView::ArcLevelBtnClicked()
{
  MainScreenViewBase::ArcLevelBtnClicked();
  
  keypad1.setVisible(true);
  keypad1.invalidate();
  
  input_mode = ARC_LEVEL;  
}

void MainScreenView::CcLevelBtnClicked()
{
  MainScreenViewBase::CcLevelBtnClicked();
  
  keypad1.setVisible(true);
  keypad1.invalidate();
  
  input_mode = CC_LEVEL;
}

void MainScreenView::CvLevelBtnClicked()
{
  MainScreenViewBase::CvLevelBtnClicked();
  
  keypad1.setVisible(true);
  keypad1.invalidate();
  
  input_mode = CV_LEVEL;
}

void MainScreenView::QuanchTimeBtnClicked()
{
  MainScreenViewBase::QuanchTimeBtnClicked();
  
  keypad1.setVisible(true);
  keypad1.invalidate();
  
  input_mode = QUANCH_TIME;
}

void MainScreenView::TimeSetBtnClicked()
{
  MainScreenViewBase::TimeSetBtnClicked();
  
  keypad1.setVisible(true);
  keypad1.invalidate();
  
  input_mode = TIME_SET;
}

void MainScreenView::CalibrationPageBtnClicked()
{
  MainScreenViewBase::CvLevelBtnClicked();
  
  CalibrationPage.setVisible(true);
  CalibrationPage.invalidate();
  
  input_mode = CV_LEVEL;
}

void MainScreenView::StartBtnClicked()
{
  MainScreenViewBase::StartBtnClicked();
  model.setBtnPressed(START_BUTTON);
  
  StopButtonText.setVisible(true);
  StopButton.setVisible(true);
  StartButtonText.setVisible(false);
  StartButton.setVisible(false);
  StartButton.invalidate();
  StartButtonText.invalidate();
  StopButton.invalidate();
  StopButtonText.invalidate();  
  
  model.clearBtnPressed(STOP_BUTTON);

}

void MainScreenView::StopBtnClicked()
{
  MainScreenViewBase::StartBtnClicked();
  model.setBtnPressed(STOP_BUTTON);
  
  StopButtonText.setVisible(false);
  StopButton.setVisible(false);
  StartButtonText.setVisible(true);
  StartButton.setVisible(true);
  StartButton.invalidate();
  StartButtonText.invalidate();
  StopButton.invalidate();
  StopButtonText.invalidate();  
}

void MainScreenView::TimeModeBtnPressed()
{
  MainScreenViewBase::TimeModeBtnPressed(); 
  
  InfiniteModeBtn.setVisible(true);
  InfiniteModeText.setVisible(true);
  TimeModeBtn.setVisible(false);
  TimeModeText.setVisible(false);
  InfiniteModeBtn.invalidate();
  InfiniteModeText.invalidate();
  TimeModeBtn.invalidate();
  TimeModeText.invalidate();
    
  model.setTimeMode(INFINITE_MODE);
}

void MainScreenView::InfiniteModeBtnPressed()
{
  MainScreenViewBase::InfiniteModeBtnPressed(); 
  
  InfiniteModeBtn.setVisible(false);
  InfiniteModeText.setVisible(false);
  TimeModeBtn.setVisible(true);
  TimeModeText.setVisible(true);
  InfiniteModeBtn.invalidate();
  InfiniteModeText.invalidate();
  TimeModeBtn.invalidate();
  TimeModeText.invalidate();
  
  model.setTimeMode(TIME_MODE);
}

void MainScreenView::handleTickEvent()
{
  bool btnMode=0;

  keypad1.handleTickEvent();
  CalibrationPage.handleTickEvent();
  
  btnMode = model.checkBtnPressed(ESC_BUTTON);
    if(btnMode == 1)
    {
       keypad1.setVisible(false);
       keypad1.invalidate();
    }
    
   btnMode = model.checkBtnPressed(CALIBRATION_EXIT);
    if(btnMode == 1)
    {
       CalibrationPage.setVisible(false);
       CalibrationPage.invalidate();
    }
    
  btnMode = model.checkBtnPressed(ENTER_BUTTON);
    if(btnMode == 1)
    {
       keypad1.setVisible(false);
       keypad1.invalidate();
    } 
    
    if(model.checkBtnPressed(PARAMETER1_BUTTON) || model.checkBtnPressed(PARAMETER2_BUTTON) ||
       model.checkBtnPressed(PARAMETER3_BUTTON) || model.checkBtnPressed(PARAMETER4_BUTTON) ||
       model.checkBtnPressed(PARAMETER5_BUTTON) || model.checkBtnPressed(PARAMETER6_BUTTON) ||
       model.checkBtnPressed(PARAMETER7_BUTTON) || model.checkBtnPressed(PARAMETER8_BUTTON) ||
       model.checkBtnPressed(PARAMETER9_BUTTON) || model.checkBtnPressed(PARAMETER10_BUTTON) )
    {
       keypad1.setVisible(true);
       keypad1.invalidate();
    } 
    
    PowerGraph.setGraphRangeY(0, 200);
    VoltageGraph.setGraphRangeY(0, 200);
    CurrentGraph.setGraphRangeY(0, 200);
    
    if(counter == 30)
    {
        elapsed_time = model.getEnteredValue(ELAPSED_TIME);
        
        if(model.checkBtnPressed(START_BUTTON))
        {
          if(model.getEnteredValue(TIME_SET) > 0 && model.getTimeMode(TIME_MODE)) // in next step change dependencies to time mode Btn
            end_time = model.getEnteredValue(TIME_SET);
        }
        
        if((model.getTimeMode(TIME_MODE) && end_time - elapsed_time > 0 && !model.checkBtnPressed(STOP_BUTTON) ) ||
           ( model.getTimeMode(INFINITE_MODE) && !model.checkBtnPressed(STOP_BUTTON)))
        {
              model.setEnteredValue(ELAPSED_TIME , elapsed_time +1);
        }
        else{
          model.setEnteredValue(ELAPSED_TIME , 0);
          model.setBtnPressed(STOP_BUTTON);
          end_time = 0;
          
          StopButtonText.setVisible(false);
          StopButton.setVisible(false);
          StartButtonText.setVisible(true);
          StartButton.setVisible(true);
          StartButton.invalidate();
          StartButtonText.invalidate();
          StopButton.invalidate();
          StopButtonText.invalidate();
        }
        
    Unicode::snprintf(VoltageTextBuffer, VOLTAGETEXT_SIZE, "%d", model.getEnteredValue(VOLTAGEGRAPH) );
    VoltageText.setWildcard(VoltageTextBuffer);
    VoltageText.invalidate();
    
    Unicode::snprintf(CurrentTextBuffer, CURRENTTEXT_SIZE, "%d", model.getEnteredValue(CURRENTGRAPH) );
    CurrentText.setWildcard(CurrentTextBuffer);
    CurrentText.invalidate();
    
    Unicode::snprintf(PowerTextBuffer, POWERTEXT_SIZE, "%d", model.getEnteredValue(POWERGRAPH) );
    PowerText.setWildcard(PowerTextBuffer);
    PowerText.invalidate();
    
    VoltageGraph.addDataPoint(model.getEnteredValue(VOLTAGEGRAPH));
    VoltageGraph.invalidate();
        
    CurrentGraph.addDataPoint(model.getEnteredValue(CURRENTGRAPH));
    CurrentGraph.invalidate();
    
    PowerGraph.addDataPoint(model.getEnteredValue(POWERGRAPH));
    PowerGraph.invalidate();
    
    
    model.setEnteredValue(VOLTAGEGRAPH ,(model.getEnteredValue(VOLTAGEGRAPH) + 2)); // graph test (delete in final)
    model.setEnteredValue(CURRENTGRAPH ,(model.getEnteredValue(CURRENTGRAPH) + 4)); // graph test (delete in final)
    model.setEnteredValue(POWERGRAPH ,(model.getEnteredValue(POWERGRAPH) + 6)); // graph test (delete in final)
    if(model.getEnteredValue(POWERGRAPH) > 100)
      model.setEnteredValue(POWERGRAPH ,0); // graph test (delete in final)
    if(model.getEnteredValue(VOLTAGEGRAPH) > 100)
      model.setEnteredValue(VOLTAGEGRAPH ,0); // graph test (delete in final)    
    if(model.getEnteredValue(CURRENTGRAPH) > 100)
      model.setEnteredValue(CURRENTGRAPH ,0); // graph test (delete in final)
    
    counter=0;
    }
    
    Unicode::snprintf(SetpointTextBuffer, SETPOINTTEXT_SIZE, "%d", model.getEnteredValue(SET_POINT) );
    SetpointText.setWildcard(SetpointTextBuffer);
    SetpointText.invalidate();
    
    Unicode::snprintf(ARCTextBuffer, ARCTEXT_SIZE, "%d", model.getEnteredValue(ARC_LEVEL) );
    ARCText.setWildcard(ARCTextBuffer);
    ARCText.invalidate();
    
    Unicode::snprintf(CCTextBuffer, CCTEXT_SIZE, "%d", model.getEnteredValue(CC_LEVEL) );
    CCText.setWildcard(CCTextBuffer);
    CCText.invalidate();

    Unicode::snprintf(CVTextBuffer, CVTEXT_SIZE, "%d", model.getEnteredValue(CV_LEVEL) );
    CVText.setWildcard(CVTextBuffer);
    CVText.invalidate();

    Unicode::snprintf(QuanchTextBuffer, QUANCHTEXT_SIZE, "%d", model.getEnteredValue(QUANCH_TIME) );
    QuanchText.setWildcard(QuanchTextBuffer);
    QuanchText.invalidate();
    
    Unicode::snprintf(TimeSetTextBuffer, TIMESETTEXT_SIZE, "%d", model.getEnteredValue(TIME_SET) );
    TimeSetText.setWildcard(TimeSetTextBuffer);
    TimeSetText.invalidate();
    
    Unicode::snprintf(ElapsedTimeTextBuffer, ELAPSEDTIMETEXT_SIZE, "%d", model.getEnteredValue(ELAPSED_TIME) );
    ElapsedTimeText.setWildcard(ElapsedTimeTextBuffer);
    ElapsedTimeText.invalidate();
    
    counter++;
    
}