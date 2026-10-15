#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80075874(void *,int);
void fn_800ABC8C();
void *fn_800AC0B8();
void *fn_800AC294();
void *fn_800BB448();
void fn_800CDD14();
void *fn_800CDD60();
void igAttr_register();
void igCopyRenderDestinationAttr_fieldInit();
void igVisualAttribute_register();
extern char igVisualContextAttrDefaultManager_className[];
extern char igDisplayListAttr_className[];
extern char igDestinationAlphaStateAttr_className[];
extern char igDestinationAlphaFunctionAttr_className[];
extern char igDestinationAlphaAttr_className[];
extern char igDepthWriteStateAttr_className[];
extern char igDepthStateAttr_className[];
extern char igDepthFunctionAttr_className[];
extern char igDecalAttr_className[];
extern char igCustomStateCollectionAttr_className[];
extern char igCullFaceAttr_className[];
extern char lbl_80479A18[];
extern char igCopyRenderDestinationAttr_className[];
extern char igDisplayListAttr_vtable[];
extern char igDestinationAlphaStateAttr_vtable[];
extern char igDestinationAlphaFunctionAttr_vtable[];
extern char igDestinationAlphaAttr_vtable[];
extern char igDepthWriteStateAttr_vtable[];
extern char igDepthStateAttr_vtable[];
extern char igDepthFunctionAttr_vtable[];
extern char igDecalAttr_vtable[];
extern char igCullFaceAttr_vtable[];
extern char igCopyRenderDestinationAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E4D8[8];
extern char lbl_8055E4E0[4];
extern char lbl_8055E4E4[4];
extern char lbl_8055E4E8[4];
extern char lbl_8055E4EC[4];
extern char lbl_8055E4F0[4];
extern char lbl_8055E4F4[4];
extern char lbl_8055E4F8[4];
extern char lbl_8055E4FC[4];
extern char lbl_8055E500[4];
extern char lbl_8055E504[4];
extern char lbl_8055E508[4];
extern char lbl_8055E50C[4];
extern char lbl_8055E510[8];
extern char lbl_8055E520[8];
extern char lbl_8055E528[8];
extern char lbl_8055E530[8];
extern char lbl_8055E538[4];
extern char lbl_8055E53C[4];
extern char lbl_8055E540[4];
extern char lbl_8055E544[4];
extern char lbl_8055E548[4];
extern char lbl_8055E54C[4];
extern char lbl_8055E550[4];
extern char lbl_8055E554[4];
extern char lbl_8055E558[4];
extern char lbl_8055E55C[4];
extern char lbl_8055E560[4];
extern char lbl_8055E564[4];
extern char lbl_8055E568[4];
extern char lbl_8055E56C[4];
extern char lbl_8055E570[4];
extern char lbl_8055E574[4];
extern char lbl_8055E578[4];
extern char lbl_8055E57C[8];
extern char lbl_8055E584[8];
extern char lbl_8055E58C[8];
extern char lbl_8055E594[8];
extern char lbl_8055E59C[4];
extern void *lbl_805621F4;
extern void *igDisplayListAttr_meta;
extern void *igDestinationAlphaStateAttr_meta;
extern void *igDestinationAlphaFunctionAttr_meta;
extern void *igDestinationAlphaAttr_meta;
extern void *igDepthWriteStateAttr_meta;
extern void *igDepthStateAttr_meta;
extern void *igDepthFunctionAttr_meta;
extern void *igDecalAttr_meta;
extern void *igCustomStateCollectionAttr_meta;
extern void *igCullFaceAttr_meta;
extern void *lbl_80562944;
extern void *igCopyRenderDestinationAttr_meta;
extern char lbl_80566810[4];
void *igDisplayListAttr_getMeta();
void *igDisplayListAttr_vtableRead();
void igDisplayListAttr_registerNow();
void igDisplayListAttr_register();
void *igDisplayListAttr_getMetaCall();
void igDisplayListAttr_fieldInit();
void *igDestinationAlphaStateAttr_getMeta();
void *igDestinationAlphaStateAttr_vtableRead();
void igDestinationAlphaStateAttr_registerNow();
void igDestinationAlphaStateAttr_register();
void *igDestinationAlphaStateAttr_getMetaCall();
void igDestinationAlphaStateAttr_fieldInit();
void *igDestinationAlphaFunctionAttr_getMeta();
void *igDestinationAlphaFunctionAttr_vtableRead();
void igDestinationAlphaFunctionAttr_registerNow();
void igDestinationAlphaFunctionAttr_register();
void *igDestinationAlphaFunctionAttr_getMetaCall();
void igDestinationAlphaFunctionAttr_fieldInit();
void *igDestinationAlphaAttr_getMeta();
void *igDestinationAlphaAttr_vtableRead();
void igDestinationAlphaAttr_registerNow();
void igDestinationAlphaAttr_register();
void *igDestinationAlphaAttr_getMetaCall();
void igDestinationAlphaAttr_fieldInit();
void *igDepthWriteStateAttr_getMeta();
void *igDepthWriteStateAttr_vtableRead();
void igDepthWriteStateAttr_registerNow();
void igDepthWriteStateAttr_register();
void *igDepthWriteStateAttr_getMetaCall();
void igDepthWriteStateAttr_fieldInit();
void *igDepthStateAttr_getMeta();
void *igDepthStateAttr_vtableRead();
void igDepthStateAttr_registerNow();
void igDepthStateAttr_register();
void *igDepthStateAttr_getMetaCall();
void igDepthStateAttr_fieldInit();
void *igDepthFunctionAttr_getMeta();
void *igDepthFunctionAttr_vtableRead();
void igDepthFunctionAttr_registerNow();
void igDepthFunctionAttr_register();
void *igDepthFunctionAttr_getMetaCall();
void igDepthFunctionAttr_fieldInit();
void *igDecalAttr_getMeta();
void *igDecalAttr_vtableRead();
void igDecalAttr_registerNow();
void igDecalAttr_register();
void *igDecalAttr_getMetaCall();
void igDecalAttr_fieldInit();
void *igCustomStateCollectionAttr_getMeta();
void igCustomStateCollectionAttr_registerNow();
void igCustomStateCollectionAttr_register();
void *igCustomStateCollectionAttr_getMetaCall();
void *igCullFaceAttr_getMeta();
void *igCullFaceAttr_vtableRead();
void igCullFaceAttr_registerNow();
void igCullFaceAttr_register();
void *igCullFaceAttr_getMetaCall();
void igCullFaceAttr_fieldInit();
void *igCopyRenderDestinationAttr_getMeta();
void *igCopyRenderDestinationAttr_vtableRead();
void igCopyRenderDestinationAttr_registerNow();
void igCopyRenderDestinationAttr_register();
void *igCopyRenderDestinationAttr_getMetaCall();
}
struct UnknownGenRoot800B7988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B7988(){igObject_construct(this);}
};
struct UnknownGenObject800B7988 : UnknownGenRoot800B7988 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B7988(){unknown00=igDisplayListAttr_vtable;}
};
struct UnknownGenObject800B7B9C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7D64_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7F2C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8130_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8330_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B84F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B86D0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B89E0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B8C40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B8C40(){igObject_construct(this);}
};
struct UnknownGenObject800B8C40 : UnknownGenRoot800B8C40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 inline ~UnknownGenObject800B8C40(){unknown00=igCopyRenderDestinationAttr_vtable;}
};
extern "C" {
void *igDisplayListAttr_create(void *object){
 igDisplayListAttr_registerNow();
 return meta_createInstance(igDisplayListAttr_meta,object);
}
void *fn_800B7910(){
 if(!igDisplayListAttr_meta) igDisplayListAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDisplayListAttr_meta;
}
void *igDisplayListAttr_getMeta(){
 if(!igDisplayListAttr_meta || !(reinterpret_cast<unsigned int *>(igDisplayListAttr_meta)[0x24/4]&4)) igDisplayListAttr_registerNow();
 return igDisplayListAttr_meta;
}
void *igDisplayListAttr_vtableRead(){
 UnknownGenObject800B7988 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=igDisplayListAttr_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDisplayListAttr_registerNow(){
 meta_registerNow((int)igDisplayListAttr_register);
}
void igDisplayListAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igDisplayListAttr_meta,(int)igAttr_register,(int)fn_800AC0B8,(int)igDisplayListAttr_getMetaCall,(int)igDisplayListAttr_className,16,(int)igDisplayListAttr_vtableRead,(int)igDisplayListAttr_fieldInit,0,(int)lbl_8055E4D8);
}
void *igDisplayListAttr_getMetaCall(){return igDisplayListAttr_getMeta();}
void igDisplayListAttr_fieldInit(){
 void *value0=igDisplayListAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E4E0,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800BB448();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_8055E4E4,lbl_8055E4E8,lbl_8055E4EC,value1);
}
void *igDestinationAlphaStateAttr_getMeta(){
 if(!igDestinationAlphaStateAttr_meta || !(reinterpret_cast<unsigned int *>(igDestinationAlphaStateAttr_meta)[0x24/4]&4)) igDestinationAlphaStateAttr_registerNow();
 return igDestinationAlphaStateAttr_meta;
}
void *igDestinationAlphaStateAttr_vtableRead(){
 UnknownGenObject800B7B9C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igDestinationAlphaStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDestinationAlphaStateAttr_registerNow(){
 meta_registerNow((int)igDestinationAlphaStateAttr_register);
}
void igDestinationAlphaStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igDestinationAlphaStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igDestinationAlphaStateAttr_getMetaCall,(int)igDestinationAlphaStateAttr_className,16,(int)igDestinationAlphaStateAttr_vtableRead,(int)igDestinationAlphaStateAttr_fieldInit,0,0);
}
void *igDestinationAlphaStateAttr_getMetaCall(){return igDestinationAlphaStateAttr_getMeta();}
void igDestinationAlphaStateAttr_fieldInit(){
 void *meta=igDestinationAlphaStateAttr_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055E4F0,1);
 fn_8003EC68(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055E4F4,lbl_8055E4F8,lbl_8055E4FC,field);
}
void *igDestinationAlphaFunctionAttr_getMeta(){
 if(!igDestinationAlphaFunctionAttr_meta || !(reinterpret_cast<unsigned int *>(igDestinationAlphaFunctionAttr_meta)[0x24/4]&4)) igDestinationAlphaFunctionAttr_registerNow();
 return igDestinationAlphaFunctionAttr_meta;
}
void *igDestinationAlphaFunctionAttr_vtableRead(){
 UnknownGenObject800B7D64_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igDestinationAlphaFunctionAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDestinationAlphaFunctionAttr_registerNow(){
 meta_registerNow((int)igDestinationAlphaFunctionAttr_register);
}
void igDestinationAlphaFunctionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igDestinationAlphaFunctionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igDestinationAlphaFunctionAttr_getMetaCall,(int)igDestinationAlphaFunctionAttr_className,16,(int)igDestinationAlphaFunctionAttr_vtableRead,(int)igDestinationAlphaFunctionAttr_fieldInit,0,0);
}
void *igDestinationAlphaFunctionAttr_getMetaCall(){return igDestinationAlphaFunctionAttr_getMeta();}
void igDestinationAlphaFunctionAttr_fieldInit(){
 void *value0=igDestinationAlphaFunctionAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E500,1);
 void *value2=meta_field(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_80566810+0)));
 meta_setupFields(value0,lbl_8055E504,lbl_8055E508,lbl_8055E50C,value1);
}
void *igDestinationAlphaAttr_getMeta(){
 if(!igDestinationAlphaAttr_meta || !(reinterpret_cast<unsigned int *>(igDestinationAlphaAttr_meta)[0x24/4]&4)) igDestinationAlphaAttr_registerNow();
 return igDestinationAlphaAttr_meta;
}
void *igDestinationAlphaAttr_vtableRead(){
 UnknownGenObject800B7F2C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igDestinationAlphaAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDestinationAlphaAttr_registerNow(){
 meta_registerNow((int)igDestinationAlphaAttr_register);
}
void igDestinationAlphaAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igDestinationAlphaAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igDestinationAlphaAttr_getMetaCall,(int)igDestinationAlphaAttr_className,16,(int)igDestinationAlphaAttr_vtableRead,(int)igDestinationAlphaAttr_fieldInit,0,0);
}
void *igDestinationAlphaAttr_getMetaCall(){return igDestinationAlphaAttr_getMeta();}
void igDestinationAlphaAttr_fieldInit(){
 void *value0=igDestinationAlphaAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E510,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80075874(value2,255);
 meta_setupFields(value0,lbl_8055E520,lbl_8055E528,lbl_8055E530,value1);
}
void *fn_800B80B8(){
 if(!igDepthWriteStateAttr_meta) igDepthWriteStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDepthWriteStateAttr_meta;
}
void *igDepthWriteStateAttr_getMeta(){
 if(!igDepthWriteStateAttr_meta || !(reinterpret_cast<unsigned int *>(igDepthWriteStateAttr_meta)[0x24/4]&4)) igDepthWriteStateAttr_registerNow();
 return igDepthWriteStateAttr_meta;
}
void *igDepthWriteStateAttr_vtableRead(){
 UnknownGenObject800B8130_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igDepthWriteStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDepthWriteStateAttr_registerNow(){
 meta_registerNow((int)igDepthWriteStateAttr_register);
}
void igDepthWriteStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igDepthWriteStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igDepthWriteStateAttr_getMetaCall,(int)igDepthWriteStateAttr_className,16,(int)igDepthWriteStateAttr_vtableRead,(int)igDepthWriteStateAttr_fieldInit,0,0);
}
void *igDepthWriteStateAttr_getMetaCall(){return igDepthWriteStateAttr_getMeta();}
void igDepthWriteStateAttr_fieldInit(){
 void *meta=igDepthWriteStateAttr_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055E538,1);
 fn_8003EC68(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055E53C,lbl_8055E540,lbl_8055E544,field);
}
void *igDepthStateAttr_create(void *object){
 igDepthStateAttr_registerNow();
 return meta_createInstance(igDepthStateAttr_meta,object);
}
void *igDepthStateAttr_getMeta(){
 if(!igDepthStateAttr_meta || !(reinterpret_cast<unsigned int *>(igDepthStateAttr_meta)[0x24/4]&4)) igDepthStateAttr_registerNow();
 return igDepthStateAttr_meta;
}
void *igDepthStateAttr_vtableRead(){
 UnknownGenObject800B8330_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igDepthStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDepthStateAttr_registerNow(){
 meta_registerNow((int)igDepthStateAttr_register);
}
void igDepthStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igDepthStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igDepthStateAttr_getMetaCall,(int)igDepthStateAttr_className,16,(int)igDepthStateAttr_vtableRead,(int)igDepthStateAttr_fieldInit,0,0);
}
void *igDepthStateAttr_getMetaCall(){return igDepthStateAttr_getMeta();}
void igDepthStateAttr_fieldInit(){
 void *meta=igDepthStateAttr_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_8055E548,1);
 fn_8003EC68(meta_field(meta,field),1);
 meta_setupFields(meta,lbl_8055E54C,lbl_8055E550,lbl_8055E554,field);
}
void *igDepthFunctionAttr_getMeta(){
 if(!igDepthFunctionAttr_meta || !(reinterpret_cast<unsigned int *>(igDepthFunctionAttr_meta)[0x24/4]&4)) igDepthFunctionAttr_registerNow();
 return igDepthFunctionAttr_meta;
}
void *igDepthFunctionAttr_vtableRead(){
 UnknownGenObject800B84F8_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igDepthFunctionAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDepthFunctionAttr_registerNow(){
 meta_registerNow((int)igDepthFunctionAttr_register);
}
void igDepthFunctionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igDepthFunctionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igDepthFunctionAttr_getMetaCall,(int)igDepthFunctionAttr_className,16,(int)igDepthFunctionAttr_vtableRead,(int)igDepthFunctionAttr_fieldInit,0,0);
}
void *igDepthFunctionAttr_getMetaCall(){return igDepthFunctionAttr_getMeta();}
void igDepthFunctionAttr_fieldInit(){
 void *value0=igDepthFunctionAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E558,1);
 void *value2=meta_field(value0,value1);
 fn_80046E58(value2,lbl_8055E568);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDD14;
 meta_setupFields(value0,lbl_8055E55C,lbl_8055E560,lbl_8055E564,value1);
}
void *igDecalAttr_getMeta(){
 if(!igDecalAttr_meta || !(reinterpret_cast<unsigned int *>(igDecalAttr_meta)[0x24/4]&4)) igDecalAttr_registerNow();
 return igDecalAttr_meta;
}
void *igDecalAttr_vtableRead(){
 UnknownGenObject800B86D0_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igDecalAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDecalAttr_registerNow(){
 meta_registerNow((int)igDecalAttr_register);
}
void igDecalAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igDecalAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igDecalAttr_getMetaCall,(int)igDecalAttr_className,16,(int)igDecalAttr_vtableRead,(int)igDecalAttr_fieldInit,0,0);
}
void *igDecalAttr_getMetaCall(){return igDecalAttr_getMeta();}
void igDecalAttr_fieldInit(){
 void *value0=igDecalAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E56C,1);
 meta_setupFields(value0,lbl_8055E570,lbl_8055E574,lbl_8055E578,value1);
}
void *igCustomStateCollectionAttr_getMeta(){
 if(!igCustomStateCollectionAttr_meta || !(reinterpret_cast<unsigned int *>(igCustomStateCollectionAttr_meta)[0x24/4]&4)) igCustomStateCollectionAttr_registerNow();
 return igCustomStateCollectionAttr_meta;
}
void igCustomStateCollectionAttr_registerNow(){
 meta_registerNow((int)igCustomStateCollectionAttr_register);
}
void igCustomStateCollectionAttr_register(){
 fn_800ABC8C();
 meta_registerClass(1,(int)&igCustomStateCollectionAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igCustomStateCollectionAttr_getMetaCall,(int)igCustomStateCollectionAttr_className,12,0,0,0,0);
}
void *igCustomStateCollectionAttr_getMetaCall(){return igCustomStateCollectionAttr_getMeta();}
void *igCullFaceAttr_create(void *object){
 igCullFaceAttr_registerNow();
 return meta_createInstance(igCullFaceAttr_meta,object);
}
void *fn_800B8968(){
 if(!igCullFaceAttr_meta) igCullFaceAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCullFaceAttr_meta;
}
void *igCullFaceAttr_getMeta(){
 if(!igCullFaceAttr_meta || !(reinterpret_cast<unsigned int *>(igCullFaceAttr_meta)[0x24/4]&4)) igCullFaceAttr_registerNow();
 return igCullFaceAttr_meta;
}
void *igCullFaceAttr_vtableRead(){
 UnknownGenObject800B89E0_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igCullFaceAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCullFaceAttr_registerNow(){
 meta_registerNow((int)igCullFaceAttr_register);
}
void igCullFaceAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igCullFaceAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igCullFaceAttr_getMetaCall,(int)igCullFaceAttr_className,20,(int)igCullFaceAttr_vtableRead,(int)igCullFaceAttr_fieldInit,0,0);
}
void *igCullFaceAttr_getMetaCall(){return igCullFaceAttr_getMeta();}
void igCullFaceAttr_fieldInit(){
 void *value0=igCullFaceAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E57C,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80046E58(value2,lbl_8055E59C);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDD60;
 meta_setupFields(value0,lbl_8055E584,lbl_8055E58C,lbl_8055E594,value1);
}
void *fn_800B8B7C(){
 char *data=igVisualContextAttrDefaultManager_className;
 if(!lbl_80562944) lbl_80562944=fn_800635C8(data+0x1D04,data+0x1CDC,data+0x1CF0,0x5);
 return lbl_80562944;
}
void *fn_800B8BC8(){
 if(!igCopyRenderDestinationAttr_meta) igCopyRenderDestinationAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCopyRenderDestinationAttr_meta;
}
void *igCopyRenderDestinationAttr_getMeta(){
 if(!igCopyRenderDestinationAttr_meta || !(reinterpret_cast<unsigned int *>(igCopyRenderDestinationAttr_meta)[0x24/4]&4)) igCopyRenderDestinationAttr_registerNow();
 return igCopyRenderDestinationAttr_meta;
}
void *igCopyRenderDestinationAttr_vtableRead(){
 UnknownGenObject800B8C40 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igCopyRenderDestinationAttr_vtable;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCopyRenderDestinationAttr_registerNow(){
 meta_registerNow((int)igCopyRenderDestinationAttr_register);
}
void igCopyRenderDestinationAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igCopyRenderDestinationAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igCopyRenderDestinationAttr_getMetaCall,(int)igCopyRenderDestinationAttr_className,52,(int)igCopyRenderDestinationAttr_vtableRead,(int)igCopyRenderDestinationAttr_fieldInit,0,(int)lbl_80479A18);
}
void *igCopyRenderDestinationAttr_getMetaCall(){return igCopyRenderDestinationAttr_getMeta();}
}
#pragma pop
