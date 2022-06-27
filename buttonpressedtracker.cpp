#include "buttonpressedtracker.h"

ButtonPressedTracker::ButtonPressedTracker()
{

}
void ButtonPressedTracker::buttonLastPressed(QString buttonPressed)
{
    whichButtonPressed = buttonPressed;
}

void ButtonPressedTracker::clearButtonPressed()
{
    whichButtonPressed.clear();
}

bool ButtonPressedTracker::buttonLastPressedIsEmpty()
{
    if(whichButtonPressed == "")
        return true;
    return false;
}

QString ButtonPressedTracker::getButtonLastPressed()
{
    return whichButtonPressed;
}
