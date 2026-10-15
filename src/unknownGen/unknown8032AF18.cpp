#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWStatusInfoWork_metaObject();
extern char lbl_804E1A60[];
extern char lbl_804E1A64[];
extern char lbl_804E1A68[];
extern char lbl_804E1A6C[];
extern void *beNDMWStatusInfoRam_meta;
}
extern "C" {
void beNDMWStatusInfoRam_fieldInit(){
 void *value0=beNDMWStatusInfoRam_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1A60,1);
 void *value2=meta_field(value0,value1);
 void *value3=beNDMWStatusInfoWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804E1A64,lbl_804E1A68,lbl_804E1A6C,value1);
}
}
#pragma pop
