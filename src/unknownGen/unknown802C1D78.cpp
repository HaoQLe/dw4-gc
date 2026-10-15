#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801ADB98();
extern char lbl_804D00C8[];
extern char lbl_804D00D8[];
extern char lbl_804D00E8[];
extern char lbl_804D00F8[];
extern void *beParticleCtrl2Info_meta;
}
extern "C" {
void beParticleCtrl2Info_fieldInit(){
 void *value0=beParticleCtrl2Info_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D00C8,4);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 meta_setupFields(value0,lbl_804D00D8,lbl_804D00E8,lbl_804D00F8,value1);
}
}
#pragma pop
