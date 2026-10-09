#include <unknownGen.h>
#include <meta/beCri.h>
#include <meta/beCriHandle.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802F60FC(void *,int);
void fn_802F6824(void *);
void fn_8031CB84(void *);
}
extern "C" {
void beCri_virtual68(int p0){
 fn_802F60FC((void *)p0,5);
 fn_8031CB84(reinterpret_cast<Meta::beCriHandle *>(reinterpret_cast<Meta::beCri *>((void *)p0)->_hdBGM)->_audio);
 fn_8031CB84(reinterpret_cast<Meta::beCriHandle *>(reinterpret_cast<Meta::beCri *>((void *)p0)->_hdENV)->_audio);
 fn_802F6824((void *)p0);
}
}
#pragma pop
