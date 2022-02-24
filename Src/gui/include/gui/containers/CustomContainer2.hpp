#ifndef CUSTOMCONTAINER2_HPP
#define CUSTOMCONTAINER2_HPP

#include <gui_generated/containers/CustomContainer2Base.hpp>

class CustomContainer2 : public CustomContainer2Base 
{
public:
    CustomContainer2();
    virtual ~CustomContainer2() {}
 
    virtual void initialize();
    virtual void handleTickEvent();

    virtual void CalibrationExitBtnClicked();
    virtual void Parameter1BtnClicked();
    virtual void Parameter2BtnClicked();
    virtual void Parameter3BtnClicked();
    virtual void Parameter4BtnClicked();
    virtual void Parameter5BtnClicked();
    virtual void Parameter6BtnClicked();
    virtual void Parameter7BtnClicked();
    virtual void Parameter8BtnClicked();
    virtual void Parameter9BtnClicked();
    virtual void Parameter10BtnClicked();
    

    
protected:
};

#endif // CUSTOMCONTAINER2_HPP
