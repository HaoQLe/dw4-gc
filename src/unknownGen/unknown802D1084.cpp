#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_80122790();
extern char lbl_804D173C[];
extern char lbl_804D1740[];
extern char lbl_804D1744[];
extern char lbl_804D1748[];
extern void *beMatCtrlData_meta;
}
extern "C" {
void beMatCtrlData_fieldInit(){
 void *value0=beMatCtrlData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D173C,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80122790();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D1740,lbl_804D1744,lbl_804D1748,value1);
}
}
#pragma pop
