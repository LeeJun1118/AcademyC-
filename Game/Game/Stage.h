#pragma once
#include "Scene.h"


class Stage :public Scene
{
public:
	Stage();
	virtual~Stage();

public:
	virtual void Initialize()override;
	virtual void Progress()override;
	virtual void Render()override;
	virtual void Release()override;
};
