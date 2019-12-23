#include "Stage.h"


CStage::CStage()
{
}


CStage::~CStage()
{
}

bool CStage::Init()
{
	memset(m_Stage, 0, STAGE_WIDTH * STAGE_HEIGHT); // 비어있는 틀을 만든다. 
	return true;
}

void CStage::Render()
{
	// 비어있는 공간 외부를 블록으로 감싸준다. 
	for (int i = 0; i < STAGE_HEIGHT + 1; ++i)
	{
		for (int j = 0; j < STAGE_WIDTH + 2; ++j)
		{
			if (i == 0 && (j == 0 || j == STAGE_WIDTH + 1))
				cout << "■";

			else if (j==0)
				cout << "■";

			else if (i == STAGE_HEIGHT)
				cout << "■";

			else if (j == STAGE_WIDTH + 1)
				cout << "■";

			else
				cout << "  "; //  위에 네모는 2byte 짜리 이므로 공백 두개로 해야함. 
		}
		cout << endl;
	}
}