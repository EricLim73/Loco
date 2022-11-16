#include <Loco.h>	// external include mostly use <>

class SandBox : public Loco::Application{
public:
	SandBox() {

	}
	~SandBox() {

	}

};

// "int main()" is inside engine

Loco::Application* Loco::CreateApplication() {
	return new SandBox();
}