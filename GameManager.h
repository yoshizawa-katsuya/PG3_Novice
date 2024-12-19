#pragma once
#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClearScene.h"

class GameManager
{
public:
	GameManager();
	~GameManager();

	int Run();

private:

	std::unique_ptr<IScene> sceneArr_[3];

	IScene::SCENE currentSceneNo_;
	IScene::SCENE prevSceneNo_;

	// キー入力結果を受け取る箱
	char keys_[256] = { 0 };
	char preKeys_[256] = { 0 };
};

