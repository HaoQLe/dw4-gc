#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006E358(void *,void *,void *,void *);
extern char lbl_8049D0E8[];
extern char lbl_804A212C[];
extern char lbl_8055FDBC[5];
}
extern "C" {
void igPromoteAllAttrs_virtual98(int p0,int p1,int p2){
 fn_8006E358((void *)p1,(void *)p2,lbl_8055FDBC,lbl_8049D0E8);
 fn_8006E358((void *)p1,(void *)p2,lbl_804A212C,*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+44));
}
}
#pragma pop
