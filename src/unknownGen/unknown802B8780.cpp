#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void beSoundInfo_registerNow();
extern char lbl_804CF478[];
extern char lbl_804CF480[];
extern char lbl_804CF488[];
extern char lbl_804CF490[];
extern void *beBinDataObject_meta;
extern void *beSoundInfo_meta;
}
extern "C" {
void beBinDataObject_fieldInit(){
 void *value0=beBinDataObject_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF478,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 fn_800659C0(value0,lbl_804CF480,lbl_804CF488,lbl_804CF490,value1);
}
void *beSoundInfo_getMeta(){
 if(!beSoundInfo_meta || !(reinterpret_cast<unsigned int *>(beSoundInfo_meta)[0x24/4]&4)) beSoundInfo_registerNow();
 return beSoundInfo_meta;
}
}
#pragma pop
