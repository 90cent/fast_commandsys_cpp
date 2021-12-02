#include "CommandSystem.h"

void kekw() {
	std::cout << "basic kek" << std::endl;
}

int main() {
	auto sys = new CommandSystem::Command;
	auto kek = sys->add("lel", kekw);
	kek.run();
}