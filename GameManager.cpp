#include "GameManager.h"
#include "Novice.h"

GameManager::GameManager()
{
	sceneArr_[static_cast<int>(IScene::SCENE::TITLE)] = std::make_unique<TitleScene>();
	sceneArr_[static_cast<int>(IScene::SCENE::STAGE)] = std::make_unique<StageScene>();
	sceneArr_[static_cast<int>(IScene::SCENE::CLEAR)] = std::make_unique<ClearScene>();

	currentSceneNo_ = IScene::SCENE::TITLE;
	sceneArr_[static_cast<int>(currentSceneNo_)]->Initialize();
}

GameManager::~GameManager()
{
}

int GameManager::Run()
{

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys_, keys_, 256);
		Novice::GetHitKeyStateAll(keys_);

		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[static_cast<int>(currentSceneNo_)]->GetSceneNo();

		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[static_cast<int>(currentSceneNo_)]->Initialize();
		}

		///
		/// ↓更新処理ここから
		///

		sceneArr_[static_cast<int>(currentSceneNo_)]->Update();

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		sceneArr_[static_cast<int>(currentSceneNo_)]->Draw();

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (preKeys_[DIK_ESCAPE] == 0 && keys_[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
