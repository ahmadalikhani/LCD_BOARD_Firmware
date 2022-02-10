#ifndef MAINSCREENVIEW_HPP
#define MAINSCREENVIEW_HPP

#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>

class MainScreenView : public MainScreenViewBase
{
public:
    MainScreenView();
    virtual ~MainScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void handleTickEvent();
    virtual void PowerModeFunc();
    virtual void VoltageModeFunc();
    virtual void CurrentModeFunc();
    virtual void SetPointBtnClicked();
    virtual void ArcLevelBtnClicked();
    virtual void CcLevelBtnClicked();
    virtual void CvLevelBtnClicked();
    virtual void QuanchTimeBtnClicked();
protected:
};

#endif // MAINSCREENVIEW_HPP
