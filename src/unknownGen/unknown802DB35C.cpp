#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beMessenger_metaObject();
void *beLua_metaObject();
void *beDemoManagerWorkList_metaObject();
void *beDemoManagerWork_metaObject();
extern char lbl_804D22F4[];
extern char lbl_804D2310[];
extern char lbl_804D232C[];
extern char lbl_804D2348[];
extern void *beDemoManager_meta;
}
extern "C" {
void beDemoManager_fieldInit(){
 void *value0=beDemoManager_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D22F4,7);
 void *value2=meta_field(value0,value1);
 void *value3=beMessenger_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beLua_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beDemoManagerWork_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value9=beDemoManagerWorkList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+52)=1;
 meta_setupFields(value0,lbl_804D2310,lbl_804D232C,lbl_804D2348,value1);
}
}
#pragma pop
