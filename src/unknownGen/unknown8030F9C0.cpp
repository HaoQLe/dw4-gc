#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8030FAA4(void *,void *);
extern void *lbl_80534D30;
extern void *lbl_80534D4C;
extern void *lbl_80534D68;
extern void *lbl_80534F4C;
}
extern "C" {
void *fn_8030F9C0(){return lbl_80534D30;}
void *fn_8030F9D0(){return lbl_80534D4C;}
void *fn_8030F9E0(){return lbl_80534D68;}
void *fn_8030F9F0(){return lbl_80534F4C;}
void fn_8030FA00(int p0,int p1){
 fn_8030FAA4((void *)p1,(void *)p0);
}
}
#pragma pop
