#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800B1738();
void *fn_800CDB9C();
void *fn_800CDDA8();
void igScissorAttr_fieldInit();
void igVisualAttribute_register();
extern char igShadeModelAttr_className[];
extern char igSetRenderDestinationAttr_className[];
extern char igScissorTypeAttr_className[];
extern char igScissorAttr_className[];
extern char igShadeModelAttr_vtable[];
extern char igSetRenderDestinationAttr_vtable[];
extern char igScissorTypeAttr_vtable[];
extern char igScissorAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E170[4];
extern char lbl_8055E174[4];
extern char lbl_8055E178[4];
extern char lbl_8055E17C[4];
extern char lbl_8055E180[4];
extern char lbl_8055E184[8];
extern char lbl_8055E18C[4];
extern char lbl_8055E190[4];
extern char lbl_8055E194[4];
extern char lbl_8055E198[4];
extern char lbl_8055E19C[4];
extern char lbl_8055E1A0[4];
extern char lbl_8055E1A4[4];
extern char lbl_8055E1A8[4];
extern char lbl_8055E1AC[4];
extern void *lbl_805621F4;
extern void *igShadeModelAttr_meta;
extern void *igSetRenderDestinationAttr_meta;
extern void *igScissorTypeAttr_meta;
extern void *igScissorAttr_meta;
void *igShadeModelAttr_getMeta();
void *igShadeModelAttr_vtableRead();
void igShadeModelAttr_registerNow();
void igShadeModelAttr_register();
void *igShadeModelAttr_getMetaCall();
void igShadeModelAttr_fieldInit();
void *igSetRenderDestinationAttr_getMeta();
void *igSetRenderDestinationAttr_vtableRead();
void igSetRenderDestinationAttr_registerNow();
void igSetRenderDestinationAttr_register();
void *igSetRenderDestinationAttr_getMetaCall();
void igSetRenderDestinationAttr_fieldInit();
void *igScissorTypeAttr_getMeta();
void *igScissorTypeAttr_vtableRead();
void igScissorTypeAttr_registerNow();
void igScissorTypeAttr_register();
void *igScissorTypeAttr_getMetaCall();
void igScissorTypeAttr_fieldInit();
void *igScissorAttr_getMeta();
void *igScissorAttr_vtableRead();
void igScissorAttr_registerNow();
void igScissorAttr_register();
void *igScissorAttr_getMetaCall();
}
struct UnknownGenObject800B0A1C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B0C68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B0C68(){fn_8006665C(this);}
};
struct UnknownGenObject800B0C68 : UnknownGenRoot800B0C68 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B0C68(){unknown00=igSetRenderDestinationAttr_vtable;}
};
struct UnknownGenObject800B0E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B1058_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B09A4(){
 if(!igShadeModelAttr_meta) igShadeModelAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igShadeModelAttr_meta;
}
void *igShadeModelAttr_getMeta(){
 if(!igShadeModelAttr_meta || !(reinterpret_cast<unsigned int *>(igShadeModelAttr_meta)[0x24/4]&4)) igShadeModelAttr_registerNow();
 return igShadeModelAttr_meta;
}
void *igShadeModelAttr_vtableRead(){
 UnknownGenObject800B0A1C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igShadeModelAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igShadeModelAttr_registerNow(){
 meta_registerNow((int)igShadeModelAttr_register);
}
void igShadeModelAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igShadeModelAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igShadeModelAttr_getMetaCall,(int)igShadeModelAttr_className,16,(int)igShadeModelAttr_vtableRead,(int)igShadeModelAttr_fieldInit,0,0);
}
void *igShadeModelAttr_getMetaCall(){return igShadeModelAttr_getMeta();}
void igShadeModelAttr_fieldInit(){
 void *value0=igShadeModelAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E170,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E180);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDDA8;
 fn_800659C0(value0,lbl_8055E174,lbl_8055E178,lbl_8055E17C,value1);
}
void *igSetRenderDestinationAttr_create(void *object){
 igSetRenderDestinationAttr_registerNow();
 return meta_createInstance(igSetRenderDestinationAttr_meta,object);
}
void *fn_800B0BF0(){
 if(!igSetRenderDestinationAttr_meta) igSetRenderDestinationAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSetRenderDestinationAttr_meta;
}
void *igSetRenderDestinationAttr_getMeta(){
 if(!igSetRenderDestinationAttr_meta || !(reinterpret_cast<unsigned int *>(igSetRenderDestinationAttr_meta)[0x24/4]&4)) igSetRenderDestinationAttr_registerNow();
 return igSetRenderDestinationAttr_meta;
}
void *igSetRenderDestinationAttr_vtableRead(){
 UnknownGenObject800B0C68 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igSetRenderDestinationAttr_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSetRenderDestinationAttr_registerNow(){
 meta_registerNow((int)igSetRenderDestinationAttr_register);
}
void igSetRenderDestinationAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igSetRenderDestinationAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igSetRenderDestinationAttr_getMetaCall,(int)igSetRenderDestinationAttr_className,16,(int)igSetRenderDestinationAttr_vtableRead,(int)igSetRenderDestinationAttr_fieldInit,0,(int)lbl_8055E184);
}
void *igSetRenderDestinationAttr_getMetaCall(){return igSetRenderDestinationAttr_getMeta();}
void igSetRenderDestinationAttr_fieldInit(){
 void *value0=igSetRenderDestinationAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E18C,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800B1738();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055E190,lbl_8055E194,lbl_8055E198,value1);
}
void *igScissorTypeAttr_getMeta(){
 if(!igScissorTypeAttr_meta || !(reinterpret_cast<unsigned int *>(igScissorTypeAttr_meta)[0x24/4]&4)) igScissorTypeAttr_registerNow();
 return igScissorTypeAttr_meta;
}
void *igScissorTypeAttr_vtableRead(){
 UnknownGenObject800B0E80_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igScissorTypeAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igScissorTypeAttr_registerNow(){
 meta_registerNow((int)igScissorTypeAttr_register);
}
void igScissorTypeAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igScissorTypeAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igScissorTypeAttr_getMetaCall,(int)igScissorTypeAttr_className,16,(int)igScissorTypeAttr_vtableRead,(int)igScissorTypeAttr_fieldInit,0,0);
}
void *igScissorTypeAttr_getMetaCall(){return igScissorTypeAttr_getMeta();}
void igScissorTypeAttr_fieldInit(){
 void *value0=igScissorTypeAttr_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E19C,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E1AC);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDB9C;
 fn_800659C0(value0,lbl_8055E1A0,lbl_8055E1A4,lbl_8055E1A8,value1);
}
void *igScissorAttr_getMeta(){
 if(!igScissorAttr_meta || !(reinterpret_cast<unsigned int *>(igScissorAttr_meta)[0x24/4]&4)) igScissorAttr_registerNow();
 return igScissorAttr_meta;
}
void *igScissorAttr_vtableRead(){
 UnknownGenObject800B1058_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igScissorAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igScissorAttr_registerNow(){
 meta_registerNow((int)igScissorAttr_register);
}
void igScissorAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igScissorAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igScissorAttr_getMetaCall,(int)igScissorAttr_className,32,(int)igScissorAttr_vtableRead,(int)igScissorAttr_fieldInit,0,0);
}
void *igScissorAttr_getMetaCall(){return igScissorAttr_getMeta();}
}
#pragma pop
