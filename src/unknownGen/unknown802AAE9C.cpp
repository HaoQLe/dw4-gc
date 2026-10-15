#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void igFileName_arkRegister();
void *igFileNameList_getMeta();
void igFileNameList_vtableRead();
void igObjectList_register();
extern char igFileNameList_className[];
extern char igFileNameList_dependencies[];
extern char igFileNameList_meta[];
extern void *igFileName_meta;
void igFileNameList_register();
void *igFileNameList_getMetaCall();
}
extern "C" {
void igFileNameList_arkRegister(){
 meta_registerNow((int)igFileNameList_register);
}
void igFileNameList_register(){
 fn_802AA788();
 meta_registerClass(0,(int)igFileNameList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igFileNameList_getMetaCall,(int)igFileNameList_className,20,(int)igFileNameList_vtableRead,0,0,(int)igFileNameList_dependencies);
}
void *igFileNameList_getMetaCall(){return igFileNameList_getMeta();}
void *igFileName_getMeta(){
 if(!igFileName_meta || !(reinterpret_cast<unsigned int *>(igFileName_meta)[0x24/4]&4)) igFileName_arkRegister();
 return igFileName_meta;
}
}
#pragma pop
