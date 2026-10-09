#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802AD288();
extern char lbl_804CDD64[];
extern char lbl_804CDD68[];
extern char lbl_804CDD6C[];
extern char lbl_804CDD70[];
extern void *lbl_8053446C;
}
extern "C" {
void igMovieRenderer_fieldInit(){
 void *value0=lbl_8053446C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CDD64,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802AD288();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 fn_800659C0(value0,lbl_804CDD68,lbl_804CDD6C,lbl_804CDD70,value1);
}
}
#pragma pop
