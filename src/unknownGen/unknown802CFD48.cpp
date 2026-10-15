#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePadManager_metaObject();
void *beMessenger_metaObject();
extern char lbl_804D15F8[];
extern char lbl_804D160C[];
extern char lbl_804D1620[];
extern char lbl_804D1634[];
extern void *beMemory_meta;
}
extern "C" {
void beMemory_fieldInit(){
 void *value0=beMemory_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D15F8,5);
 void *value2=meta_field(value0,value1);
 void *value3=beMessenger_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 meta_setupFields(value0,lbl_804D160C,lbl_804D1620,lbl_804D1634,value1);
}
}
#pragma pop
