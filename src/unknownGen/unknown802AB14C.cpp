#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804CD980[];
extern char lbl_804CD984[];
extern char lbl_804CD988[];
extern char lbl_804CD98C[];
extern void *igFileName_meta;
}
extern "C" {
void igFileName_fieldInit(){
 void *value0=igFileName_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CD980,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804CD984,lbl_804CD988,lbl_804CD98C,value1);
}
}
#pragma pop
