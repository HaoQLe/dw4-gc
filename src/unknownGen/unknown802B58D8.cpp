#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTimer_fieldInit();
void *beTimer_getMeta();
void beTimer_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char beTimer_className[];
extern char lbl_804CF0DC[];
extern char beTimer_meta[];
void beTimer_register();
void *beTimer_getMetaCall();
}
extern "C" {
void beTimer_registerNow(){
 meta_registerNow((int)beTimer_register);
}
void beTimer_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beTimer_meta,(int)igInfoManager_register,(int)fn_80284550,(int)beTimer_getMetaCall,(int)beTimer_className,40,(int)beTimer_vtableRead,(int)beTimer_fieldInit,0,(int)lbl_804CF0DC);
}
void *beTimer_getMetaCall(){return beTimer_getMeta();}
}
#pragma pop
