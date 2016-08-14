#include "Arduino.h"
#include "ABXY1284P.h"

A_Button::A_Button()
{
_buttonPin = 18;
_debounceTime = 20;
int _pressTime = 20;
}

int A_Button::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void A_Button::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void A_Button::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void A_Button::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
B_Button::B_Button()
{
_buttonPin = 19;
_debounceTime = 20;
int _pressTime = 20;
}

int B_Button::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void B_Button::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void B_Button::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void B_Button::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
X_Button::X_Button()
{
_buttonPin = 20;
_debounceTime = 20;
int _pressTime = 20;
}

int X_Button::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void X_Button::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void X_Button::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void X_Button::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
Y_Button::Y_Button()
{
_buttonPin = 21;
_debounceTime = 20;
int _pressTime = 20;
}

int Y_Button::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void Y_Button::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void Y_Button::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void Y_Button::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
D_Left::D_Left()
{
_buttonPin = 0;
_debounceTime = 20;
int _pressTime = 20;
}

int D_Left::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void D_Left::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void D_Left::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void D_Left::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
D_Right::D_Right()
{
_buttonPin = 1;
_debounceTime = 20;
int _pressTime = 20;
}

int D_Right::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void D_Right::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void D_Right::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void D_Right::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
D_Down::D_Down()
{
_buttonPin = 2;
_debounceTime = 20;
int _pressTime = 20;
}

int D_Down::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void D_Down::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void D_Down::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void D_Down::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
D_Up::D_Up()
{
_buttonPin = 3;
_debounceTime = 20;
int _pressTime = 20;
}

int D_Up::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void D_Up::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void D_Up::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void D_Up::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
Left_Bumper::Left_Bumper()
{
_buttonPin = 4;
_debounceTime = 20;
int _pressTime = 20;
}

int Left_Bumper::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void Left_Bumper::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void Left_Bumper::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void Left_Bumper::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
Right_Bumper::Right_Bumper()
{
_buttonPin = 5;
_debounceTime = 20;
int _pressTime = 20;
}

int Right_Bumper::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void Right_Bumper::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void Right_Bumper::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void Right_Bumper::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
Sync_Button::Sync_Button()
{
_buttonPin = 10;
_debounceTime = 20;
int _pressTime = 20;
}

int Sync_Button::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void Sync_Button::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void Sync_Button::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void Sync_Button::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
Select_Button::Select_Button()
{
_buttonPin = 11;
_debounceTime = 20;
int _pressTime = 20;
}

int Select_Button::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void Select_Button::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void Select_Button::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void Select_Button::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
Start_Button::Start_Button()
{
_buttonPin = 15;
_debounceTime = 20;
int _pressTime = 20;
}

int Start_Button::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void Start_Button::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void Start_Button::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void Start_Button::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
Guide_Button::Guide_Button()
{
_buttonPin = 14;
_debounceTime = 20;
int _pressTime = 20;
}

int Guide_Button::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void Guide_Button::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void Guide_Button::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void Guide_Button::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
Left_Stick_Click::Left_Stick_Click()
{
_buttonPin = 22;
_debounceTime = 20;
int _pressTime = 20;
}

int Left_Stick_Click::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void Left_Stick_Click::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void Left_Stick_Click::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void Left_Stick_Click::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
Right_Stick_Click::Right_Stick_Click()
{
_buttonPin = 23;
_debounceTime = 20;
int _pressTime = 20;
}

int Right_Stick_Click::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = digitalRead(_buttonPin);

if(_buttonState0 == 1)
	{
	return 0;
	}
	
if(_buttonState0 == 0)
	{
	delay(_debounceTime);
	_buttonState1 = digitalRead(_buttonPin);
	
	if(_buttonState1 == 1)
		{
		return 0;
		}
	
	if(_buttonState1 == 0)
		{
		return 1;
		}
	}
}

void Right_Stick_Click::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
delay(_pressTime);
digitalWrite(_buttonPin, HIGH);
pinMode(_buttonPin, INPUT);
}

void Right_Stick_Click::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, LOW);
}

