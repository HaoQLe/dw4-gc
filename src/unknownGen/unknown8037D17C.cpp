#include <unknownGen.h>
#include <meta/beNDMWSaveIntf.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803050A8(void *,void *,void *,int,void *);
void fn_80305308(void *,void *,void *);
extern char lbl_80459C2C[];
extern char lbl_80459C3C[];
}
extern "C" {
void beNDMWSaveIntf_virtual7C(int p0,int p1){
 fn_80305308(reinterpret_cast<Meta::beNDMWSaveIntf *>((void *)p0)->_messenger,(void *)p1,lbl_80459C2C);
 fn_803050A8(reinterpret_cast<Meta::beNDMWSaveIntf *>((void *)p0)->_messenger,(void *)p1,lbl_80459C3C,0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8));
}
}
#pragma pop
