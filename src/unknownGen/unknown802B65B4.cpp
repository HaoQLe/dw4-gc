#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801C89F0();
extern char lbl_804CF1C0[];
extern char lbl_804CF1C4[];
extern char lbl_804CF1C8[];
extern char lbl_804CF1CC[];
extern void *beTextureCtrlAttr_meta;
}
extern "C" {
void beTextureCtrlAttr_fieldInit(){
 void *value0=beTextureCtrlAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF1C0,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801C89F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804CF1C4,lbl_804CF1C8,lbl_804CF1CC,value1);
}
}
#pragma pop
