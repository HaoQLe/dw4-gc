#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beUnicode_getMeta();
void beUnicode_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beTransformSync_registerNow();
void igObject_register();
extern char beUnicode_className[];
extern char beUnicode_meta[];
extern void *beTransformSync_meta;
void beUnicode_register();
void *beUnicode_getMetaCall();
}
extern "C" {
void beUnicode_registerNow(){
 meta_registerNow((int)beUnicode_register);
}
void beUnicode_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beUnicode_meta,(int)igObject_register,(int)fn_800237D0,(int)beUnicode_getMetaCall,(int)beUnicode_className,8,(int)beUnicode_vtableRead,0,0,0);
}
void *beUnicode_getMetaCall(){return beUnicode_getMeta();}
void *beTransformSync_getMeta(){
 if(!beTransformSync_meta || !(reinterpret_cast<unsigned int *>(beTransformSync_meta)[0x24/4]&4)) beTransformSync_registerNow();
 return beTransformSync_meta;
}
}
#pragma pop
