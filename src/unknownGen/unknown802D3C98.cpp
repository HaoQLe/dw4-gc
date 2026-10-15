#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801ADB98();
extern char lbl_804D1984[];
extern char lbl_804D198C[];
extern char lbl_804D1994[];
extern char lbl_804D199C[];
extern void *beLayerCtl_meta;
}
extern "C" {
void beLayerCtl_fieldInit(){
 void *value0=beLayerCtl_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D1984,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D198C,lbl_804D1994,lbl_804D199C,value1);
}
}
#pragma pop
