#include <Tactile.h>

class Sandbox : public Tactile::Application
{
public:
   Sandbox()
   {
     
   }

  ~Sandbox()
   {
     
   }
};

Tactile::Application* Tactile::CreateApplication()
{
  return new Sandbox();
}