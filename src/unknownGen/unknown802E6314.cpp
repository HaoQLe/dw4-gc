#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2FLASHSET_getMeta();
void beAction2FLASHSET_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beAction2WAITCHECK_registerNow();
void igNamedObject_register();
extern char beAction2FLASHSET_className[];
extern char beAction2FLASHSET_meta[];
extern void *beAction2WAITCHECK_meta;
void beAction2FLASHSET_register();
void *beAction2FLASHSET_getMetaCall();
}
extern "C" {
void beAction2FLASHSET_registerNow(){
 meta_registerNow((int)beAction2FLASHSET_register);
}
void beAction2FLASHSET_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beAction2FLASHSET_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAction2FLASHSET_getMetaCall,(int)beAction2FLASHSET_className,12,(int)beAction2FLASHSET_vtableRead,0,0,0);
}
void *beAction2FLASHSET_getMetaCall(){return beAction2FLASHSET_getMeta();}
void *beAction2WAITCHECK_getMeta(){
 if(!beAction2WAITCHECK_meta || !(reinterpret_cast<unsigned int *>(beAction2WAITCHECK_meta)[0x24/4]&4)) beAction2WAITCHECK_registerNow();
 return beAction2WAITCHECK_meta;
}
}
#pragma pop
