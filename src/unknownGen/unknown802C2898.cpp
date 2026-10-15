#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_801264B4(void *,void *);
extern char lbl_8041E6AC[];
extern char lbl_804D01B0[];
extern char lbl_804D0208[];
extern char lbl_804D0260[];
extern char lbl_804D02B8[];
extern void *bePadData_meta;
}
struct UnknownGenL802C2898_10 {
 float m10;
 float m14;
};
struct UnknownGenL802C2898_8 {
 float m08;
 float m0C;
};
extern "C" {
void bePadData_fieldInit(){
 UnknownGenL802C2898_10 local1;
 UnknownGenL802C2898_8 local0;
 void *value0=bePadData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D01B0,22);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 local1.m10=*reinterpret_cast<float *>((lbl_8041E6AC+0));
 local1.m14=*reinterpret_cast<float *>((lbl_8041E6AC+0));
 fn_801264B4(value2,&local1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 local0.m08=*reinterpret_cast<float *>((lbl_8041E6AC+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_8041E6AC+0));
 fn_801264B4(value3,&local0);
 meta_setupFields(value0,lbl_804D0208,lbl_804D0260,lbl_804D02B8,value1);
}
}
#pragma pop
