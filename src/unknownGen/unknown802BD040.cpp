#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804CFAD4[];
extern char lbl_804CFADC[];
extern char lbl_804CFAE4[];
extern char lbl_804CFAEC[];
extern void *beSvPs2McImage128k_meta;
}
extern "C" {
void beSvPs2McImage128k_fieldInit(){
 void *value0=beSvPs2McImage128k_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CFAD4,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 meta_setupFields(value0,lbl_804CFADC,lbl_804CFAE4,lbl_804CFAEC,value1);
}
}
#pragma pop
