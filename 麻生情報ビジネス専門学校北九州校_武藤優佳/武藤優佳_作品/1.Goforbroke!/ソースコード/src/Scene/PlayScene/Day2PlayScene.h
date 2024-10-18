#pragma once
#include "SceneBase.h"

class CDay2PlayScene : public CBaseScene
{
public:
	//コンストラクタ・デストラクタb
	CDay2PlayScene();
	~CDay2PlayScene();

	//繰り返し行う処理
	void Loop();
	//描画処理(影あり)
	void ShadowDraw();
	//描画処理(影なし)
	void Draw();

	//初期化
	void Init(void);
	//終了処理
	void Exit();
	//データロード
	void Load();
	//毎フレーム呼ぶ処理
	void AmStep();
	void PmStep();
	void Next();

	//クリアかそうでないか
	bool GetClearFlg();
	//リザルトにいくかどうか　true : リザルトへ
	bool GetResultFlg() { return cItemManager.GetResultFrg(); }
	//二日目クリアできるか水場の％　フラグ
	bool GetWaterClear();
	



};



