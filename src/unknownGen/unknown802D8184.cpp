#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802D822C();
extern char lbl_804D1EE8[];
extern char lbl_804D1EEC[];
extern char lbl_804D1EF0[];
extern char lbl_804D1EF4[];
extern void *lbl_805352E4;
}
extern "C" {
void fn_802D8184(){
 void *value0=lbl_805352E4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D1EE8,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802D822C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D1EEC,lbl_804D1EF0,lbl_804D1EF4,value1);
}
}
#pragma pop
