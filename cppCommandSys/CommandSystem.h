#pragma once
#include <string>
#include <iostream>
#include <vector>


namespace CommandSystem {
	class Command {
		struct CMD {
		public:
			std::string name;
			void(*function)();
			virtual void run() {
				void(*func)() = function;
				func();
			};
		};


		std::vector<CMD> commands;

	public:
		CMD add(std::string commandName, void(*function)()) {
			CMD cmd;

			cmd.name = commandName;
			cmd.function = function;

			commands.push_back(cmd);

			return cmd;
		};

		CMD getCommand(std::string commandName) {
			for (int i = 0; i < commands.size(); i++) {
				if (commands[i].name == commandName) {
					return commands[i];
				}
			}
		}
	};

}

