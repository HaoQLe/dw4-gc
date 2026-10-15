#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *igLongTimer_fieldInit();
void *igLongTimer_getMetaCall();
void igTimer_register();
extern char igLongTimer_className[];
extern void *igTimer_meta;
extern void *igLongTimer_meta;
void igLongTimer_arkRegister();
void igLongTimer_register();
void *igLongTimer_parentMeta();
}
extern "C" {
void *igLongTimer_getMeta(){
 if(!igLongTimer_meta || !(reinterpret_cast<unsigned int *>(igLongTimer_meta)[0x24/4]&4)) igLongTimer_arkRegister();
 return igLongTimer_meta;
}
void igLongTimer_arkRegister(){
 meta_registerNow((int)igLongTimer_register);
}
void igLongTimer_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igLongTimer_meta,(int)igTimer_register,(int)igLongTimer_parentMeta,(int)igLongTimer_getMetaCall,(int)igLongTimer_className,40,0,(int)igLongTimer_fieldInit,0,0);
}
void *igLongTimer_parentMeta(){return igTimer_meta;}
}
#pragma pop
