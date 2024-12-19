#include "ClearScene.h"
#include <imgui.h>
#include "Novice.h"

void ClearScene::Initialize()
{
	sceneNo = SCENE::CLEAR;
}

void ClearScene::Update()
{

	ImGui::Begin("Window");
	ImGui::Text("Clear");
	if (ImGui::Button("SceneChenge")) {
		sceneNo = SCENE::TITLE;
	}
	ImGui::End();
}

void ClearScene::Draw()
{
}
