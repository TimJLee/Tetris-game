#pragma once

#include "value.h"
class CStage
{
private:
	CStage();
	~CStage();

private:
	friend class CStageManager;

private:
	char	m_Stage[STAGE_HEIGHT][STAGE_WIDTH];
public:
	bool Init();
	void Render();
};

