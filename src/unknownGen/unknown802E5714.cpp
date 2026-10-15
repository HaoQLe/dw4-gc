#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beAction2InfoWork_fieldInit();
void *beAction2InfoWork_getMeta();
void beAction2InfoWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beAction2InfoWork_className[];
extern char lbl_804D2F04[];
extern char beAction2InfoWork_meta[];
void beAction2InfoWork_register();
void *beAction2InfoWork_getMetaCall();
}
extern "C" {
void beAction2InfoWork_registerNow(){
 meta_registerNow((int)beAction2InfoWork_register);
}
void beAction2InfoWork_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beAction2InfoWork_meta,(int)igObject_register,(int)fn_800237D0,(int)beAction2InfoWork_getMetaCall,(int)beAction2InfoWork_className,96,(int)beAction2InfoWork_vtableRead,(int)beAction2InfoWork_fieldInit,0,(int)lbl_804D2F04);
}
void *beAction2InfoWork_getMetaCall(){return beAction2InfoWork_getMeta();}
}
#pragma pop
