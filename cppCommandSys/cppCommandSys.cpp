#include <iostream>
#include "CommandSystem.h"
#include "TestCommand.h"
#include <string>
#include <thread>

void deez() {
    std::cout << "deez";
}

int main()
{
    CommandSystem::Command csys;
    auto kekw = csys.add("test", deez);
    kekw.run();
    kekw.destruct();
    
    csys.getCommand("test").run();
}