#include "InputHandler.h"
#include <Novice.h>

InputHandler::InputHandler()
{
	AssingMoveRightCommand2PressKeyD();
	AssingMoveLeftCommand2PressKeyA();
}

ICommand* InputHandler::HandleInput()
{
	if (Novice::CheckHitKey(DIK_D)) {
		return pressKeyD_;
	}
	if (Novice::CheckHitKey(DIK_A)) {
		return pressKeyA_;
	}

	return nullptr;
}

void InputHandler::AssingMoveRightCommand2PressKeyD()
{
	ICommand* command = new MoveRightCommand();
	pressKeyD_ = command;
}

void InputHandler::AssingMoveLeftCommand2PressKeyA()
{
	ICommand* command = new MoveLeftCommand();
	pressKeyA_ = command;
}
