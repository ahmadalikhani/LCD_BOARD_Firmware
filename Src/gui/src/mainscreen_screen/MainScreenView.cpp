#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <gui/model/Model.hpp>

extern Model model;
uint8_t input_mode;

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


void MainScreenView::handleTickEvent()
{
  bool btnMode=0;
  
  keypad1.handleTickEvent();
  
  btnMode = model.checkBtnPressed(ESC_BUTTON);
    if(btnMode == 1)
    {
       keypad1.setVisible(false);
       keypad1.invalidate();
    }
  btnMode = model.checkBtnPressed(ENTER_BUTTON);
    if(btnMode == 1)
    {
       keypad1.setVisible(false);
       keypad1.invalidate();
    }  
    
    Unicode::snprintf(SetpointTextBuffer, SETPOINTTEXT_SIZE, "%04d", model.getEnteredValue(SET_POINT) );
    SetpointText.setWildcard(SetpointTextBuffer);
    SetpointText.invalidate();
    
    Unicode::snprintf(ARCTextBuffer, ARCTEXT_SIZE, "%04d", model.getEnteredValue(ARC_LEVEL) );
    ARCText.setWildcard(ARCTextBuffer);
    ARCText.invalidate();
    
    Unicode::snprintf(CCTextBuffer, CCTEXT_SIZE, "%04d", model.getEnteredValue(CC_LEVEL) );
    CCText.setWildcard(CCTextBuffer);
    CCText.invalidate();

    Unicode::snprintf(CVTextBuffer, CVTEXT_SIZE, "%04d", model.getEnteredValue(CV_LEVEL) );
    CVText.setWildcard(CVTextBuffer);
    CVText.invalidate();

    Unicode::snprintf(QuanchTextBuffer, QUANCHTEXT_SIZE, "%04d", model.getEnteredValue(QUANCH_TIME) );
    QuanchText.setWildcard(QuanchTextBuffer);
    QuanchText.invalidate();
}