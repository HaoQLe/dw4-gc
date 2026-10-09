#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_801B4DF0();
void *fn_801B74F0();
extern char lbl_804CF670[];
extern char lbl_804CF67C[];
extern char lbl_804CF688[];
extern char lbl_804CF694[];
extern void *lbl_80534798;
}
extern "C" {
void beShadow01Info_fieldInit(){
 void *value0=lbl_80534798;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF670,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B74F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801B74F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_801B4DF0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 fn_800659C0(value0,lbl_804CF67C,lbl_804CF688,lbl_804CF694,value1);
}
}
#pragma pop
