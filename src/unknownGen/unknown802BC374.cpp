#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatBaseData_register();
void *beSvPlatDataPC_getMeta();
void beSvPlatDataPC_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC428();
extern char lbl_8041DC74[];
extern char lbl_8053483C[];
void beSvPlatDataPC_register();
void *beSvPlatDataPC_getMetaCall();
}
extern "C" {
void fn_802BC374(){
 fn_80066188((int)beSvPlatDataPC_register);
}
void beSvPlatDataPC_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053483C,(int)beSvPlatBaseData_register,(int)fn_802BC428,(int)beSvPlatDataPC_getMetaCall,(int)lbl_8041DC74,24,(int)beSvPlatDataPC_vtableRead,0,0,0);
}
void *beSvPlatDataPC_getMetaCall(){return beSvPlatDataPC_getMeta();}
}
#pragma pop
