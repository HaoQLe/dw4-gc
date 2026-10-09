#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDataObjBool_getMeta();
void beDataObjBool_vtableRead();
void *fn_80023CF4();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802DD410();
void igNamedObject_register();
extern char lbl_80420644[];
extern char lbl_804D248C[];
extern char lbl_804D2490[];
extern char lbl_804D2494[];
extern char lbl_804D2498[];
extern void *lbl_80535468;
extern void *lbl_80535470;
void beDataObjBool_register();
void *beDataObjBool_getMetaCall();
void beDataObjBool_fieldInit();
}
extern "C" {
void fn_802DD164(){
 fn_80066188((int)beDataObjBool_register);
}
void beDataObjBool_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80535468,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjBool_getMetaCall,(int)lbl_80420644,16,(int)beDataObjBool_vtableRead,(int)beDataObjBool_fieldInit,0,0);
}
void *beDataObjBool_getMetaCall(){return beDataObjBool_getMeta();}
void beDataObjBool_fieldInit(){
 void *meta=lbl_80535468;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D248C,0x1);
 fn_800659C0(meta,lbl_804D2490,lbl_804D2494,lbl_804D2498,field);
}
void *fn_802DD2A0(void *object){
 fn_802DD410();
 return fn_8006546C(lbl_80535470,object);
}
void *beDataObjIntList_getMeta(){
 if(!lbl_80535470 || !(reinterpret_cast<unsigned int *>(lbl_80535470)[0x24/4]&4)) fn_802DD410();
 return lbl_80535470;
}
}
#pragma pop
