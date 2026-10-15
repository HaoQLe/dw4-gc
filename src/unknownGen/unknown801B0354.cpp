#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igSimpleShader_arkRegister();
void *igSimpleUserInfo_getMeta();
void igSimpleUserInfo_vtableRead();
void igUserInfo_register();
extern char igSimpleUserInfo_className[];
extern void *igUserInfo_meta;
extern void *igSimpleUserInfo_meta;
extern void *igSimpleShader_meta;
void igSimpleUserInfo_register();
void *igSimpleUserInfo_getMetaCall();
void *fn_801B0404();
}
extern "C" {
void igSimpleUserInfo_arkRegister(){
 meta_registerNow((int)igSimpleUserInfo_register);
}
void igSimpleUserInfo_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSimpleUserInfo_meta,(int)igUserInfo_register,(int)fn_801B0404,(int)igSimpleUserInfo_getMetaCall,(int)igSimpleUserInfo_className,36,(int)igSimpleUserInfo_vtableRead,0,0,0);
}
void *igSimpleUserInfo_getMetaCall(){return igSimpleUserInfo_getMeta();}
void *fn_801B0404(){return igUserInfo_meta;}
void *igSimpleShader_getMeta(){
 if(!igSimpleShader_meta || !(reinterpret_cast<unsigned int *>(igSimpleShader_meta)[0x24/4]&4)) igSimpleShader_arkRegister();
 return igSimpleShader_meta;
}
}
#pragma pop