void Right_Stick_Click::unpress()
{

pinMode(_buttonPin, INPUT);
}
//..........................................................
Player_1_LED::Player_1_LED()
{
_ledPin = 6;
}

void Player_1_LED::on()
{
pinMode(_ledPin, OUTPUT);

digitalWrite(_ledPin, HIGH);
}

void Player_1_LED::off()
{
pinMode(_ledPin, INPUT);


}
//..........................................................
Player_2_LED::Player_2_LED()
{
_ledPin = 7;
}

void Player_2_LED::on()
{
pinMode(_ledPin, OUTPUT);

digitalWrite(_ledPin, HIGH);
}

void Player_2_LED::off()
{
pinMode(_ledPin, OUTPUT);

digitalWrite(_ledPin, LOW);
}
//..........................................................
Player_3_LED::Player_3_LED()
{
_ledPin = 12;
}

void Player_3_LED::on()
{
pinMode(_ledPin, OUTPUT);

digitalWrite(_ledPin, HIGH);
}

void Player_3_LED::off()
{
pinMode(_ledPin, OUTPUT);

digitalWrite(_ledPin, LOW);
}
//..........................................................
Player_4_LED::Player_4_LED()
{
_ledPin = 13;
}

void Player_4_LED::on()
{
pinMode(_ledPin, OUTPUT);

digitalWrite(_ledPin, HIGH);
}

void Player_4_LED::off()
{
pinMode(_ledPin, OUTPUT);

digitalWrite(_ledPin, LOW);
}
//..........................................................
Left_Rumble::Left_Rumble()
{
_motorPin = 26;
}

void Left_Rumble::on()
{
pinMode(_motorPin, OUTPUT);

digitalWrite(_motorPin, HIGH);
}

void Left_Rumble::off()
{
pinMode(_motorPin, OUTPUT);

digitalWrite(_motorPin, LOW);
}
//..........................................................
Right_Rumble::Right_Rumble()
{
_motorPin = A3;
}

void Right_Rumble::on()
{
pinMode(_motorPin, OUTPUT);

digitalWrite(_motorPin, HIGH);
}

void Right_Rumble::off()
{
pinMode(_motorPin, OUTPUT);

digitalWrite(_motorPin, LOW);
}
//..........................................................
Left_Trigger::Left_Trigger()
{
analogReference(DEFAULT);
_buttonPin = 24;
}

int Left_Trigger::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = analogRead(_buttonPin);

if(_buttonState0 < 300)
	{
	return 0;
	}
	
if(_buttonState0 > 300)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	if(_buttonState1 < 300)
		{
		return 0;
		}
	
	if(_buttonState1 > 300)	
		{
		return 1;
		}
	}
}

void Left_Trigger::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, HIGH);
delay(_pressTime);
digitalWrite(_buttonPin, LOW);
pinMode(_buttonPin, INPUT);
}

void Left_Trigger::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, HIGH);
}

void Left_Trigger::unpress()
{
pinMode(_buttonPin, INPUT);
}
//.........................................................
Right_Trigger::Right_Trigger()
{
analogReference(DEFAULT);
_buttonPin = 25;
}

int Right_Trigger::read()
{
pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = analogRead(_buttonPin);

if(_buttonState0 < 300)
	{
	return 0;
	}
	
if(_buttonState0 > 300)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	if(_buttonState1 < 300)
		{
		return 0;
		}
	
	if(_buttonState1 > 300)	
		{
		return 1;
		}
	}
}

void Right_Trigger::quickPress()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, HIGH);
delay(_pressTime);
digitalWrite(_buttonPin, LOW);
pinMode(_buttonPin, INPUT);
}

void Right_Trigger::press()
{
pinMode(_buttonPin, OUTPUT);

digitalWrite(_buttonPin, HIGH);
}

void Right_Trigger::unpress()
{
pinMode(_buttonPin, INPUT);
}
//.........................................................
Left_Stick_X::Left_Stick_X()
{
analogReference(DEFAULT);
_buttonPin = A4;
}

