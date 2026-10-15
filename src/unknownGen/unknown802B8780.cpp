#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beSoundInfo_arkRegister();
extern char beBinDataObject_fieldTypes[];
extern char beBinDataObject_fieldNames[];
extern char beBinDataObject_fieldStorage[];
extern char beBinDataObject_fieldOffsets[];
extern void *beBinDataObject_meta;
extern void *beSoundInfo_meta;
}
extern "C" {
void beBinDataObject_fieldInit(){
 void *value0=beBinDataObject_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beBinDataObject_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 meta_setupFields(value0,beBinDataObject_fieldNames,beBinDataObject_fieldStorage,beBinDataObject_fieldOffsets,value1);
}
void *beSoundInfo_getMeta(){
 if(!beSoundInfo_meta || !(reinterpret_cast<unsigned int *>(beSoundInfo_meta)[0x24/4]&4)) beSoundInfo_arkRegister();
 return beSoundInfo_meta;
}
}
#pragma pop
