#ifndef PUSHBUTTONNOQT_H
#define PUSHBUTTONNOQT_H



#pragma once

#include "Primitives.h"

#include <string>
#include <functional>

namespace canv
{

using FuncOnClick = std::function<void(void)>;

class PushButtonNoQt
{
public:
  PushButtonNoQt() = default;
  PushButtonNoQt(const std::string& a_strCaption);
  ~PushButtonNoQt() = default;

  void SetOnClick(FuncOnClick a_OnClick);

  void OnClick();

private:
  std::string m_strCaption;
  FuncOnClick m_OnClick;
};

}

#endif // PUSHBUTTONNOQT_H