int Left_Stick_X::read()
{

pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = analogRead(_buttonPin);

	
if(_buttonState0 > 350)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	
	if(_buttonState1 > 350)	
		{
		return 1;
		}
	}

	
if(_buttonState0 < 200)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	if(_buttonState1 < 200)
		{
		return 2;
		}
	}

if(_buttonState0 < 350)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	
	if(_buttonState1 > 200)	
		{
		return 0;
		}
	}	
	
}




void Left_Stick_X::pressLeft()
{
pinMode(_buttonPin, OUTPUT);
digitalWrite(_buttonPin, HIGH);
}

void Left_Stick_X::pressRight()
{
pinMode(_buttonPin, OUTPUT);
digitalWrite(_buttonPin, LOW);
}

void Left_Stick_X::unpress()
{
pinMode(_buttonPin, OUTPUT);
digitalWrite(_buttonPin, LOW);
pinMode(_buttonPin, INPUT);
}
//.........................................................
Left_Stick_Y::Left_Stick_Y()
{
analogReference(DEFAULT);
_buttonPin = A5;
}

int Left_Stick_Y::read()

{

pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = analogRead(_buttonPin);

	
if(_buttonState0 > 350)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	
	if(_buttonState1 > 350)	
		{
		return 1;
		}
	}

	
if(_buttonState0 < 200)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	if(_buttonState1 < 200)
		{
		return 2;
		}
	}

if(_buttonState0 < 350)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	
	if(_buttonState1 > 200)	
		{
		return 0;
		}
	}	
	
}


void Left_Stick_Y::pressUp()
{
pinMode(_buttonPin, OUTPUT);
digitalWrite(_buttonPin, HIGH);
}

void Left_Stick_Y::pressDown()
{
pinMode(_buttonPin, OUTPUT);
digitalWrite(_buttonPin, LOW);
}

void Left_Stick_Y::unpress()
{
pinMode(_buttonPin, INPUT);
}
//.........................................................
Right_Stick_X::Right_Stick_X()
{
analogReference(DEFAULT);
_buttonPin = A6;
}

int Right_Stick_X::read()
{


pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = analogRead(_buttonPin);

	
if(_buttonState0 > 350)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	
	if(_buttonState1 > 350)	
		{
		return 1;
		}
	}

	
if(_buttonState0 < 200)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	if(_buttonState1 < 200)
		{
		return 2;
		}
	}

if(_buttonState0 < 350)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	
	if(_buttonState1 > 200)	
		{
		return 0;
		}
	}	
	
}


void Right_Stick_X::pressLeft()
{
pinMode(_buttonPin, OUTPUT);
digitalWrite(_buttonPin, HIGH);
}

void Right_Stick_X::pressRight()
{
pinMode(_buttonPin, OUTPUT);
digitalWrite(_buttonPin, LOW);
}

void Right_Stick_X::unpress()
{
pinMode(_buttonPin, INPUT);
}
//.........................................................
Right_Stick_Y::Right_Stick_Y()
{
analogReference(DEFAULT);
_buttonPin = A7;
}

int Right_Stick_Y::read()
{


pinMode(_buttonPin, INPUT);
_buttonState0 = 0;
_buttonState1 = 0;

_buttonState0 = analogRead(_buttonPin);

	
if(_buttonState0 > 350)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	
	if(_buttonState1 > 350)	
		{
		return 1;
		}
	}

	
if(_buttonState0 < 200)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	if(_buttonState1 < 200)
		{
		return 2;
		}
	}

if(_buttonState0 < 350)
	{
	delay(_debounceTime);
	_buttonState1 = analogRead(_buttonPin);
	
	
	if(_buttonState1 > 200)	
		{
		return 0;
		}
	}	
	
}


void Right_Stick_Y::pressUp()
{
pinMode(_buttonPin, OUTPUT);
digitalWrite(_buttonPin, HIGH);
}

void Right_Stick_Y::pressDown()
{
pinMode(_buttonPin, OUTPUT);
digitalWrite(_buttonPin, LOW);
}

void Right_Stick_Y::unpress()
{
pinMode(_buttonPin, INPUT);
}
//.........................................................