#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSystem_metaObject();
void *bePadDataList_metaObject();
void *beKeyboardReceiver_metaObject();
extern char lbl_804D0158[];
extern char lbl_804D016C[];
extern char lbl_804D0180[];
extern char lbl_804D0194[];
extern void *bePadManager_meta;
}
extern "C" {
void bePadManager_fieldInit(){
 void *value0=bePadManager_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D0158,5);
 void *value2=meta_field(value0,value1);
 void *value3=beSystem_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=bePadDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beKeyboardReceiver_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 meta_setupFields(value0,lbl_804D016C,lbl_804D0180,lbl_804D0194,value1);
}
}
#pragma pop
