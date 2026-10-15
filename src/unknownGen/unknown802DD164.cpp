#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDataObjBool_getMeta();
void beDataObjBool_vtableRead();
void *fn_80023CF4();
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beDataObjIntList_registerNow();
void igNamedObject_register();
extern char beDataObjBool_className[];
extern char lbl_804D248C[];
extern char lbl_804D2490[];
extern char lbl_804D2494[];
extern char lbl_804D2498[];
extern void *beDataObjBool_meta;
extern void *beDataObjIntList_meta;
void beDataObjBool_register();
void *beDataObjBool_getMetaCall();
void beDataObjBool_fieldInit();
}
extern "C" {
void beDataObjBool_registerNow(){
 meta_registerNow((int)beDataObjBool_register);
}
void beDataObjBool_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beDataObjBool_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjBool_getMetaCall,(int)beDataObjBool_className,16,(int)beDataObjBool_vtableRead,(int)beDataObjBool_fieldInit,0,0);
}
void *beDataObjBool_getMetaCall(){return beDataObjBool_getMeta();}
void beDataObjBool_fieldInit(){
 void *meta=beDataObjBool_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D248C,0x1);
 fn_800659C0(meta,lbl_804D2490,lbl_804D2494,lbl_804D2498,field);
}
void *beDataObjIntList_create(void *object){
 beDataObjIntList_registerNow();
 return meta_createInstance(beDataObjIntList_meta,object);
}
void *beDataObjIntList_getMeta(){
 if(!beDataObjIntList_meta || !(reinterpret_cast<unsigned int *>(beDataObjIntList_meta)[0x24/4]&4)) beDataObjIntList_registerNow();
 return beDataObjIntList_meta;
}
}
#pragma pop
