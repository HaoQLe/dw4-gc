#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801E4D7C();
void fn_801E4DA0();
void igDOFShader_fieldInit();
void *igEndianSwappedEnbayaAnimationSource_getMeta();
void igGroup_register();
extern char igNamedObject_vtable[];
extern char igDOFShader_className[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igDOFShader_vtable[];
extern char igDOFShader_dependencies[8];
extern void *lbl_805621F4;
extern void *igDOFShader_meta;
void *igDOFShader_getMeta();
void *igDOFShader_vtableRead();
void igDOFShader_arkRegister();
void igDOFShader_register();
void *igDOFShader_getMetaCall();
}
struct UnknownGenRoot801C21B4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C21B4(){igObject_construct(this);}
};
struct UnknownGenObject801C21B4_0 : UnknownGenRoot801C21B4 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C21B4_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801C21B4_1 : UnknownGenObject801C21B4_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C21B4_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801C21B4_2 : UnknownGenObject801C21B4_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C21B4_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801C21B4 : UnknownGenObject801C21B4_2 {
 char unknown20[44];
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject801C21B4(){unknown00=igDOFShader_vtable;}
};
extern "C" {
void *igEndianSwappedEnbayaAnimationSource_getMetaCall(){return igEndianSwappedEnbayaAnimationSource_getMeta();}
void *fn_801C20FC(){return fn_801E4D7C();}
void fn_801C211C(){return fn_801E4DA0();}
void *fn_801C213C(){
 if(!igDOFShader_meta) igDOFShader_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igDOFShader_meta;
}
void *igDOFShader_getMeta(){
 if(!igDOFShader_meta || !(reinterpret_cast<unsigned int *>(igDOFShader_meta)[0x24/4]&4)) igDOFShader_arkRegister();
 return igDOFShader_meta;
}
void *igDOFShader_vtableRead(){
 UnknownGenObject801C21B4 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igGroup_vtable;
 object.unknown1C.value=0;
 object.unknown00=igDOFShader_vtable;
 object.unknown4C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDOFShader_arkRegister(){
 meta_registerNow((int)igDOFShader_register);
}
void igDOFShader_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igDOFShader_meta,(int)igGroup_register,(int)fn_8011148C,(int)igDOFShader_getMetaCall,(int)igDOFShader_className,80,(int)igDOFShader_vtableRead,(int)igDOFShader_fieldInit,0,(int)igDOFShader_dependencies);
}
void *igDOFShader_getMetaCall(){return igDOFShader_getMeta();}
}
#pragma pop
