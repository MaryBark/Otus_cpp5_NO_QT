#ifndef PRIMVIEW_H
#define PRIMVIEW_H


#pragma once

#include "Observations.h"
#include "PrimModel.h"
#include "PrimController.h"
#include "PushButtonNoQt.h"
#include "ConsoleCanves.h"

#include <memory>
#include <assert.h>

namespace canv
{

class PrimView : public IObservations
{
public:
  explicit PrimView(
    std::shared_ptr<PrimModel> a_pModel,
    std::shared_ptr<PrimController> a_pController
  );
  ~PrimView() = default;

  void Update() override;

  void OnClickBtnOpen();
  void OnClickBtnSave();
  void OnClickBtnClear();

  void OnClickBtnColor();

  void OnClickBtnToolPoint();
  void OnClickBtnToolLine();
  void OnClickBtnToolDelete();

private:
  std::shared_ptr<PrimModel> m_pModel;
  std::shared_ptr<PrimController> m_pController;

  std::shared_ptr<ICanves> m_pCanvas;

  std::unique_ptr<PushButtonNoQt> m_pBtnOpen = std::make_unique<PushButtonNoQt>(std::string("Open"));
  std::unique_ptr<PushButtonNoQt> m_pBtnSave = std::make_unique<PushButtonNoQt>(std::string("Save"));
  std::unique_ptr<PushButtonNoQt> m_pBtnClear = std::make_unique<PushButtonNoQt>(std::string("Clear"));

  std::unique_ptr<PushButtonNoQt> m_pBtnColor = std::make_unique<PushButtonNoQt>(std::string("Color"));

  std::unique_ptr<PushButtonNoQt> m_pBtnToolPoint = std::make_unique<PushButtonNoQt>(std::string("Point"));
  std::unique_ptr<PushButtonNoQt> m_pBtnToolLine = std::make_unique<PushButtonNoQt>(std::string("Line"));
  std::unique_ptr<PushButtonNoQt> m_pBtnToolDelete = std::make_unique<PushButtonNoQt>(std::string("Delete"));
};

}



#endif // PRIMVIEW_H
