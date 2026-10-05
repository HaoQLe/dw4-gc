#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_801C164C();
void *fn_801CE580();
extern void *lbl_80564F78;
}
extern "C" {
void *fn_801C1524(){return fn_801CE580();}
void *fn_801C1544(void *object){
 fn_801C164C();
 return fn_8006546C(lbl_80564F78,object);
}
void *fn_801C157C(){
 if(!lbl_80564F78 || !(reinterpret_cast<unsigned int *>(lbl_80564F78)[0x24/4]&4)) fn_801C164C();
 return lbl_80564F78;
}
}
#pragma pop
