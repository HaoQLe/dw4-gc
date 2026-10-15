#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_createInstance(void *,void *);
void fn_80065D94(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igIniShaderFactory_registerNow();
void *fn_801F2B38();
void *fn_801F3218();
void igObject_register();
extern char igIniShaderManager_className[];
extern char igIniShaderManager_vtable[];
extern void *igIniShaderManager_meta;
extern void *igIniShaderFactory_meta;
void *igIniShaderManager_getMeta();
void *igIniShaderManager_vtableRead();
void igIniShaderManager_registerNow();
void igIniShaderManager_register();
void *igIniShaderManager_getMetaCall();
void fn_801BE7E4();
void *fn_801BE80C();
void *fn_801BE82C();
}
struct UnknownGenObject801BE6E4_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *igIniShaderManager_getMeta(){
 if(!igIniShaderManager_meta || !(reinterpret_cast<unsigned int *>(igIniShaderManager_meta)[0x24/4]&4)) igIniShaderManager_registerNow();
 return igIniShaderManager_meta;
}
void *igIniShaderManager_vtableRead(){
 UnknownGenObject801BE6E4_0 object;
 igObject_construct(&object);
 object.unknown00=igIniShaderManager_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igIniShaderManager_registerNow(){
 meta_registerNow((int)igIniShaderManager_register);
}
void igIniShaderManager_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igIniShaderManager_meta,(int)igObject_register,(int)fn_800237D0,(int)igIniShaderManager_getMetaCall,(int)igIniShaderManager_className,8,(int)igIniShaderManager_vtableRead,(int)fn_801BE7E4,(int)fn_801BE80C,0);
}
void *igIniShaderManager_getMetaCall(){return igIniShaderManager_getMeta();}
void fn_801BE7E4(){
 fn_80065D94((int)fn_801BE82C);
}
void *fn_801BE80C(){return fn_801F2B38();}
void *fn_801BE82C(){return fn_801F3218();}
void *igIniShaderFactory_create(void *object){
 igIniShaderFactory_registerNow();
 return meta_createInstance(igIniShaderFactory_meta,object);
}
void *igIniShaderFactory_getMeta(){
 if(!igIniShaderFactory_meta || !(reinterpret_cast<unsigned int *>(igIniShaderFactory_meta)[0x24/4]&4)) igIniShaderFactory_registerNow();
 return igIniShaderFactory_meta;
}
}
#pragma pop
