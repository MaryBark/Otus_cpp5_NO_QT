#include "Toolses.h"


std::unique_ptr<canv::IPrimitive> canv::LineTool::Create()
{
    return std::make_unique<CLine>(std::make_unique<CPoint>(), std::make_unique<CPoint>());
}

std::unique_ptr<canv::IPrimitive> canv::CPointTool::Create()
{
    return std::make_unique<CPoint>();
}
