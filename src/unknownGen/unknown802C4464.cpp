#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_802C46E0();
void *fn_803116A4();
extern char lbl_804D0470[];
extern char lbl_804D0478[];
extern char lbl_804D0480[];
extern char lbl_804D0488[];
extern void *lbl_80534B94;
extern void *lbl_80534BA0;
}
extern "C" {
void fn_802C4464(){
 void *meta=lbl_80534B94;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0470,0x2);
 fn_800659C0(meta,lbl_804D0478,lbl_804D0480,lbl_804D0488,field);
}
void *fn_802C44E4(){return fn_803116A4();}
void *fn_802C4504(){
 if(!lbl_80534BA0 || !(reinterpret_cast<unsigned int *>(lbl_80534BA0)[0x24/4]&4)) fn_802C46E0();
 return lbl_80534BA0;
}
}
#pragma pop
