#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBinDataObject_register();
void *beCriAcxData_getMeta();
void beCriAcxData_vtableRead();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802DEA84();
void fn_802E001C();
extern char lbl_80420998[];
extern char lbl_80535580[];
extern void *lbl_80535584;
extern void *lbl_805621F4;
void beCriAcxData_register();
void *beCriAcxData_getMetaCall();
}
extern "C" {
void fn_802DFC3C(){
 fn_80066188((int)beCriAcxData_register);
}
void beCriAcxData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535580,(int)beBinDataObject_register,(int)fn_802DEA84,(int)beCriAcxData_getMetaCall,(int)lbl_80420998,24,(int)beCriAcxData_vtableRead,0,0,0);
}
void *beCriAcxData_getMetaCall(){return beCriAcxData_getMeta();}
void *fn_802DFCF0(void *object){
 fn_802E001C();
 return fn_8006546C(lbl_80535584,object);
}
void *fn_802DFD30(){
 if(!lbl_80535584) lbl_80535584=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535584;
}
void *beCri_getMeta(){
 if(!lbl_80535584 || !(reinterpret_cast<unsigned int *>(lbl_80535584)[0x24/4]&4)) fn_802E001C();
 return lbl_80535584;
}
}
#pragma pop
