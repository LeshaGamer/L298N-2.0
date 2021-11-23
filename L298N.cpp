#include <L298N.h> //библиотека драйвера L298N
#include <Arduino.h> //библиотека Arduino

void L298N.onA();
{
digitalWrite(ena, 1);
}

void L298N.onB();
{
digitalWrite(enb, 1);
}
	
void L298N.offA();
{
	digitalWrite(ena, 0);
}

void L298N.offB();
{
	digitalWrite(enb, 0);
}

void L298N.left(int speedRotateA, int speedRotate B);  //Поворот влево команда: L298N.left(0-255, 0-255);

{
analogWrite(ena, speedRotateA);
digitalWrite(in1a, 0);
digitalWrite(in2a, 1);

analogWrite(enb, speedRotateB
digitalWrite(in1a, 0);
digitalWrite(in2a, 1);
}
void L298N.right(int speedRotateA, int speedRotate B); //Поворот вправо команда: L298N.right(0-255, 0-255);
{
{
analogWrite(ena, speedRotateA);
digitalWrite(in1a, 1);
digitalWrite(in2a, 0);

analogWrite(enb, speedRotateB
digitalWrite(in1a, 1);
digitalWrite(in2a, 0);
}
void L298N.stop(int speedRotateA, int speedRotate B); //Остановка команда: L298N.stop(0-255, 0-255);
{
{
analogWrite(ena, speedRotateA);
digitalWrite(in1a, 0);
digitalWrite(in2a, 0);

analogWrite(enb, speedRotateB
digitalWrite(in1a, 0);
digitalWrite(in2a, 0);
}
void L298N.forw(int speedRotateA, int speedRotate B); //Холостой ход команда: L298N.forw(0-255, 0-255);
{
{
analogWrite(ena, speedRotateA);
digitalWrite(in1a, 1);
digitalWrite(in2a, 1);

analogWrite(enb, speedRotateB
digitalWrite(in1a, 1);
digitalWrite(in2a, 1);
}