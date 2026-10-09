#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802B8EB0();
extern char lbl_804CF810[];
extern char lbl_804CF814[];
extern char lbl_804CF818[];
extern char lbl_804CF81C[];
extern void *lbl_80534814;
}
extern "C" {
void beSeCtl_fieldInit(){
 void *value0=lbl_80534814;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF810,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802B8EB0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 fn_800659C0(value0,lbl_804CF814,lbl_804CF818,lbl_804CF81C,value1);
}
}
#pragma pop
