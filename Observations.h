#ifndef OBSERVATIONS_H
#define OBSERVATIONS_H



#pragma once

#include <vector>
#include <algorithm>
#include <memory>

namespace canv
{

class IObservations : std::enable_shared_from_this<IObservations>
{
public:
   std::shared_ptr<IObservations> GetPtr();

   virtual void Update() = 0;
   virtual ~IObservations() = default;
};


class IObservable
{
public:

   void Subscribe(std::shared_ptr<IObservations> a_pObserver);


   void Unsubscribe(std::shared_ptr<IObservations> a_pObserver);

   void NotifyUpdate();

   virtual ~IObservable() = default;
private:
   std::vector<std::weak_ptr<IObservations>> m_vObservers;
};

}

#endif // OBSERVATIONS_H
