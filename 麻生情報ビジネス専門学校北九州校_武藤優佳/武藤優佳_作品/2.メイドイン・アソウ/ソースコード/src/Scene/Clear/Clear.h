#pragma once
#include "../SceneBase.h"

class CClear : public CSceneBase
{
public:
	CClear();
	~CClear();

	int  Loop();		//ループ 
	void Draw();		//描画

	void Init();		//初期化
	void Load();		//ロード
	void Step();		//ステップ
	void Exit();		//破棄
	void Next();		//次へ

};




