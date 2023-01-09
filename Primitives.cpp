#include "Primitives.h"


void canv::Primitives::SetColor(Colores a_Color)
{
    m_Color = a_Color;
}

void canv::CPoint::Draw(std::shared_ptr<ICanves> a_pCanvas)
{
    a_pCanvas->Draw(m_nX, m_nY, 1);
}

canv::CLine::CLine(std::unique_ptr<CPoint> a_PointStart, std::unique_ptr<CPoint> a_PointEnd) noexcept
    : m_PointStart{std::move(a_PointStart)}
    , m_PointEnd{std::move(a_PointEnd)}
{}

void canv::CLine::Draw(std::shared_ptr<ICanves> a_pCanvas)
{
    m_PointStart->Draw(a_pCanvas);
    m_PointEnd->Draw(a_pCanvas);
}
