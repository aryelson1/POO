#ifndef MOTOR_H
#define MOTOR_H

class Motor{
  private:
    int cil;
    int pot;
  public:
    Motor(int cil, int pot);
    Motor();
    string toString();
};

#endif