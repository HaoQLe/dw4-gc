#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beWaterPlain_getMeta();
void beWaterPlain_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beUnicode_arkRegister();
extern char beWaterPlain_className[];
extern char beWaterPlain_meta[];
extern void *beUnicode_meta;
void beWaterPlain_register();
void *beWaterPlain_getMetaCall();
}
extern "C" {
void beWaterPlain_arkRegister(){
 meta_registerNow((int)beWaterPlain_register);
}
void beWaterPlain_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWaterPlain_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beWaterPlain_getMetaCall,(int)beWaterPlain_className,32,(int)beWaterPlain_vtableRead,0,0,0);
}
void *beWaterPlain_getMetaCall(){return beWaterPlain_getMeta();}
void *beUnicode_getMeta(){
 if(!beUnicode_meta || !(reinterpret_cast<unsigned int *>(beUnicode_meta)[0x24/4]&4)) beUnicode_arkRegister();
 return beUnicode_meta;
}
}
#pragma pop
