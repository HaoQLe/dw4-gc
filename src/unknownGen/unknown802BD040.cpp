#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
extern char lbl_804CFAD4[];
extern char lbl_804CFADC[];
extern char lbl_804CFAE4[];
extern char lbl_804CFAEC[];
extern void *lbl_805348C4;
}
extern "C" {
void fn_802BD040(){
 void *value0=lbl_805348C4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CFAD4,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 fn_800659C0(value0,lbl_804CFADC,lbl_804CFAE4,lbl_804CFAEC,value1);
}
}
#pragma pop
