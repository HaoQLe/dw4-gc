#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803050A8(void *,void *,void *,int,void *);
void fn_80305308(void *,void *,void *);
extern char lbl_80457FDC[];
extern char lbl_80457FEC[];
}
extern "C" {
void beNDMWLoadIntf2_virtual7C(int p0,int p1){
 fn_80305308(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,lbl_80457FDC);
 fn_803050A8(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),(void *)p1,lbl_80457FEC,0,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p1)+8));
}
}
#pragma pop
