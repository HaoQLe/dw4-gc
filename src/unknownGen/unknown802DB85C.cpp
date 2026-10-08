#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802DB904();
extern char lbl_804D2374[];
extern char lbl_804D237C[];
extern char lbl_804D2384[];
extern char lbl_804D238C[];
extern void *lbl_80535408;
}
extern "C" {
void fn_802DB85C(){
 void *value0=lbl_80535408;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2374,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_802DB904();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D237C,lbl_804D2384,lbl_804D238C,value1);
}
}
#pragma pop
