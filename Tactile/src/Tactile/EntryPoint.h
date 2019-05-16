#pragma once

#ifdef TT_PLATFORM_WINDOWS

extern Tactile::Application* Tactile::CreateApplication();

int main(int argc, char** argv)
{
  auto app = Tactile::CreateApplication();
  app->Run();
  delete app;
}
#endif