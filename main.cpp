#include <iostream>
#include <emscripten/bind.h>

class Foo {
	public:
	void bar () {
		std::cout << "Hello world!" << std::endl;
	}
};

std::shared_ptr<Foo> create_foo () {
	return nullptr;
}

EMSCRIPTEN_BINDINGS(Sandbox) {
	using namespace emscripten;
	class_<Foo> ("Foo")
	.smart_ptr<std::shared_ptr<Foo>> ("Foo");

	function("create_foo", create_foo);
}

int main () {
	
}