#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beModelCtrlAIDataList_metaObject();
extern char lbl_804D0E4C[];
extern char lbl_804D0E74[];
extern char lbl_804D0E9C[];
extern char lbl_804D0EC4[];
extern void *beModelCtrlAIMap_meta;
}
extern "C" {
void beModelCtrlAIMap_fieldInit(){
 void *value0=beModelCtrlAIMap_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D0E4C,10);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value3=beModelCtrlAIDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value5=beModelCtrlAIDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value7=beModelCtrlAIDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value9=beModelCtrlAIDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 meta_setupFields(value0,lbl_804D0E74,lbl_804D0E9C,lbl_804D0EC4,value1);
}
}
#pragma pop
