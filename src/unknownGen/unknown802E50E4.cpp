#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beActionStarterData_getMeta();
void beActionStarterData_vtableRead();
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
void beActionStarter_registerNow();
void igNamedObject_register();
extern char beActionStarterData_className[];
extern char lbl_804D2EB4[];
extern char lbl_804D2EC8[];
extern char lbl_804D2EDC[];
extern char lbl_804D2EF0[];
extern void *beActionStarterData_meta;
extern void *beActionStarter_meta;
extern void *lbl_805621F4;
void beActionStarterData_register();
void *beActionStarterData_getMetaCall();
void beActionStarterData_fieldInit();
}
extern "C" {
void beActionStarterData_registerNow(){
 meta_registerNow((int)beActionStarterData_register);
}
void beActionStarterData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beActionStarterData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beActionStarterData_getMetaCall,(int)beActionStarterData_className,36,(int)beActionStarterData_vtableRead,(int)beActionStarterData_fieldInit,0,0);
}
void *beActionStarterData_getMetaCall(){return beActionStarterData_getMeta();}
void beActionStarterData_fieldInit(){
 void *meta=beActionStarterData_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2EB4,0x5);
 fn_800659C0(meta,lbl_804D2EC8,lbl_804D2EDC,lbl_804D2EF0,field);
}
void *beActionStarter_create(void *object){
 beActionStarter_registerNow();
 return meta_createInstance(beActionStarter_meta,object);
}
void *beActionStarter_metaObject(){
 if(!beActionStarter_meta) beActionStarter_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beActionStarter_meta;
}
void *beActionStarter_getMeta(){
 if(!beActionStarter_meta || !(reinterpret_cast<unsigned int *>(beActionStarter_meta)[0x24/4]&4)) beActionStarter_registerNow();
 return beActionStarter_meta;
}
}
#pragma pop
