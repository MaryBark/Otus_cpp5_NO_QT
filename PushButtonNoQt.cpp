#include "PushButtonNoQt.h"

canv::PushButtonNoQt::PushButtonNoQt(const std::string &a_strCaption)
    : m_strCaption(a_strCaption)
{}

void canv::PushButtonNoQt::SetOnClick(FuncOnClick a_OnClick)
{
    m_OnClick = a_OnClick;
}

void canv::PushButtonNoQt::OnClick()
{
    m_OnClick();
}
