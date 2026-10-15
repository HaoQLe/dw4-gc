#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePadManager_metaObject();
extern char lbl_804CF7A8[];
extern char lbl_804CF7B0[];
extern char lbl_804CF7B8[];
extern char lbl_804CF7C0[];
extern void *beSelectCtrl_meta;
}
extern "C" {
void beSelectCtrl_fieldInit(){
 void *value0=beSelectCtrl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF7A8,2);
 void *value2=meta_field(value0,value1);
 void *value3=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value4,1);
 meta_setupFields(value0,lbl_804CF7B0,lbl_804CF7B8,lbl_804CF7C0,value1);
}
}
#pragma pop
