#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_8011205C(void *);
void fn_801264B4(void *,void *);
extern char lbl_8055F064[8];
extern char lbl_8055F074[8];
extern char lbl_8055F07C[8];
extern char lbl_8055F084[8];
extern void *lbl_8056368C;
extern char lbl_805669AC[4];
}
struct UnknownGenL8010FFF4_8 {
 float m08;
 float m0C;
};
extern "C" {
void igMouseCursor_fieldInit(){
 UnknownGenL8010FFF4_8 local0;
 void *value0=lbl_8056368C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F064,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8011205C(value2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 local0.m08=*reinterpret_cast<float *>((lbl_805669AC+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805669AC+0));
 fn_801264B4(value4,&local0);
 fn_800659C0(value0,lbl_8055F074,lbl_8055F07C,lbl_8055F084,value1);
}
}
#pragma pop
