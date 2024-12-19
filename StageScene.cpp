#include "StageScene.h"
#include <imgui.h>
#include "Novice.h"

void StageScene::Initialize()
{
	sceneNo = SCENE::STAGE;
	isShot_ = false;
	bulletPosY_ = 500;
}

void StageScene::Update()
{
	if (Novice::CheckHitKey(DIK_SPACE)) {
		isShot_ = true;
	}

	if (isShot_) {
		bulletPosY_ -= 5;
		if (bulletPosY_ < 110) {
			sceneNo = SCENE::CLEAR;
		}
	}
	ImGui::Begin("Window");
	ImGui::Text("Stage");
	ImGui::End();
}

void StageScene::Draw()
{
	Novice::DrawBox(640, 500, 100, 100, 0.0f, WHITE, kFillModeSolid);
	Novice::DrawBox(640, 100, 100, 100, 0.0f, RED, kFillModeSolid);

	if (isShot_) {
		Novice::DrawBox(640, bulletPosY_, 50, 50, 0.0f, WHITE, kFillModeSolid);
	}
}
