#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
extern char lbl_804CF148[];
extern char lbl_804CF158[];
extern char lbl_804CF168[];
extern char lbl_804CF178[];
extern void *beTimerData_meta;
}
extern "C" {
void beTimerData_fieldInit(){
 void *value0=beTimerData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF148,4);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80071694(value2,0);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80071694(value3,0);
 meta_setupFields(value0,lbl_804CF158,lbl_804CF168,lbl_804CF178,value1);
}
}
#pragma pop
