#ifndef TOOLSES_H
#define TOOLSES_H


#pragma once

#include "Primitives.h"

#include <memory>

namespace canv {

class ITool
{
public:
  virtual std::unique_ptr<IPrimitive> Create() = 0;
  virtual ~ITool() = default;
};

class LineTool : public ITool
{
public:
  LineTool() = default;

  std::unique_ptr<IPrimitive> Create() override;

  virtual ~LineTool() = default;
};

class CPointTool : public ITool
{
public:
  CPointTool() = default;

  std::unique_ptr<IPrimitive> Create() override;

  virtual ~CPointTool() = default;
};



}

#endif // TOOLSES_H
