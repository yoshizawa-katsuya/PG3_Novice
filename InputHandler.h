#pragma once
#include "ICommand.h"
class InputHandler
{
public:

	InputHandler();

	ICommand* HandleInput();

private:

	void AssingMoveRightCommand2PressKeyD();
	void AssingMoveLeftCommand2PressKeyA();

	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
};

