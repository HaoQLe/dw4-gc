#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800BAC98();
extern char beFontGeomAttrPair_fieldTypes[];
extern char beFontGeomAttrPair_fieldNames[];
extern char beFontGeomAttrPair_fieldStorage[];
extern char beFontGeomAttrPair_fieldOffsets[];
extern void *beFontGeomAttrPair_meta;
}
extern "C" {
void beFontGeomAttrPair_fieldInit(){
 void *value0=beFontGeomAttrPair_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beFontGeomAttrPair_fieldTypes,3);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_800BAC98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beFontGeomAttrPair_fieldNames,beFontGeomAttrPair_fieldStorage,beFontGeomAttrPair_fieldOffsets,value1);
}
}
#pragma pop
