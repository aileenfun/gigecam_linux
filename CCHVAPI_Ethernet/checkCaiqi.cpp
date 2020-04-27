#include "checkCaiqi.h"
#include "CCHVAPI.h"
#include "Types.h"
 int CheckCaiQi()
{
    int rst=GigECheckCaiQi();
     //int rst=1;
	cout<<rst<<endl;
	return rst;
}
