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
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802DD8F4();
void igNamedObject_register();
extern char lbl_80420668[];
extern char lbl_804D24B4[];
extern char lbl_804D24B8[];
extern char lbl_804D24BC[];
extern char lbl_804D24C0[];
extern void *lbl_80535478;
extern void *lbl_80535480;
void beDataObjInt_register();
void *beDataObjInt_getMetaCall();
void beDataObjInt_fieldInit();
}
extern "C" {
void fn_802DD6F8(){
 fn_80066188((int)beDataObjInt_register);
}
void beDataObjInt_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80535478,(int)igNamedObject_register,(int)fn_80023CF4,(int)beDataObjInt_getMetaCall,(int)lbl_80420668,16,(int)beDataObjInt_vtableRead,(int)beDataObjInt_fieldInit,0,0);
}
void *beDataObjInt_getMetaCall(){return beDataObjInt_getMeta();}
void beDataObjInt_fieldInit(){
 void *meta=lbl_80535478;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D24B4,0x1);
 fn_800659C0(meta,lbl_804D24B8,lbl_804D24BC,lbl_804D24C0,field);
}
void *beDataBaseList_getMeta(){
 if(!lbl_80535480 || !(reinterpret_cast<unsigned int *>(lbl_80535480)[0x24/4]&4)) fn_802DD8F4();
 return lbl_80535480;
}
}
#pragma pop
