#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802AD288();
extern char lbl_804CDDF4[];
extern char lbl_804CDDF8[];
extern char lbl_804CDDFC[];
extern char lbl_804CDE00[];
extern void *lbl_80534490;
}
extern "C" {
void fn_802AD8B0(){
 void *value0=lbl_80534490;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CDDF4,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802AD288();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804CDDF8,lbl_804CDDFC,lbl_804CDE00,value1);
}
}
#pragma pop
