#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePadManager_metaObject();
extern char lbl_804E3CD0[];
extern char lbl_804E3CDC[];
extern char lbl_804E3CE8[];
extern char lbl_804E3CF4[];
extern void *beNDMWLoadCtrl2_meta;
}
extern "C" {
void beNDMWLoadCtrl2_fieldInit(){
 void *value0=beNDMWLoadCtrl2_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E3CD0,3);
 void *value2=meta_field(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804E3CDC,lbl_804E3CE8,lbl_804E3CF4,value1);
}
}
#pragma pop
