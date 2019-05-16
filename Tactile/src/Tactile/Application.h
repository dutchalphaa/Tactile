#pragma once

#include "Core.h"

namespace Tactile
{
  class TACTILE_API Application
  {
  public:
    Application(); 
    virtual ~Application();

    void Run();
  };

  //to be defined in client
  Application* CreateApplication();
}


