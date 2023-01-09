#include "PrimController.h"

canv::PrimController::PrimController(std::shared_ptr<PrimModel> a_pModel)
  : m_pModel(std::move(a_pModel))
{}


void canv::PrimController::Open(const std::string& path)
{
  m_pModel->Open(path);
}

void canv::PrimController::Clear()
{
  m_pModel->Clear();
}

void canv::PrimController::Save() const
{
  m_pModel->Save();
}

void canv::PrimController::Run()
{

}

void canv::PrimController::SetColor(Colores a_Color)
{
  m_CurColor = a_Color;
}

void canv::PrimController::SetTool(std::unique_ptr<ITool> a_pTool)
{
  if (a_pTool) {
    m_curPrimitive = a_pTool->Create();
    m_curPrimitive->SetColor(m_CurColor);

    m_pModel->AddPrimitive(m_curPrimitive);
  }
}

void canv::PrimController::DeletePrimitive()
{

}
