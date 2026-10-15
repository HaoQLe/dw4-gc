#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beDataObjInt_getMeta();
void beDataObjInt_vtableRead();
void *fn_80023CF4();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beDataBaseList_registerNow();
void igNamedObject_register();
extern char beDataObjInt_className[];
extern char lbl_804D24B4[];
extern char lbl_804D24B8[];
extern char lbl_804D24BC[];
extern char lbl_804D24C0[];
extern void *beDataObjInt_meta;
extern void *beDataBaseList_meta;
void beDataObjInt_register();
void *beDataObjInt_getMetaCall();
void beDataObjInt_fieldInit();
}
extern "C" {
void beDataObjInt_registerNow(){
 meta_registerNow((int)beDataObjInt_register);
}
void beDataObjInt_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beDataObjInt_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjInt_getMetaCall,(int)beDataObjInt_className,16,(int)beDataObjInt_vtableRead,(int)beDataObjInt_fieldInit,0,0);
}
void *beDataObjInt_getMetaCall(){return beDataObjInt_getMeta();}
void beDataObjInt_fieldInit(){
 void *meta=beDataObjInt_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D24B4,0x1);
 fn_800659C0(meta,lbl_804D24B8,lbl_804D24BC,lbl_804D24C0,field);
}
void *beDataBaseList_getMeta(){
 if(!beDataBaseList_meta || !(reinterpret_cast<unsigned int *>(beDataBaseList_meta)[0x24/4]&4)) beDataBaseList_registerNow();
 return beDataBaseList_meta;
}
}
#pragma pop
