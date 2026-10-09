#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDataObjList_getMeta();
void beDataObjList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802DC37C();
void igObjectList_register();
extern char lbl_804205D4[];
extern char lbl_804D2414[];
extern char lbl_8053543C[];
extern void *lbl_80535440;
void beDataObjList_register();
void *beDataObjList_getMetaCall();
}
extern "C" {
void fn_802DC150(){
 fn_80066188((int)beDataObjList_register);
}
void beDataObjList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053543C,(int)igObjectList_register,(int)fn_80024180,(int)beDataObjList_getMetaCall,(int)lbl_804205D4,20,(int)beDataObjList_vtableRead,0,0,(int)lbl_804D2414);
}
void *beDataObjList_getMetaCall(){return beDataObjList_getMeta();}
void *fn_802DC20C(void *object){
 fn_802DC37C();
 return fn_8006546C(lbl_80535440,object);
}
void *beDataObjFloatList_getMeta(){
 if(!lbl_80535440 || !(reinterpret_cast<unsigned int *>(lbl_80535440)[0x24/4]&4)) fn_802DC37C();
 return lbl_80535440;
}
}
#pragma pop
