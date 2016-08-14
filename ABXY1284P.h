#ifndef ABXY1284P_H
#define ABXY1284P_H

class A_Button
{
public:
A_Button();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class B_Button
{
public:
B_Button();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class X_Button
{
public:
X_Button();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class Y_Button
{
public:
Y_Button();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class D_Left
{
public:
D_Left();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class D_Right
{
public:
D_Right();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class D_Down
{
public:
D_Down();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class D_Up
{
public:
D_Up();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class Left_Bumper
{
public:
Left_Bumper();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class Right_Bumper
{
public:
Right_Bumper();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class Sync_Button
{
public:
Sync_Button();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class Select_Button
{
public:
Select_Button();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class Start_Button
{
public:
Start_Button();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class Guide_Button
{
public:
Guide_Button();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class Left_Stick_Click
{
public:
Left_Stick_Click();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class Right_Stick_Click
{
public:
Right_Stick_Click();
int  read();
void press();
void unpress();
void quickPress();

private:
int  _buttonPin;
int _debounceTime;
int  _buttonState0;
int  _buttonState1;
int _pressTime;
};
//.....................................................................
class Player_1_LED
{

public:

Player_1_LED();
void on();
void off();

private:

int  _ledPin;
};
//.....................................................................
class Player_2_LED
{

public:

Player_2_LED();
void on();
void off();

private:

int  _ledPin;
};
//.....................................................................
class Player_3_LED
{

public:

Player_3_LED();
void on();
void off();

private:

int  _ledPin;
};
//.....................................................................
class Player_4_LED
{

public:

Player_4_LED();
void on();
void off();

private:

int  _ledPin;
};
//....................................................................
class Left_Rumble
{

public:

Left_Rumble();
void on();
void off();

private:

int   _motorPin;
};
//....................................................................
class Right_Rumble
{

public:

Right_Rumble();
void on();
void off();

private:

int   _motorPin;
};
//.....................................................................
class Left_Trigger
{

public:

Left_Trigger();
int  read();
void press();
void unpress();
void quickPress();

private:

int _buttonPin;

int _debounceTime;
int _buttonState0;
int _buttonState1;
int _pressTime;
};
//.....................................................................
class Right_Trigger
{

public:

Right_Trigger();
int  read();
void press();
void unpress();
void quickPress();

private:

int _buttonPin;

int _debounceTime;
int _buttonState0;
int _buttonState1;
int _pressTime;
};
//.....................................................................
class Left_Stick_X
{

public:

Left_Stick_X();
int  read();
void pressLeft();
void pressRight();
void unpress();


private:

int _buttonPin;

int _debounceTime;
int _buttonState0;
int _buttonState1;
int _pressTime;
};
//.....................................................................
class Left_Stick_Y
{

public:

Left_Stick_Y();
int  read();
void pressUp();
void pressDown();
void unpress();


private:

int _buttonPin;

int _debounceTime;
int _buttonState0;
int _buttonState1;
int _pressTime;
};
//.....................................................................
class Right_Stick_X
{

public:

Right_Stick_X();
int  read();
void pressLeft();
void pressRight();
void unpress();


private:

int _buttonPin;

int _debounceTime;
int _buttonState0;
int _buttonState1;
int _pressTime;
};
//.....................................................................
class Right_Stick_Y
{

public:

Right_Stick_Y();
int  read();
void pressUp();
void pressDown();
void unpress();


private:

int _buttonPin;

int _debounceTime;
int _buttonState0;
int _buttonState1;
int _pressTime;
};
#endif