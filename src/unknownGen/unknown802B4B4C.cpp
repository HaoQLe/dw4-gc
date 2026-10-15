#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_80122100();
extern char lbl_804CF08C[];
extern char lbl_804CF098[];
extern char lbl_804CF0A4[];
extern char lbl_804CF0B0[];
extern void *beWaterMoveData_meta;
}
extern "C" {
void beWaterMoveData_fieldInit(){
 void *value0=beWaterMoveData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF08C,3);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_80122100();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804CF098,lbl_804CF0A4,lbl_804CF0B0,value1);
}
}
#pragma pop
