#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGeneraterItemDataOne_getMeta();
void beGeneraterItemDataOne_vtableRead();
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beGenerater_registerNow();
void igNamedObject_register();
extern char lbl_8041CA68[];
extern char beGeneraterItemDataOne_className[];
extern char lbl_804D1F00[];
extern char lbl_804D1F0C[];
extern char lbl_804D1F18[];
extern char lbl_804D1F24[];
extern char lbl_804D1F30[];
extern char lbl_804D1F50[];
extern void *beGeneraterItemDataOne_meta;
extern void *lbl_80535300;
extern void *beGenerater_meta;
extern void *lbl_805621F4;
void beGeneraterItemDataOne_register();
void *beGeneraterItemDataOne_getMetaCall();
void beGeneraterItemDataOne_fieldInit();
}
extern "C" {
void beGeneraterItemDataOne_registerNow(){
 meta_registerNow((int)beGeneraterItemDataOne_register);
}
void beGeneraterItemDataOne_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beGeneraterItemDataOne_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beGeneraterItemDataOne_getMetaCall,(int)beGeneraterItemDataOne_className,24,(int)beGeneraterItemDataOne_vtableRead,(int)beGeneraterItemDataOne_fieldInit,0,0);
}
void *beGeneraterItemDataOne_getMetaCall(){return beGeneraterItemDataOne_getMeta();}
void beGeneraterItemDataOne_fieldInit(){
 void *meta=beGeneraterItemDataOne_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1F00,0x3);
 fn_800659C0(meta,lbl_804D1F0C,lbl_804D1F18,lbl_804D1F24,field);
}
void *fn_802D8620(){
 if(!lbl_80535300) lbl_80535300=fn_800635C8(lbl_8041CA68,lbl_804D1F30,lbl_804D1F50,0x8);
 return lbl_80535300;
}
void *beGenerater_create(void *object){
 beGenerater_registerNow();
 return meta_createInstance(beGenerater_meta,object);
}
void *beGenerater_metaObject(){
 if(!beGenerater_meta) beGenerater_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beGenerater_meta;
}
void *beGenerater_getMeta(){
 if(!beGenerater_meta || !(reinterpret_cast<unsigned int *>(beGenerater_meta)[0x24/4]&4)) beGenerater_registerNow();
 return beGenerater_meta;
}
}
#pragma pop
