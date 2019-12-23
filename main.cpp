
#include "Core.h"

int main()
{
	if (!CCore::GetInst()->Init())
	{
		CCore::DestroyInst();
		return 0;
	}

	CCore::GetInst()->Run();

	CCore::DestroyInst();
	
	system("pause");
	return 0;
}