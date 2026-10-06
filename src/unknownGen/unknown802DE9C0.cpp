#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B86E0();
void *fn_802DE8B8();
void fn_802DE904();
void fn_802DEC48();
void *fn_802F7294();
extern char lbl_804207E4[];
extern char lbl_804D2628[];
extern char lbl_804D2638[];
extern char lbl_804D2648[];
extern char lbl_804D2658[];
extern void *lbl_80534734;
extern void *lbl_805354E4;
extern void *lbl_805354F8;
extern void *lbl_805621F4;
void fn_802DE9E8();
void *fn_802DEA64();
void *fn_802DEA84();
void fn_802DEA94();
void *fn_802DEB14();
}
extern "C" {
void fn_802DE9C0(){
 fn_80066188((int)fn_802DE9E8);
}
void fn_802DE9E8(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805354E4,(int)fn_802B86E0,(int)fn_802DEA84,(int)fn_802DEA64,(int)lbl_804207E4,40,(int)fn_802DE904,(int)fn_802DEA94,(int)fn_802DEB14,0);
}
void *fn_802DEA64(){return fn_802DE8B8();}
void *fn_802DEA84(){return lbl_80534734;}
void fn_802DEA94(){
 void *meta=lbl_805354E4;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2628,0x4);
 fn_800659C0(meta,lbl_804D2638,lbl_804D2648,lbl_804D2658,field);
}
void *fn_802DEB14(){return fn_802F7294();}
void *fn_802DEB34(){
 if(!lbl_805354F8) lbl_805354F8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805354F8;
}
void *fn_802DEB88(){
 if(!lbl_805354F8 || !(reinterpret_cast<unsigned int *>(lbl_805354F8)[0x24/4]&4)) fn_802DEC48();
 return lbl_805354F8;
}
}
#pragma pop
