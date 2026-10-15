#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void fn_800D46F0();
void igNamedObject_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igGfxShaderDefineList_className[];
extern char igGfxShaderDefine_className[];
extern char igTextureSamplerSourceList_className[];
extern char igTextureSamplerSource_className[];
extern char igTextureSamplerSource_vtable[];
extern char igTextureSamplerSourceList_vtable[];
extern char lbl_804934D4[];
extern char igGfxShaderDefine_vtable[];
extern char igGfxShaderDefineList_vtable[];
extern char lbl_804935F8[];
extern char lbl_8055EC78[8];
extern char lbl_8055EC80[8];
extern char lbl_8055EC88[8];
extern char lbl_8055EC98[8];
extern char lbl_8055ECA0[8];
extern char lbl_8055ECA8[8];
extern char lbl_8055ECB0[8];
extern void *lbl_805621F4;
extern void *igObject_meta;
extern void *igGfxShaderDefineList_meta;
extern void *igGfxShaderDefine_meta;
extern void *igTextureSamplerSourceList_meta;
extern void *igTextureSamplerSource_meta;
void *igGfxShaderDefineList_getMeta();
void *igGfxShaderDefineList_vtableRead();
void igGfxShaderDefineList_registerNow();
void igGfxShaderDefineList_register();
void *igGfxShaderDefineList_getMetaCall();
void *igGfxShaderDefine_getMeta();
void *igGfxShaderDefine_vtableRead();
void igGfxShaderDefine_registerNow();
void igGfxShaderDefine_register();
void *igGfxShaderDefine_getMetaCall();
void igGfxShaderDefine_fieldInit();
void *igTextureSamplerSourceList_getMeta();
void *igTextureSamplerSourceList_vtableRead();
void igTextureSamplerSourceList_registerNow();
void igTextureSamplerSourceList_register();
void *igTextureSamplerSourceList_getMetaCall();
void *igTextureSamplerSource_getMeta();
void *igTextureSamplerSource_vtableRead();
void igTextureSamplerSource_registerNow();
void igTextureSamplerSource_register();
void *igTextureSamplerSource_getMetaCall();
}
struct UnknownGenObject800D403C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D419C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D419C(){igObject_construct(this);}
};
struct UnknownGenObject800D419C_0 : UnknownGenRoot800D419C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D419C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D419C : UnknownGenObject800D419C_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800D419C(){unknown00=igGfxShaderDefine_vtable;}
};
struct UnknownGenObject800D4440_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D45A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D45A0(){igObject_construct(this);}
};
struct UnknownGenObject800D45A0_0 : UnknownGenRoot800D45A0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D45A0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D45A0 : UnknownGenObject800D45A0_0 {
 char unknown0C[20];
 inline ~UnknownGenObject800D45A0(){unknown00=igTextureSamplerSource_vtable;}
};
extern "C" {
void *fn_800D3FC4(){
 if(!igGfxShaderDefineList_meta) igGfxShaderDefineList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGfxShaderDefineList_meta;
}
void *igGfxShaderDefineList_getMeta(){
 if(!igGfxShaderDefineList_meta || !(reinterpret_cast<unsigned int *>(igGfxShaderDefineList_meta)[0x24/4]&4)) igGfxShaderDefineList_registerNow();
 return igGfxShaderDefineList_meta;
}
void *igGfxShaderDefineList_vtableRead(){
 UnknownGenObject800D403C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804935F8;
 object.unknown00=igGfxShaderDefineList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGfxShaderDefineList_registerNow(){
 meta_registerNow((int)igGfxShaderDefineList_register);
}
void igGfxShaderDefineList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGfxShaderDefineList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igGfxShaderDefineList_getMetaCall,(int)igGfxShaderDefineList_className,20,(int)igGfxShaderDefineList_vtableRead,0,0,(int)lbl_8055EC78);
}
void *igGfxShaderDefineList_getMetaCall(){return igGfxShaderDefineList_getMeta();}
void *igGfxShaderDefine_getMeta(){
 if(!igGfxShaderDefine_meta || !(reinterpret_cast<unsigned int *>(igGfxShaderDefine_meta)[0x24/4]&4)) igGfxShaderDefine_registerNow();
 return igGfxShaderDefine_meta;
}
void *igGfxShaderDefine_vtableRead(){
 UnknownGenObject800D419C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igGfxShaderDefine_vtable;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGfxShaderDefine_registerNow(){
 meta_registerNow((int)igGfxShaderDefine_register);
}
void igGfxShaderDefine_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGfxShaderDefine_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igGfxShaderDefine_getMetaCall,(int)igGfxShaderDefine_className,20,(int)igGfxShaderDefine_vtableRead,(int)igGfxShaderDefine_fieldInit,0,(int)lbl_8055EC80);
}
void *igGfxShaderDefine_getMetaCall(){return igGfxShaderDefine_getMeta();}
void igGfxShaderDefine_fieldInit(){
 void *value0=igGfxShaderDefine_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055EC88,2);
 void *value2=meta_field(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=igObject_meta;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value3,1);
 meta_setupFields(value0,lbl_8055EC98,lbl_8055ECA0,lbl_8055ECA8,value1);
}
void *fn_800D43C8(){
 if(!igTextureSamplerSourceList_meta) igTextureSamplerSourceList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igTextureSamplerSourceList_meta;
}
void *igTextureSamplerSourceList_getMeta(){
 if(!igTextureSamplerSourceList_meta || !(reinterpret_cast<unsigned int *>(igTextureSamplerSourceList_meta)[0x24/4]&4)) igTextureSamplerSourceList_registerNow();
 return igTextureSamplerSourceList_meta;
}
void *igTextureSamplerSourceList_vtableRead(){
 UnknownGenObject800D4440_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804934D4;
 object.unknown00=igTextureSamplerSourceList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureSamplerSourceList_registerNow(){
 meta_registerNow((int)igTextureSamplerSourceList_register);
}
void igTextureSamplerSourceList_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igTextureSamplerSourceList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igTextureSamplerSourceList_getMetaCall,(int)igTextureSamplerSourceList_className,20,(int)igTextureSamplerSourceList_vtableRead,0,0,(int)lbl_8055ECB0);
}
void *igTextureSamplerSourceList_getMetaCall(){return igTextureSamplerSourceList_getMeta();}
void *igTextureSamplerSource_getMeta(){
 if(!igTextureSamplerSource_meta || !(reinterpret_cast<unsigned int *>(igTextureSamplerSource_meta)[0x24/4]&4)) igTextureSamplerSource_registerNow();
 return igTextureSamplerSource_meta;
}
void *igTextureSamplerSource_vtableRead(){
 UnknownGenObject800D45A0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igTextureSamplerSource_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureSamplerSource_registerNow(){
 meta_registerNow((int)igTextureSamplerSource_register);
}
void igTextureSamplerSource_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igTextureSamplerSource_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igTextureSamplerSource_getMetaCall,(int)igTextureSamplerSource_className,24,(int)igTextureSamplerSource_vtableRead,(int)fn_800D46F0,0,0);
}
void *igTextureSamplerSource_getMetaCall(){return igTextureSamplerSource_getMeta();}
}
#pragma pop
