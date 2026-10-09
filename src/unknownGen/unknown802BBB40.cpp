#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802C04CC();
extern char lbl_804CF828[];
extern char lbl_804CF830[];
extern char lbl_804CF838[];
extern char lbl_804CF840[];
extern void *lbl_8053481C;
}
extern "C" {
void beSaveUtilInfoRam_fieldInit(){
 void *value0=lbl_8053481C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CF828,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_802C04CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804CF830,lbl_804CF838,lbl_804CF840,value1);
}
}
#pragma pop
