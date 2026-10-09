#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_8006546C(void *,void *);
void fn_80065D94(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801BEBEC();
void *fn_801F2B38();
void *fn_801F3218();
void igObject_register();
extern char lbl_804AF368[];
extern char lbl_804B75C0[];
extern void *lbl_80564E84;
extern void *lbl_80564E88;
void *igIniShaderManager_getMeta();
void *igIniShaderManager_vtableRead();
void fn_801BE724();
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
 if(!lbl_80564E84 || !(reinterpret_cast<unsigned int *>(lbl_80564E84)[0x24/4]&4)) fn_801BE724();
 return lbl_80564E84;
}
void *igIniShaderManager_vtableRead(){
 UnknownGenObject801BE6E4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B75C0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BE724(){
 fn_80066188((int)igIniShaderManager_register);
}
void igIniShaderManager_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E84,(int)igObject_register,(int)fn_800237D0,(int)igIniShaderManager_getMetaCall,(int)lbl_804AF368,8,(int)igIniShaderManager_vtableRead,(int)fn_801BE7E4,(int)fn_801BE80C,0);
}
void *igIniShaderManager_getMetaCall(){return igIniShaderManager_getMeta();}
void fn_801BE7E4(){
 fn_80065D94((int)fn_801BE82C);
}
void *fn_801BE80C(){return fn_801F2B38();}
void *fn_801BE82C(){return fn_801F3218();}
void *fn_801BE84C(void *object){
 fn_801BEBEC();
 return fn_8006546C(lbl_80564E88,object);
}
void *igIniShaderFactory_getMeta(){
 if(!lbl_80564E88 || !(reinterpret_cast<unsigned int *>(lbl_80564E88)[0x24/4]&4)) fn_801BEBEC();
 return lbl_80564E88;
}
}
#pragma pop
