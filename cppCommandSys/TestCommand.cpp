#include "TestCommand.h"
#include "CommandSystem.h"
#include <iostream>

std::string TestCommand::CommandName() {
	return std::string("peter");
}

void TestCommand::run() {
	std::cout << "Command Executed";
}
