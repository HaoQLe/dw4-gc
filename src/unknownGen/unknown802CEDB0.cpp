#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024B94();
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beBaseInfoRamList_metaObject();
extern char beMessengerGroup_fieldTypes[];
extern char beMessengerGroup_fieldNames[];
extern char beMessengerGroup_fieldStorage[];
extern char beMessengerGroup_fieldOffsets[];
extern void *beMessengerGroup_meta;
}
extern "C" {
void beMessengerGroup_fieldInit(){
 void *value0=beMessengerGroup_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beMessengerGroup_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beBaseInfoRamList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 meta_setupFields(value0,beMessengerGroup_fieldNames,beMessengerGroup_fieldStorage,beMessengerGroup_fieldOffsets,value1);
}
}
#pragma pop
