
#pragma once

#define SAFE_DELETE(p) if(p) { delete p; p = NULL;} // 메모리 해제기능