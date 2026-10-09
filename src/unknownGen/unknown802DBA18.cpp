#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDemoKeepMesList_getMeta();
void beDemoKeepMesList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802DBCB0();
void igObjectList_register();
extern char lbl_80420590[];
extern char lbl_804D2394[];
extern char lbl_80535414[];
extern void *lbl_80535418;
void beDemoKeepMesList_register();
void *beDemoKeepMesList_getMetaCall();
}
extern "C" {
void fn_802DBA18(){
 fn_80066188((int)beDemoKeepMesList_register);
}
void beDemoKeepMesList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535414,(int)igObjectList_register,(int)fn_80024180,(int)beDemoKeepMesList_getMetaCall,(int)lbl_80420590,20,(int)beDemoKeepMesList_vtableRead,0,0,(int)lbl_804D2394);
}
void *beDemoKeepMesList_getMetaCall(){return beDemoKeepMesList_getMeta();}
void *fn_802DBAD4(void *object){
 fn_802DBCB0();
 return fn_8006546C(lbl_80535418,object);
}
void *beDemoKeepMes_getMeta(){
 if(!lbl_80535418 || !(reinterpret_cast<unsigned int *>(lbl_80535418)[0x24/4]&4)) fn_802DBCB0();
 return lbl_80535418;
}
}
#pragma pop
