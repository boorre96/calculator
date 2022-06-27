#ifndef BUTTONPRESSEDTRACKER_H
#define BUTTONPRESSEDTRACKER_H
#include <QString>

class ButtonPressedTracker
{
public:
    ButtonPressedTracker();
    void buttonLastPressed(QString buttonPressed);
    void clearButtonPressed();
    bool buttonLastPressedIsEmpty();
    QString getButtonLastPressed();
private:
    QString whichButtonPressed = "";
};

#endif // BUTTONPRESSEDTRACKER_H
