#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800AF4A4();
extern char lbl_804CF1D8[];
extern char lbl_804CF1DC[];
extern char lbl_804CF1E0[];
extern char lbl_804CF1E4[];
extern void *beTextureCtrlData_meta;
}
extern "C" {
void beTextureCtrlData_fieldInit(){
 void *value0=beTextureCtrlData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF1D8,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800AF4A4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804CF1DC,lbl_804CF1E0,lbl_804CF1E4,value1);
}
}
#pragma pop
