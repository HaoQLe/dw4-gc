#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800365B4();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNDMWShinkaCtrl_metaObject();
extern char lbl_804E1DF4[];
extern char lbl_804E1E00[];
extern char lbl_804E1E0C[];
extern char lbl_804E1E18[];
extern void *beNDMWStatusCtrlSkill_meta;
}
extern "C" {
void beNDMWStatusCtrlSkill_fieldInit(){
 void *value0=beNDMWStatusCtrlSkill_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804E1DF4,3);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=beNDMWShinkaCtrl_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value5=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,lbl_804E1E00,lbl_804E1E0C,lbl_804E1E18,value1);
}
}
#pragma pop
