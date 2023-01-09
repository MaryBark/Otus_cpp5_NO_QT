#ifndef PRIMITIVES_H
#define PRIMITIVES_H


#pragma once

#include "ICanves.h"
#include "Colores.h"

#include <memory>

namespace canv
{


class IPrimitive
{
public:

  virtual void Draw(std::shared_ptr<ICanves> a_pCanvas) = 0;
  virtual void SetColor(Colores a_Color) = 0;
  virtual ~IPrimitive() = default;
};

class Primitives : public IPrimitive
{
public:
  Primitives() = default;

  void SetColor(Colores a_Color);

private:
  Colores m_Color;
};


class CPoint : public Primitives
{
public:
  CPoint()
    : m_nX(0)
    , m_nY(0)
  {}
  CPoint(const CPoint& a_Point) = default;
  CPoint(CPoint&& a_Point) = default;
  CPoint& operator=(const CPoint& a_Point) = default;
  CPoint& operator=(CPoint&& a_Point) = default;
  ~CPoint() = default;


  void Draw(std::shared_ptr<ICanves> a_pCanvas) override;

private:
  int m_nX;
  int m_nY;
};


class CLine : public Primitives
{
public:
  explicit CLine(std::unique_ptr<CPoint> a_PointStart, std::unique_ptr<CPoint> a_PointEnd) noexcept;

  ~CLine() = default;


  void Draw(std::shared_ptr<ICanves> a_pCanvas) override;

private:
  std::unique_ptr<CPoint> m_PointStart;
  std::unique_ptr<CPoint> m_PointEnd;
};


}



#endif // PRIMITIVES_H
