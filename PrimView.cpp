#include "PrimView.h"
#include "Toolses.h"


namespace canv
{

PrimView::PrimView(std::shared_ptr<PrimModel> a_pModel, std::shared_ptr<PrimController> a_pController)
  : m_pModel(std::move(a_pModel))
  , m_pController(std::move(a_pController))
{
  assert(m_pModel);
  assert(m_pModel);
  m_pCanvas = std::make_shared<ConsoleCanves>();

  m_pBtnOpen->SetOnClick( std::bind(&PrimView::OnClickBtnOpen, this) );
  m_pBtnSave->SetOnClick( std::bind(&PrimView::OnClickBtnSave, this) );
  m_pBtnClear->SetOnClick( std::bind(&PrimView::OnClickBtnClear, this) );
  m_pBtnColor->SetOnClick( std::bind(&PrimView::OnClickBtnColor, this) );
  m_pBtnToolPoint->SetOnClick( std::bind(&PrimView::OnClickBtnToolPoint, this) );
  m_pBtnToolLine->SetOnClick( std::bind(&PrimView::OnClickBtnToolPoint, this) );
  m_pBtnToolDelete->SetOnClick( std::bind(&PrimView::OnClickBtnToolDelete, this) );
}

void PrimView::Update()
{
  m_pModel->Draw(m_pCanvas);
}

void PrimView::OnClickBtnOpen()
{
  m_pController->Open("test");
}

void PrimView::OnClickBtnSave()
{
  m_pController->Save();
}

void PrimView::OnClickBtnClear()
{
  m_pController->Clear();
}

void PrimView::OnClickBtnColor()
{
  m_pController->SetColor(Colores::COLLOR_RED);
}

void PrimView::OnClickBtnToolPoint()
{
  m_pController->SetTool(std::make_unique<CPointTool>());
}

void PrimView::OnClickBtnToolLine()
{
  m_pController->SetTool(std::make_unique<LineTool>());
}

void PrimView::OnClickBtnToolDelete()
{
  m_pController->DeletePrimitive();
}


}
