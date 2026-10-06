#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_802B1AC8();
void *fn_802C7E28();
void fn_802C7E74();
void fn_802C822C();
extern char lbl_8041EE64[];
extern char lbl_804D0B84[];
extern char lbl_804D0B98[];
extern char lbl_804D0BAC[];
extern char lbl_804D0BC0[];
extern void *lbl_80534D88;
extern void *lbl_80534DA0;
extern void *lbl_805621F4;
void fn_802C7F28();
void *fn_802C7F9C();
void fn_802C7FBC();
}
extern "C" {
void fn_802C7F00(){
 fn_80066188((int)fn_802C7F28);
}
void fn_802C7F28(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534D88,(int)fn_80066B08,(int)fn_800237D0,(int)fn_802C7F9C,(int)lbl_8041EE64,36,(int)fn_802C7E74,(int)fn_802C7FBC,0,0);
}
void *fn_802C7F9C(){return fn_802C7E28();}
void fn_802C7FBC(){
 void *meta=lbl_80534D88;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D0B84,0x5);
 fn_800659C0(meta,lbl_804D0B98,lbl_804D0BAC,lbl_804D0BC0,field);
}
void *fn_802C803C(void *object){
 fn_802C822C();
 return fn_8006546C(lbl_80534DA0,object);
}
void *fn_802C807C(){
 if(!lbl_80534DA0) lbl_80534DA0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534DA0;
}
void *fn_802C80D0(){
 if(!lbl_80534DA0 || !(reinterpret_cast<unsigned int *>(lbl_80534DA0)[0x24/4]&4)) fn_802C822C();
 return lbl_80534DA0;
}
}
#pragma pop
