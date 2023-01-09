#ifndef PRIMMODEL_H
#define PRIMMODEL_H

#pragma once

#include "Observations.h"
#include "Primitives.h"
#include "ConsoleCanves.h"

#include <memory>

namespace canv
{

class PrimModel : public IObservable
{
public:
  PrimModel() = default;
  ~PrimModel() = default;


  void New();
  void Open(const std::string& a_strPath);
  void Save() const;
  void Clear();
  void AddPrimitive(std::shared_ptr<IPrimitive> a_pPrimitive);
  void DeletePrimitive(std::shared_ptr<IPrimitive> a_pPrimitive);
  void Draw(std::shared_ptr<ICanves> a_pCanvas);

private:
  std::vector<std::shared_ptr<IPrimitive>> m_vPrimitives;
  std::string m_strPath;
};

}


#endif // PRIMMODEL_H
