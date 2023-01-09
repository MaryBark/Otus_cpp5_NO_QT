#ifndef CONSOLECANVES_H
#define CONSOLECANVES_H



#pragma once

#include <iostream>
#include "ICanves.h"

namespace canv
{

//class ICanves
//{
//public:
//  virtual void Draw(int a_nX, int a_nY, int color) = 0;
//  virtual ~ICanves() = default;
//};



class ConsoleCanves : public ICanves
{
public:
  virtual void Draw(int a_nX, int a_nY, int color);
  virtual ~ConsoleCanves() = default;
};

}

#endif // CONSOLECANVES_H
