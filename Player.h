#pragma once
#include "Struct.h"
class Player
{
public:

	Player();

	void Initialize();

	void Update();

	void Draw();

	void MoveRight();
	void MoveLeft();

private:

	intVector2 pos_;

	int width_;
	int height_;

	int speed_;
};