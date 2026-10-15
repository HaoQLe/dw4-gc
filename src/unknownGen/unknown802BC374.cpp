#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatBaseData_register();
void *beSvPlatDataPC_getMeta();
void beSvPlatDataPC_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BC428();
extern char beSvPlatDataPC_className[];
extern char beSvPlatDataPC_meta[];
void beSvPlatDataPC_register();
void *beSvPlatDataPC_getMetaCall();
}
extern "C" {
void beSvPlatDataPC_registerNow(){
 meta_registerNow((int)beSvPlatDataPC_register);
}
void beSvPlatDataPC_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSvPlatDataPC_meta,(int)beSvPlatBaseData_register,(int)fn_802BC428,(int)beSvPlatDataPC_getMetaCall,(int)beSvPlatDataPC_className,24,(int)beSvPlatDataPC_vtableRead,0,0,0);
}
void *beSvPlatDataPC_getMetaCall(){return beSvPlatDataPC_getMeta();}
}
#pragma pop
