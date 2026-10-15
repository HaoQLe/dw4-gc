#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *__internalNonRefCountedObjectList_getMeta();
void *fn_80028BFC();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_8055D3A4[8];
extern char lbl_8055D3AC[8];
extern char lbl_8055D3B4[8];
extern char lbl_8055D3BC[8];
extern void *__internalNonRefCountedObjectList_meta;
}
extern "C" {
void *__internalNonRefCountedObjectList_getMetaCall(){return __internalNonRefCountedObjectList_getMeta();}
void __internalNonRefCountedObjectList_fieldInit(){
 void *value0=__internalNonRefCountedObjectList_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055D3A4,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80028BFC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=(void *)64;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+53)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+64)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+65)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+66)=0;
 meta_setupFields(value0,lbl_8055D3AC,lbl_8055D3B4,lbl_8055D3BC,value1);
}
}
#pragma pop
