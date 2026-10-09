#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CF94C[];
extern char lbl_804CF954[];
extern char lbl_804CF95C[];
extern char lbl_804CF964[];
extern void *lbl_80534858;
}
extern "C" {
void beXboxImage24k_fieldInit(){
 void *value0=lbl_80534858;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF94C,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 fn_800659C0(value0,lbl_804CF954,lbl_804CF95C,lbl_804CF964,value1);
}
}
#pragma pop
