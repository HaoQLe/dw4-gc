#include <unknownGen.h>
#include <meta/beCri.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A400(void *,void *);
extern void *lbl_80535A68;
extern void *lbl_80561B3C;
}
extern "C" {
void beCri_virtual60(int p0){
 void *value0=lbl_80561B3C;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)lbl_80535A68;
 fn_8028A400(reinterpret_cast<Meta::beCri *>((void *)p0)->_insight,(void *)p0);
}
}
#pragma pop
