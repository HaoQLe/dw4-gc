#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801E871C(int);
void fn_801E8744();
void *fn_801E8770();
void *igEnvironmentMapShader2_fieldInit();
void igGroup_register();
void igObjectList_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igEnvironmentMapShader2List_className[];
extern char igEnvironmentMapShader2_dependencies[];
extern char igEnvironmentMapShader2_className[];
extern char igEnvironmentMapShader2List_vtable[];
extern char lbl_804B72A8[];
extern char igEnvironmentMapShader2List_dependencies[8];
extern void *lbl_805621F4;
extern void *igEnvironmentMapShader2List_meta;
extern void *igEnvironmentMapShader2_meta;
void *igEnvironmentMapShader2List_getMeta();
void *igEnvironmentMapShader2List_vtableRead();
void igEnvironmentMapShader2List_arkRegister();
void igEnvironmentMapShader2List_register();
void *igEnvironmentMapShader2List_getMetaCall();
void *igEnvironmentMapShader2_getMeta();
void igEnvironmentMapShader2_arkRegister();
void igEnvironmentMapShader2_register();
void *igEnvironmentMapShader2_getMetaCall();
}
struct UnknownGenObject801C1044_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_801C0F80(){
 fn_801E8744();
 fn_80065DBC((int)fn_801E871C);
}
void *fn_801C0FAC(){return fn_801E8770();}
void *fn_801C0FCC(){
 if(!igEnvironmentMapShader2List_meta) igEnvironmentMapShader2List_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igEnvironmentMapShader2List_meta;
}
void *igEnvironmentMapShader2List_getMeta(){
 if(!igEnvironmentMapShader2List_meta || !(reinterpret_cast<unsigned int *>(igEnvironmentMapShader2List_meta)[0x24/4]&4)) igEnvironmentMapShader2List_arkRegister();
 return igEnvironmentMapShader2List_meta;
}
void *igEnvironmentMapShader2List_vtableRead(){
 UnknownGenObject801C1044_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_804B72A8;
 object.unknown00=igEnvironmentMapShader2List_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igEnvironmentMapShader2List_arkRegister(){
 meta_registerNow((int)igEnvironmentMapShader2List_register);
}
void igEnvironmentMapShader2List_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igEnvironmentMapShader2List_meta,(int)igObjectList_register,(int)fn_80024180,(int)igEnvironmentMapShader2List_getMetaCall,(int)igEnvironmentMapShader2List_className,20,(int)igEnvironmentMapShader2List_vtableRead,0,0,(int)igEnvironmentMapShader2List_dependencies);
}
void *igEnvironmentMapShader2List_getMetaCall(){return igEnvironmentMapShader2List_getMeta();}
void *fn_801C1168(){
 if(!igEnvironmentMapShader2_meta) igEnvironmentMapShader2_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igEnvironmentMapShader2_meta;
}
void *igEnvironmentMapShader2_getMeta(){
 if(!igEnvironmentMapShader2_meta || !(reinterpret_cast<unsigned int *>(igEnvironmentMapShader2_meta)[0x24/4]&4)) igEnvironmentMapShader2_arkRegister();
 return igEnvironmentMapShader2_meta;
}
void igEnvironmentMapShader2_arkRegister(){
 meta_registerNow((int)igEnvironmentMapShader2_register);
}
void igEnvironmentMapShader2_register(){
 fn_801AA6DC();
 meta_registerClass(1,(int)&igEnvironmentMapShader2_meta,(int)igGroup_register,(int)fn_8011148C,(int)igEnvironmentMapShader2_getMetaCall,(int)igEnvironmentMapShader2_className,112,0,(int)igEnvironmentMapShader2_fieldInit,0,(int)igEnvironmentMapShader2_dependencies);
}
void *igEnvironmentMapShader2_getMetaCall(){return igEnvironmentMapShader2_getMeta();}
}
#pragma pop
