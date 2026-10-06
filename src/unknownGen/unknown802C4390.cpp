#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C41A0();
void fn_802C41EC();
void fn_802C46E0();
void fn_802C4708();
void *fn_803116A4();
extern char lbl_8041E854[];
extern char lbl_804D0470[];
extern char lbl_804D0478[];
extern char lbl_804D0480[];
extern char lbl_804D0488[];
extern void *lbl_80534B94;
extern void *lbl_80534BA0;
void fn_802C43B8();
void *fn_802C4434();
void *fn_802C4454();
void fn_802C4464();
void *fn_802C44E4();
}
extern "C" {
void fn_802C4390(){
 fn_80066188((int)fn_802C43B8);
}
void fn_802C43B8(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534B94,(int)fn_802C4708,(int)fn_802C4454,(int)fn_802C4434,(int)lbl_8041E854,128,(int)fn_802C41EC,(int)fn_802C4464,(int)fn_802C44E4,0);
}
void *fn_802C4434(){return fn_802C41A0();}
void *fn_802C4454(){return lbl_80534BA0;}
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
