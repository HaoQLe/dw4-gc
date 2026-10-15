#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDemoManagerWork_fieldInit();
void *beDemoManagerWork_getMeta();
void beDemoManagerWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beDemoManagerWork_className[];
extern char lbl_804D236C[];
extern char beDemoManagerWork_meta[];
void beDemoManagerWork_register();
void *beDemoManagerWork_getMetaCall();
}
extern "C" {
void beDemoManagerWork_registerNow(){
 meta_registerNow((int)beDemoManagerWork_register);
}
void beDemoManagerWork_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beDemoManagerWork_meta,(int)igObject_register,(int)fn_800237D0,(int)beDemoManagerWork_getMetaCall,(int)beDemoManagerWork_className,16,(int)beDemoManagerWork_vtableRead,(int)beDemoManagerWork_fieldInit,0,(int)lbl_804D236C);
}
void *beDemoManagerWork_getMetaCall(){return beDemoManagerWork_getMeta();}
}
#pragma pop
