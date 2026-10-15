#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDCC8();
void igPixelShaderAttr_fieldInit();
void igVisualAttribute_register();
extern char igPolygonModeAttr_className[];
extern char igPointSpriteSizeAttr_className[];
extern char igPixelShaderBindAttr_className[];
extern char igPixelShaderAttr_dependencies[];
extern char igPixelShaderAttr_className[];
extern char igPolygonModeAttr_vtable[];
extern char igPointSpriteSizeAttr_vtable[];
extern char igPixelShaderBindAttr_vtable[];
extern char igPixelShaderAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igPolygonModeAttr_fieldTypes[4];
extern char igPolygonModeAttr_fieldNames[4];
extern char igPolygonModeAttr_fieldStorage[4];
extern char igPolygonModeAttr_fieldOffsets[4];
extern char lbl_8055E284[4];
extern char igPointSpriteSizeAttr_fieldTypes[4];
extern char igPointSpriteSizeAttr_fieldNames[4];
extern char igPointSpriteSizeAttr_fieldStorage[4];
extern char igPointSpriteSizeAttr_fieldOffsets[4];
extern char igPixelShaderBindAttr_dependencies[8];
extern char igPixelShaderBindAttr_fieldTypes[4];
extern char igPixelShaderBindAttr_fieldNames[4];
extern char igPixelShaderBindAttr_fieldStorage[4];
extern char igPixelShaderBindAttr_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igPolygonModeAttr_meta;
extern void *igPointSpriteSizeAttr_meta;
extern void *igPixelShaderBindAttr_meta;
extern void *igPixelShaderAttr_meta;
extern char lbl_80566818[4];
void *igPolygonModeAttr_getMeta();
void *igPolygonModeAttr_vtableRead();
void igPolygonModeAttr_arkRegister();
void igPolygonModeAttr_register();
void *igPolygonModeAttr_getMetaCall();
void igPolygonModeAttr_fieldInit();
void *igPointSpriteSizeAttr_getMeta();
void *igPointSpriteSizeAttr_vtableRead();
void igPointSpriteSizeAttr_arkRegister();
void igPointSpriteSizeAttr_register();
void *igPointSpriteSizeAttr_getMetaCall();
void igPointSpriteSizeAttr_fieldInit();
void *igPixelShaderBindAttr_getMeta();
void *igPixelShaderBindAttr_vtableRead();
void igPixelShaderBindAttr_arkRegister();
void igPixelShaderBindAttr_register();
void *igPixelShaderBindAttr_getMetaCall();
void igPixelShaderBindAttr_fieldInit();
void *fn_800B2678();
void *igPixelShaderAttr_getMeta();
void *igPixelShaderAttr_vtableRead();
void igPixelShaderAttr_arkRegister();
void igPixelShaderAttr_register();
void *igPixelShaderAttr_getMetaCall();
}
struct UnknownGenObject800B20FC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B22D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B249C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B249C(){igObject_construct(this);}
};
struct UnknownGenObject800B249C : UnknownGenRoot800B249C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B249C(){unknown00=igPixelShaderBindAttr_vtable;}
};
struct UnknownGenRoot800B26F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B26F0(){igObject_construct(this);}
};
struct UnknownGenObject800B26F0 : UnknownGenRoot800B26F0 {
 char unknown04[24];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B26F0(){unknown00=igPixelShaderAttr_vtable;}
};
extern "C" {
void *fn_800B2084(){
 if(!igPolygonModeAttr_meta) igPolygonModeAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPolygonModeAttr_meta;
}
void *igPolygonModeAttr_getMeta(){
 if(!igPolygonModeAttr_meta || !(reinterpret_cast<unsigned int *>(igPolygonModeAttr_meta)[0x24/4]&4)) igPolygonModeAttr_arkRegister();
 return igPolygonModeAttr_meta;
}
void *igPolygonModeAttr_vtableRead(){
 UnknownGenObject800B20FC_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igPolygonModeAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPolygonModeAttr_arkRegister(){
 meta_registerNow((int)igPolygonModeAttr_register);
}
void igPolygonModeAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igPolygonModeAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPolygonModeAttr_getMetaCall,(int)igPolygonModeAttr_className,16,(int)igPolygonModeAttr_vtableRead,(int)igPolygonModeAttr_fieldInit,0,0);
}
void *igPolygonModeAttr_getMetaCall(){return igPolygonModeAttr_getMeta();}
void igPolygonModeAttr_fieldInit(){
 void *value0=igPolygonModeAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igPolygonModeAttr_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 fn_80046E58(value2,lbl_8055E284);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDCC8;
 meta_setupFields(value0,igPolygonModeAttr_fieldNames,igPolygonModeAttr_fieldStorage,igPolygonModeAttr_fieldOffsets,value1);
}
void *igPointSpriteSizeAttr_getMeta(){
 if(!igPointSpriteSizeAttr_meta || !(reinterpret_cast<unsigned int *>(igPointSpriteSizeAttr_meta)[0x24/4]&4)) igPointSpriteSizeAttr_arkRegister();
 return igPointSpriteSizeAttr_meta;
}
void *igPointSpriteSizeAttr_vtableRead(){
 UnknownGenObject800B22D4_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igPointSpriteSizeAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPointSpriteSizeAttr_arkRegister(){
 meta_registerNow((int)igPointSpriteSizeAttr_register);
}
void igPointSpriteSizeAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igPointSpriteSizeAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPointSpriteSizeAttr_getMetaCall,(int)igPointSpriteSizeAttr_className,16,(int)igPointSpriteSizeAttr_vtableRead,(int)igPointSpriteSizeAttr_fieldInit,0,0);
}
void *igPointSpriteSizeAttr_getMetaCall(){return igPointSpriteSizeAttr_getMeta();}
void igPointSpriteSizeAttr_fieldInit(){
 void *value0=igPointSpriteSizeAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igPointSpriteSizeAttr_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_80566818+0)));
 meta_setupFields(value0,igPointSpriteSizeAttr_fieldNames,igPointSpriteSizeAttr_fieldStorage,igPointSpriteSizeAttr_fieldOffsets,value1);
}
void *igPixelShaderBindAttr_getMeta(){
 if(!igPixelShaderBindAttr_meta || !(reinterpret_cast<unsigned int *>(igPixelShaderBindAttr_meta)[0x24/4]&4)) igPixelShaderBindAttr_arkRegister();
 return igPixelShaderBindAttr_meta;
}
void *igPixelShaderBindAttr_vtableRead(){
 UnknownGenObject800B249C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igPixelShaderBindAttr_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPixelShaderBindAttr_arkRegister(){
 meta_registerNow((int)igPixelShaderBindAttr_register);
}
void igPixelShaderBindAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igPixelShaderBindAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPixelShaderBindAttr_getMetaCall,(int)igPixelShaderBindAttr_className,16,(int)igPixelShaderBindAttr_vtableRead,(int)igPixelShaderBindAttr_fieldInit,0,(int)igPixelShaderBindAttr_dependencies);
}
void *igPixelShaderBindAttr_getMetaCall(){return igPixelShaderBindAttr_getMeta();}
void igPixelShaderBindAttr_fieldInit(){
 void *value0=igPixelShaderBindAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igPixelShaderBindAttr_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800B2678();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igPixelShaderBindAttr_fieldNames,igPixelShaderBindAttr_fieldStorage,igPixelShaderBindAttr_fieldOffsets,value1);
}
void *fn_800B2678(){
 if(!igPixelShaderAttr_meta) igPixelShaderAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igPixelShaderAttr_meta;
}
void *igPixelShaderAttr_getMeta(){
 if(!igPixelShaderAttr_meta || !(reinterpret_cast<unsigned int *>(igPixelShaderAttr_meta)[0x24/4]&4)) igPixelShaderAttr_arkRegister();
 return igPixelShaderAttr_meta;
}
void *igPixelShaderAttr_vtableRead(){
 UnknownGenObject800B26F0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igPixelShaderAttr_vtable;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPixelShaderAttr_arkRegister(){
 meta_registerNow((int)igPixelShaderAttr_register);
}
void igPixelShaderAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igPixelShaderAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPixelShaderAttr_getMetaCall,(int)igPixelShaderAttr_className,52,(int)igPixelShaderAttr_vtableRead,(int)igPixelShaderAttr_fieldInit,0,(int)igPixelShaderAttr_dependencies);
}
void *igPixelShaderAttr_getMetaCall(){return igPixelShaderAttr_getMeta();}
}
#pragma pop
