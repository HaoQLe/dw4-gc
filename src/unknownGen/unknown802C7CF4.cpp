#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_802C5E48();
extern char lbl_804D0B44[];
extern char lbl_804D0B54[];
extern char lbl_804D0B64[];
extern char lbl_804D0B74[];
extern void *lbl_80534D74;
}
extern "C" {
void beModelCtrlInfoRideOn_fieldInit(){
 void *value0=lbl_80534D74;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804D0B44,4);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value3=fn_802C5E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804D0B54,lbl_804D0B64,lbl_804D0B74,value1);
}
}
#pragma pop
