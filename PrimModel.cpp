#include "PrimModel.h"


void canv::PrimModel::New()
{
  Clear();
}

void canv::PrimModel::Open(const std::string& a_strPath)
{
  if (a_strPath.empty()) { }
  m_strPath = a_strPath;
  NotifyUpdate();
}

void canv::PrimModel::Save() const
{
  if (m_strPath.empty()) { }
}

void canv::PrimModel::Clear()
{
  m_vPrimitives.clear();
  m_strPath.clear();
}

void canv::PrimModel::AddPrimitive(std::shared_ptr<IPrimitive> a_pPrimitive)
{
  if (a_pPrimitive)
  {  }
  NotifyUpdate();
}

void canv::PrimModel::DeletePrimitive(std::shared_ptr<IPrimitive> a_pPrimitive)
{
  if (a_pPrimitive)
  {}
  NotifyUpdate();
}

void canv::PrimModel::Draw(std::shared_ptr<ICanves> a_pCanvas)
{
  for (auto& pPrimitive : m_vPrimitives)
  {
    pPrimitive->Draw(a_pCanvas);
  }
}
