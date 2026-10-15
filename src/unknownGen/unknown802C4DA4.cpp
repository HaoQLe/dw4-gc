#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801B3FA8();
extern char lbl_804D0538[];
extern char lbl_804D0544[];
extern char lbl_804D0550[];
extern char lbl_804D055C[];
extern void *beMovieInfoData_meta;
}
extern "C" {
void beMovieInfoData_fieldInit(){
 void *value0=beMovieInfoData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D0538,3);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_801B3FA8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,lbl_804D0544,lbl_804D0550,lbl_804D055C,value1);
}
}
#pragma pop
