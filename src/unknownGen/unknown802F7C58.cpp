#include <unknownGen.h>
#include <meta/beDemoManager.h>
#include <meta/beLua.h>
#include <meta/beMessenger.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028A398(void *,void *);
void fn_8028A400(void *,void *);
void *fn_8028A730(void *,void *);
extern void *lbl_80534FBC;
extern void *lbl_80535124;
}
extern "C" {
void beDemoManager_virtual5C(int p0){
 fn_8028A398(reinterpret_cast<Meta::beDemoManager *>((void *)p0)->_insight,(void *)p0);
}
void beDemoManager_virtual60(int p0){
 fn_8028A400(reinterpret_cast<Meta::beDemoManager *>((void *)p0)->_insight,(void *)p0);
}
void beDemoManager_virtual64(int p0){
 void *value0=fn_8028A730(reinterpret_cast<Meta::beDemoManager *>((void *)p0)->_insight,lbl_80534FBC);
 reinterpret_cast<Meta::beDemoManager *>((void *)p0)->_messenger=(Meta::beMessenger *)value0;
 void *value1=fn_8028A730(reinterpret_cast<Meta::beDemoManager *>((void *)p0)->_insight,lbl_80535124);
 reinterpret_cast<Meta::beDemoManager *>((void *)p0)->_lua=(Meta::beLua *)value1;
}
}
#pragma pop
