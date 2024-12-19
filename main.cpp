#include <Novice.h>
#include <memory>
#include "GameManager.h"

const char kWindowTitle[] = "LE2B_28_ヨシザワ_カツヤ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	std::unique_ptr<GameManager> gameManager_;
	gameManager_ = std::make_unique<GameManager>();

	gameManager_->Run();

	return 0;
}
