#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_800BAC98();
extern char lbl_804D2194[];
extern char lbl_804D21A0[];
extern char lbl_804D21AC[];
extern char lbl_804D21B8[];
extern void *lbl_80535388;
}
extern "C" {
void beFontGeomAttrPair_fieldInit(){
 void *value0=lbl_80535388;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D2194,3);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_800BAC98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_804D21A0,lbl_804D21AC,lbl_804D21B8,value1);
}
}
#pragma pop
