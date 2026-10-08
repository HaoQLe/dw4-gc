#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802E3A88();
extern char lbl_804CF468[];
extern char lbl_804CF46C[];
extern char lbl_804CF470[];
extern char lbl_804CF474[];
extern void *lbl_80534728;
}
extern "C" {
void fn_802B8374(){
 void *value0=lbl_80534728;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF468,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802E3A88();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804CF46C,lbl_804CF470,lbl_804CF474,value1);
}
}
#pragma pop
