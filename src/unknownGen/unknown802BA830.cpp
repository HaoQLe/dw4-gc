#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void fn_8003EC68(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804CF718[];
extern char lbl_804CF72C[];
extern char lbl_804CF740[];
extern char lbl_804CF754[];
extern void *beSelectCtrlInfoWork_meta;
}
extern "C" {
void beSelectCtrlInfoWork_fieldInit(){
 void *value0=beSelectCtrlInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF718,5);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_8003EC68(value2,1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value4=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 meta_setupFields(value0,lbl_804CF72C,lbl_804CF740,lbl_804CF754,value1);
}
}
#pragma pop
