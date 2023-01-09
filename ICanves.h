#ifndef ICANVES_H
#define ICANVES_H

// я хотела сократить количествои файлов, но интерфейсный класс с абстрактным не уживаются в одном(((!!!!!!


namespace canv
{

class ICanves
{
public:
  virtual void Draw(int a_nX, int a_nY, int color) = 0;
  virtual ~ICanves() = default;
};
}


#endif // ICANVES_H
