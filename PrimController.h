#ifndef PRIMCONTROLLER_H
#define PRIMCONTROLLER_H


#pragma once

#include "PrimModel.h"
#include "Primitives.h"
#include "Toolses.h"

#include <memory>

namespace canv
{


class PrimController
{
public:
  explicit PrimController(std::shared_ptr<PrimModel> a_pModel);

  void Open(const std::string& path);
  void Clear();
  void Save() const;
  void Run();
  void SetColor(Colores a_Color);
  void SetTool(std::unique_ptr<ITool> a_pTool);
  void DeletePrimitive();

private:
  std::shared_ptr<PrimModel> m_pModel;
  std::shared_ptr<IPrimitive> m_curPrimitive;
  Colores m_CurColor;
};

}


#endif // PRIMCONTROLLER_H
