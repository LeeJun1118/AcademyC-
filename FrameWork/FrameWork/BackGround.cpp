#include "BackGround.h"
#include "CursorManager.h"

BackGround::BackGround()
{

}

BackGround::~BackGround()
{

}

void BackGround::Initialize()
{

}

void BackGround::Progress()
{

}

void BackGround::Render()
{
	CursorManager::OnDrawText(0, 0, (char*)"กแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแ");
	
	for (int y = 0; y < 29; y++)
	{
		if (y == 14 || y == 15)
			continue;
		CursorManager::OnDrawText(0, y, (char*)"กแ");
		CursorManager::OnDrawText(118, y, (char*)"กแ");
	}

	CursorManager::OnDrawText(0, 28, (char*)"กแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแ");
}

void BackGround::Release()
{

}
