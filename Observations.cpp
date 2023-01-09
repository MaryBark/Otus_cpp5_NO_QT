#include "Observations.h"


std::shared_ptr<canv::IObservations> canv::IObservations::GetPtr()
{
    return shared_from_this();
}

void canv::IObservable::Subscribe(std::shared_ptr<IObservations> a_pObserver)
{
    m_vObservers.push_back(a_pObserver);
}

void canv::IObservable::Unsubscribe(std::shared_ptr<IObservations> a_pObserver)
{
    m_vObservers.erase(
                std::remove_if(
                    m_vObservers.begin(),
                    m_vObservers.end(),
                    [&](const std::weak_ptr<IObservations>& wptr)
    {
        return wptr.expired() || wptr.lock() == a_pObserver;
    }
    ),
                m_vObservers.end());
}

void canv::IObservable::NotifyUpdate()
{
    for ( auto wptr : m_vObservers ) {
        if ( !wptr.expired() ) {
            auto observer = wptr.lock();
            observer->Update();
        }
    }
}
