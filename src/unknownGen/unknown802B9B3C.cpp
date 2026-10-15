#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801B4DF0();
void *fn_801B74F0();
extern char lbl_804CF670[];
extern char lbl_804CF67C[];
extern char lbl_804CF688[];
extern char lbl_804CF694[];
extern void *beShadow01Info_meta;
}
extern "C" {
void beShadow01Info_fieldInit(){
 void *value0=beShadow01Info_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804CF670,3);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801B74F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801B74F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_801B4DF0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 meta_setupFields(value0,lbl_804CF67C,lbl_804CF688,lbl_804CF694,value1);
}
}
#pragma pop
