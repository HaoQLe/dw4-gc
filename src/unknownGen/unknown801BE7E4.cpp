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
void igIniShaderFactory_arkRegister();
void *fn_801F2B38();
void *fn_801F3218();
void igObject_register();
extern char igIniShaderManager_className[];
extern char igIniShaderManager_vtable[];
extern void *igIniShaderManager_meta;
extern void *igIniShaderFactory_meta;
void *igIniShaderManager_getMeta();
void *igIniShaderManager_vtableRead();
void igIniShaderManager_arkRegister();
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
void fn_801BE7E4(){
 fn_80065D94((int)fn_801BE82C);
}
void *fn_801BE80C(){return fn_801F2B38();}
void *fn_801BE82C(){return fn_801F3218();}
void *igIniShaderFactory_create(void *object){
 igIniShaderFactory_arkRegister();
 return meta_createInstance(igIniShaderFactory_meta,object);
}
void *igIniShaderFactory_getMeta(){
 if(!igIniShaderFactory_meta || !(reinterpret_cast<unsigned int *>(igIniShaderFactory_meta)[0x24/4]&4)) igIniShaderFactory_arkRegister();
 return igIniShaderFactory_meta;
}
}
#pragma pop
