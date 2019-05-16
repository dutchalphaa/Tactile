#pragma once

#ifdef TT_PLATFORM_WINDOWS

extern Tactile::Application* Tactile::CreateApplication();

int main(int argc, char** argv)
{
  Tactile::Log::Init();
  TT_CORE_ERROR("Tactile engine started");
  TT_INFO("Tactile engine application started");

  auto app = Tactile::CreateApplication();
  app->Run();
  delete app;
}
#endif