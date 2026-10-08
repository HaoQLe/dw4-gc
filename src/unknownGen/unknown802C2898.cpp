#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_801264B4(void *,void *);
extern char lbl_8041E6AC[];
extern char lbl_804D01B0[];
extern char lbl_804D0208[];
extern char lbl_804D0260[];
extern char lbl_804D02B8[];
extern void *lbl_80534AC8;
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
void fn_802C2898(){
 UnknownGenL802C2898_10 local1;
 UnknownGenL802C2898_8 local0;
 void *value0=lbl_80534AC8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D01B0,22);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 local1.m10=*reinterpret_cast<float *>((lbl_8041E6AC+0));
 local1.m14=*reinterpret_cast<float *>((lbl_8041E6AC+0));
 fn_801264B4(value2,&local1);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 local0.m08=*reinterpret_cast<float *>((lbl_8041E6AC+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_8041E6AC+0));
 fn_801264B4(value3,&local0);
 fn_800659C0(value0,lbl_804D0208,lbl_804D0260,lbl_804D02B8,value1);
}
}
#pragma pop
