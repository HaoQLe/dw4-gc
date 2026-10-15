#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
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
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF478,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 meta_setupFields(value0,lbl_804CF480,lbl_804CF488,lbl_804CF490,value1);
}
void *beSoundInfo_getMeta(){
 if(!beSoundInfo_meta || !(reinterpret_cast<unsigned int *>(beSoundInfo_meta)[0x24/4]&4)) beSoundInfo_registerNow();
 return beSoundInfo_meta;
}
}
#pragma pop
