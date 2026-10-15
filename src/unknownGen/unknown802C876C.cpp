#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_8041E6AC[];
extern char lbl_804D0C58[];
extern char lbl_804D0C7C[];
extern char lbl_804D0CA0[];
extern char lbl_804D0CC4[];
extern void *beModelCtrlMoveObject_meta;
}
extern "C" {
void beModelCtrlMoveObject_fieldInit(){
 void *value0=beModelCtrlMoveObject_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D0C58,9);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 fn_8004D4BC(value3,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 fn_8004D4BC(value4,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 fn_8004D4BC(value5,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 meta_setupFields(value0,lbl_804D0C7C,lbl_804D0CA0,lbl_804D0CC4,value1);
}
}
#pragma pop
