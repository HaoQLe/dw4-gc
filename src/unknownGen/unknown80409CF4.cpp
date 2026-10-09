#include <unknownGen.h>
#include <meta/igViewerDataPumpManager.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8021A100(void *,void *,void *,void *);
}
extern "C" {
void igViewerDataPumpManager_virtual74(int p0){
 fn_8021A100(reinterpret_cast<Meta::igViewerDataPumpManager *>((void *)p0)->_dataPumpManager,reinterpret_cast<Meta::igViewerDataPumpManager *>((void *)p0)->_insight,*reinterpret_cast<void **>(reinterpret_cast<char *>(reinterpret_cast<Meta::igViewerDataPumpManager *>((void *)p0)->_insight)+80),*reinterpret_cast<void **>(reinterpret_cast<char *>(reinterpret_cast<Meta::igViewerDataPumpManager *>((void *)p0)->_insight)+84));
}
}
#pragma pop
