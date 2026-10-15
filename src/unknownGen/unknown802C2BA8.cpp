#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
extern char lbl_804D0310[];
extern char lbl_804D0320[];
extern char lbl_804D0330[];
extern char lbl_804D0340[];
extern void *beOptInfo_meta;
}
extern "C" {
void beOptInfo_fieldInit(){
 void *value0=beOptInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D0310,4);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80071694(value2,0);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 fn_80071694(value3,0);
 meta_setupFields(value0,lbl_804D0320,lbl_804D0330,lbl_804D0340,value1);
}
}
#pragma pop
