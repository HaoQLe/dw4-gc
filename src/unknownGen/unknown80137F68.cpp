#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igCBBox_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igCBBoxList_className[];
extern char igCBBox_vtable[];
extern char igCBBoxList_vtable[];
extern char lbl_804AA4F0[];
extern char lbl_8055F6D4[8];
extern char lbl_8055F6DC[8];
extern void *lbl_805621F4;
extern void *igCBBoxList_meta;
extern void *igCBBox_meta;
void *igCBBoxList_getMeta();
void *igCBBoxList_vtableRead();
void igCBBoxList_registerNow();
void igCBBoxList_register();
void *igCBBoxList_getMetaCall();
void *igCBBox_getMeta();
void *igCBBox_vtableRead();
void igCBBox_registerNow();
void igCBBox_register();
void *igCBBox_getMetaCall();
}
struct UnknownGenObject80137FE0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80138178_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80137F68(){
 if(!igCBBoxList_meta) igCBBoxList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCBBoxList_meta;
}
void *igCBBoxList_getMeta(){
 if(!igCBBoxList_meta || !(reinterpret_cast<unsigned int *>(igCBBoxList_meta)[0x24/4]&4)) igCBBoxList_registerNow();
 return igCBBoxList_meta;
}
void *igCBBoxList_vtableRead(){
 UnknownGenObject80137FE0_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804AA4F0;
 object.unknown00=igCBBoxList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCBBoxList_registerNow(){
 meta_registerNow((int)igCBBoxList_register);
}
void igCBBoxList_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCBBoxList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igCBBoxList_getMetaCall,(int)igCBBoxList_className,20,(int)igCBBoxList_vtableRead,0,0,(int)lbl_8055F6D4);
}
void *igCBBoxList_getMetaCall(){return igCBBoxList_getMeta();}
void *igCBBox_create(void *object){
 igCBBox_registerNow();
 return meta_createInstance(igCBBox_meta,object);
}
void *igCBBox_getMeta(){
 if(!igCBBox_meta || !(reinterpret_cast<unsigned int *>(igCBBox_meta)[0x24/4]&4)) igCBBox_registerNow();
 return igCBBox_meta;
}
void *igCBBox_vtableRead(){
 UnknownGenObject80138178_0 object;
 fn_8006665C(&object);
 object.unknown00=igCBBox_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCBBox_registerNow(){
 meta_registerNow((int)igCBBox_register);
}
void igCBBox_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCBBox_meta,(int)igObject_register,(int)fn_800237D0,(int)igCBBox_getMetaCall,(int)lbl_8055F6DC,24,(int)igCBBox_vtableRead,(int)igCBBox_fieldInit,0,0);
}
void *igCBBox_getMetaCall(){return igCBBox_getMeta();}
}
#pragma pop
