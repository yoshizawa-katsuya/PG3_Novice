#include "TitleScene.h"
#include <imgui.h>
#include "Novice.h"

void TitleScene::Initialize()
{
	sceneNo = SCENE::TITLE;
}

void TitleScene::Update()
{

	

	ImGui::Begin("Window");
	ImGui::Text("Title");
	if (ImGui::Button("SceneChenge")) {
		sceneNo = SCENE::STAGE;
	}
	ImGui::End();
}

void TitleScene::Draw()
{
}
