#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beDemoManagerWork_fieldInit();
void *beDemoManagerWork_getMeta();
void beDemoManagerWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_80420560[];
extern char lbl_804D236C[];
extern char lbl_80535408[];
void beDemoManagerWork_register();
void *beDemoManagerWork_getMetaCall();
}
extern "C" {
void fn_802DB798(){
 fn_80066188((int)beDemoManagerWork_register);
}
void beDemoManagerWork_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535408,(int)igObject_register,(int)fn_800237D0,(int)beDemoManagerWork_getMetaCall,(int)lbl_80420560,16,(int)beDemoManagerWork_vtableRead,(int)beDemoManagerWork_fieldInit,0,(int)lbl_804D236C);
}
void *beDemoManagerWork_getMetaCall(){return beDemoManagerWork_getMeta();}
}
#pragma pop
