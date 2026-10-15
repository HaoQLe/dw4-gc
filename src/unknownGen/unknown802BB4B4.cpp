#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beSeData_getMeta();
void beSeData_vtableRead();
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beSeCtl_registerNow();
void igNamedObject_register();
extern char beSeData_className[];
extern char lbl_804CF7E8[];
extern char lbl_804CF7F0[];
extern char lbl_804CF7F8[];
extern char lbl_804CF800[];
extern void *beSeData_meta;
extern void *beSeCtl_meta;
extern void *lbl_805621F4;
void beSeData_register();
void *beSeData_getMetaCall();
void beSeData_fieldInit();
}
extern "C" {
void beSeData_registerNow(){
 meta_registerNow((int)beSeData_register);
}
void beSeData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beSeData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beSeData_getMetaCall,(int)beSeData_className,20,(int)beSeData_vtableRead,(int)beSeData_fieldInit,0,0);
}
void *beSeData_getMetaCall(){return beSeData_getMeta();}
void beSeData_fieldInit(){
 void *meta=beSeData_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CF7E8,0x2);
 fn_800659C0(meta,lbl_804CF7F0,lbl_804CF7F8,lbl_804CF800,field);
}
void *beSeCtl_create(void *object){
 beSeCtl_registerNow();
 return meta_createInstance(beSeCtl_meta,object);
}
void *beSeCtl_metaObject(){
 if(!beSeCtl_meta) beSeCtl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSeCtl_meta;
}
void *beSeCtl_getMeta(){
 if(!beSeCtl_meta || !(reinterpret_cast<unsigned int *>(beSeCtl_meta)[0x24/4]&4)) beSeCtl_registerNow();
 return beSeCtl_meta;
}
}
#pragma pop
