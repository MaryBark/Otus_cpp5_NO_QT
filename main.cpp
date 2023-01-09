#include <iostream>
#include "PrimController.h"
#include "PrimModel.h"
#include "PrimView.h"


using namespace std;

int main(int , const char**)
{
    /// Получись хоть что-то"!!!!
    auto pModel = std::make_shared<canv::PrimModel>();
    auto pController = std::make_shared<canv::PrimController>(pModel);
    auto pView = std::make_shared<canv::PrimView>(pModel, pController);

    pModel->Subscribe(pView);
    pController->Run();
    pModel->Unsubscribe(pView);
    return 0;
}
