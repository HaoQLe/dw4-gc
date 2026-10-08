#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80126808(void *,void *);
extern char lbl_8055F360[8];
extern char lbl_8055F378[8];
extern char lbl_8055F380[8];
extern char lbl_8055F388[8];
extern void *lbl_8056395C;
extern char lbl_805669D8[4];
extern char lbl_805669DC[4];
}
struct UnknownGenL8011F6AC_8 {
 float m08;
 float m0C;
 float m10;
};
extern "C" {
void fn_8011F6AC(){
 UnknownGenL8011F6AC_8 local0;
 void *value0=lbl_8056395C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F360,2);
 void *value2=fn_800658E4(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_805669D8+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805669D8+0));
 local0.m10=*reinterpret_cast<float *>((lbl_805669D8+0));
 fn_80126808(value2,&local0);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value3,*reinterpret_cast<float *>((lbl_805669DC+0)));
 fn_800659C0(value0,lbl_8055F378,lbl_8055F380,lbl_8055F388,value1);
}
}
#pragma pop
