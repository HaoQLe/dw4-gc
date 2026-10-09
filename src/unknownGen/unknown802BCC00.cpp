#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatBaseData_register();
void beSvPlatDataPS2_fieldInit();
void *beSvPlatDataPS2_getMeta();
void beSvPlatDataPS2_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC428();
extern char lbl_8041DCEC[];
extern char lbl_804CF96C[];
extern char lbl_80534864[];
void beSvPlatDataPS2_register();
void *beSvPlatDataPS2_getMetaCall();
}
extern "C" {
void fn_802BCC00(){
 fn_80066188((int)beSvPlatDataPS2_register);
}
void beSvPlatDataPS2_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534864,(int)beSvPlatBaseData_register,(int)fn_802BC428,(int)beSvPlatDataPS2_getMetaCall,(int)lbl_8041DCEC,216,(int)beSvPlatDataPS2_vtableRead,(int)beSvPlatDataPS2_fieldInit,0,(int)lbl_804CF96C);
}
void *beSvPlatDataPS2_getMetaCall(){return beSvPlatDataPS2_getMeta();}
}
#pragma pop
