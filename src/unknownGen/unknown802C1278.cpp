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
void *fn_802B381C();
void *fn_802C111C();
void fn_802C1168();
void fn_802C15D8();
void fn_802E3908();
extern char lbl_8041E478[];
extern char lbl_804D0048[];
extern char lbl_804D004C[];
extern char lbl_804D0050[];
extern char lbl_804D0054[];
extern void *lbl_80534A6C;
extern void *lbl_80534A74;
void fn_802C12A0();
void *fn_802C1314();
void fn_802C1334();
}
extern "C" {
void fn_802C1278(){
 fn_80066188((int)fn_802C12A0);
}
void fn_802C12A0(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534A6C,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802C1314,(int)lbl_8041E478,36,(int)fn_802C1168,(int)fn_802C1334,0,0);
}
void *fn_802C1314(){return fn_802C111C();}
void fn_802C1334(){
 void *meta=lbl_80534A6C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0048,0x1);
 fn_800659C0(meta,lbl_804D004C,lbl_804D0050,lbl_804D0054,field);
}
void *fn_802C13B4(){
 if(!lbl_80534A74 || !(reinterpret_cast<unsigned int *>(lbl_80534A74)[0x24/4]&4)) fn_802C15D8();
 return lbl_80534A74;
}
}
#pragma pop
