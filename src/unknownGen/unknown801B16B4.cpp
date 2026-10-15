#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igShader2_fieldInit();
extern char igShader2_className[];
extern void *igShader2_meta;
void *igShader2_getMeta();
void igShader2_arkRegister();
void igShader2_register();
void *igShader2_getMetaCall();
}
extern "C" {
void *igShader2_getMeta(){
 if(!igShader2_meta || !(reinterpret_cast<unsigned int *>(igShader2_meta)[0x24/4]&4)) igShader2_arkRegister();
 return igShader2_meta;
}
void igShader2_arkRegister(){
 meta_registerNow((int)igShader2_register);
}
void igShader2_register(){
 fn_801AA6DC();
 meta_registerClass(1,(int)&igShader2_meta,(int)igGroup_register,(int)fn_8011148C,(int)igShader2_getMetaCall,(int)igShader2_className,36,0,(int)igShader2_fieldInit,0,0);
}
void *igShader2_getMetaCall(){return igShader2_getMeta();}
}
#pragma pop
