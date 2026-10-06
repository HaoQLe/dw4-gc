#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802BB384();
void fn_802BB3D0();
void fn_802BB7E0();
extern char lbl_8041DA28[];
extern char lbl_804CF7E8[];
extern char lbl_804CF7F0[];
extern char lbl_804CF7F8[];
extern char lbl_804CF800[];
extern void *lbl_80534808;
extern void *lbl_80534814;
extern void *lbl_805621F4;
void fn_802BB4DC();
void *fn_802BB550();
void fn_802BB570();
}
extern "C" {
void fn_802BB4B4(){
 fn_80066188((int)fn_802BB4DC);
}
void fn_802BB4DC(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534808,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802BB550,(int)lbl_8041DA28,20,(int)fn_802BB3D0,(int)fn_802BB570,0,0);
}
void *fn_802BB550(){return fn_802BB384();}
void fn_802BB570(){
 void *meta=lbl_80534808;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CF7E8,0x2);
 fn_800659C0(meta,lbl_804CF7F0,lbl_804CF7F8,lbl_804CF800,field);
}
void *fn_802BB5F0(void *object){
 fn_802BB7E0();
 return fn_8006546C(lbl_80534814,object);
}
void *fn_802BB630(){
 if(!lbl_80534814) lbl_80534814=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534814;
}
void *fn_802BB684(){
 if(!lbl_80534814 || !(reinterpret_cast<unsigned int *>(lbl_80534814)[0x24/4]&4)) fn_802BB7E0();
 return lbl_80534814;
}
}
#pragma pop
