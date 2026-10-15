#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80028F84();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char lbl_804D243C[];
extern char lbl_804D2440[];
extern char lbl_804D2444[];
extern char lbl_804D2448[];
extern void *beDataObjObjectList_meta;
}
extern "C" {
void beDataObjObjectList_fieldInit(){
 void *value0=beDataObjObjectList_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D243C,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80028F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,lbl_804D2440,lbl_804D2444,lbl_804D2448,value1);
}
}
#pragma pop
