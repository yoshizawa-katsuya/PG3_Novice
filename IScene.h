#pragma once

class IScene
{
public:

	enum class SCENE { TITLE, STAGE, CLEAR };

	virtual ~IScene();

	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	SCENE GetSceneNo() { return sceneNo; };

protected:

	SCENE sceneNo = SCENE::TITLE;

};

