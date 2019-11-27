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
	m_pBlock.Position = Vector3(0.f, 0.f);
	m_pBlock.Rotate = Vector3(0.f, 0.f);
	m_pBlock.Scale = Vector3(2.f, 1.f);
}

void BackGround::Progress()
{
}


void BackGround::Render()
{
	CursorManager::OnDrawText(0, 0, (char*)"กแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแ");
	CursorManager::OnDrawText(0, WINSIZEY - 2, (char*)"กแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแกแ");

	for (int y = 0; y < WINSIZEY - 1; y++)
	{
		CursorManager::OnDrawText(0, y, (char*)"กแ");
		CursorManager::OnDrawText(WINSIZEX - 2, y, (char*)"กแ");

	}
}

void BackGround::Release()
{
}
