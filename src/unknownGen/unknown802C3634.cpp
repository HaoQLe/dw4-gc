#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beNumVerInsideDataList_metaObject();
extern char lbl_804D0400[];
extern char lbl_804D0408[];
extern char lbl_804D0410[];
extern char lbl_804D0418[];
extern void *beNumVerData_meta;
}
extern "C" {
void beNumVerData_fieldInit(){
 void *value0=beNumVerData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D0400,2);
 void *value2=meta_field(value0,value1);
 fn_80053650(value2,-1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=beNumVerInsideDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 meta_setupFields(value0,lbl_804D0408,lbl_804D0410,lbl_804D0418,value1);
}
}
#pragma pop
