#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801ADB98();
void *beMatCtrlSearchList_metaObject();
void *beMatCtrlDataList_metaObject();
extern char lbl_804D169C[];
extern char lbl_804D16A8[];
extern char lbl_804D16B4[];
extern char lbl_804D16C0[];
extern void *beMatCtrlInfo_meta;
}
extern "C" {
void beMatCtrlInfo_fieldInit(){
 void *value0=beMatCtrlInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D169C,3);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beMatCtrlDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beMatCtrlSearchList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 meta_setupFields(value0,lbl_804D16A8,lbl_804D16B4,lbl_804D16C0,value1);
}
}
#pragma pop
