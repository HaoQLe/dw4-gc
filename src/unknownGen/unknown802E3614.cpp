#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_8041D5B0[];
extern char lbl_8041E6AC[];
extern char lbl_804D2D60[];
extern char lbl_804D2D78[];
extern char lbl_804D2D90[];
extern char lbl_804D2DA8[];
extern void *beBaseInfoRamTimer_meta;
}
extern "C" {
void beBaseInfoRamTimer_fieldInit(){
 void *value0=beBaseInfoRamTimer_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D2D60,6);
 void *value2=meta_field(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 fn_8004D4BC(value3,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 meta_setupFields(value0,lbl_804D2D78,lbl_804D2D90,lbl_804D2DA8,value1);
}
}
#pragma pop
