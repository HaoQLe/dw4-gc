#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *bePadManager_metaObject();
void beNDMWMdlPlayer2InfoWork_registerNow();
extern char lbl_804E26E8[];
extern char lbl_804E26EC[];
extern char lbl_804E26F0[];
extern char lbl_804E26F4[];
extern void *beNDMWMdlPlayer2_meta;
extern void *beNDMWMdlPlayer2InfoWork_meta;
}
extern "C" {
void beNDMWMdlPlayer2_fieldInit(){
 void *value0=beNDMWMdlPlayer2_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E26E8,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 fn_800659C0(value0,lbl_804E26EC,lbl_804E26F0,lbl_804E26F4,value1);
}
void *beNDMWMdlPlayer2InfoWork_create(void *object){
 beNDMWMdlPlayer2InfoWork_registerNow();
 return meta_createInstance(beNDMWMdlPlayer2InfoWork_meta,object);
}
void *beNDMWMdlPlayer2InfoWork_getMeta(){
 if(!beNDMWMdlPlayer2InfoWork_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlPlayer2InfoWork_meta)[0x24/4]&4)) beNDMWMdlPlayer2InfoWork_registerNow();
 return beNDMWMdlPlayer2InfoWork_meta;
}
}
#pragma pop
