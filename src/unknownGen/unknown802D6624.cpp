#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGroupKeepList_getMeta();
void beGroupKeepList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beGroupKeep_arkRegister();
void igObjectList_register();
extern char beGroupKeepList_className[];
extern char beGroupKeepList_dependencies[];
extern char beGroupKeepList_meta[];
extern void *beGroupKeep_meta;
void beGroupKeepList_register();
void *beGroupKeepList_getMetaCall();
}
extern "C" {
void beGroupKeepList_arkRegister(){
 meta_registerNow((int)beGroupKeepList_register);
}
void beGroupKeepList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGroupKeepList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beGroupKeepList_getMetaCall,(int)beGroupKeepList_className,20,(int)beGroupKeepList_vtableRead,0,0,(int)beGroupKeepList_dependencies);
}
void *beGroupKeepList_getMetaCall(){return beGroupKeepList_getMeta();}
void *beGroupKeep_getMeta(){
 if(!beGroupKeep_meta || !(reinterpret_cast<unsigned int *>(beGroupKeep_meta)[0x24/4]&4)) beGroupKeep_arkRegister();
 return beGroupKeep_meta;
}
}
#pragma pop
