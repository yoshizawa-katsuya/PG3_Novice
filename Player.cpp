#include "Player.h"
#include <Novice.h>

Player::Player()
	: pos_({100, 100})
	, width_(50)
	, height_(50)
	, speed_(1)
{
}

void Player::Initialize()
{
}

void Player::Update()
{
}

void Player::Draw()
{
	Novice::DrawBox(pos_.x, pos_.y, width_, height_, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight()
{
	pos_.x += speed_;
}

void Player::MoveLeft()
{
	pos_.x -= speed_;
}
