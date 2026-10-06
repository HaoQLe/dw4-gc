#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802C570C();
void *fn_802C57DC();
void fn_802C5828();
void fn_802C5B1C();
void fn_802C5CE0();
extern char lbl_8041E99C[];
extern char lbl_804D05E8[];
extern char lbl_804D0600[];
extern char lbl_804D0618[];
extern char lbl_804D0630[];
extern void *lbl_80534C04;
extern void *lbl_80534C20;
void fn_802C58A4();
void *fn_802C5918();
void fn_802C5938();
}
extern "C" {
void fn_802C587C(){
 fn_80066188((int)fn_802C58A4);
}
void fn_802C58A4(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534C04,(int)fn_802C5CE0,(int)fn_802C570C,(int)fn_802C5918,(int)lbl_8041E99C,60,(int)fn_802C5828,(int)fn_802C5938,0,0);
}
void *fn_802C5918(){return fn_802C57DC();}
void fn_802C5938(){
 void *meta=lbl_80534C04;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D05E8,0x6);
 fn_800659C0(meta,lbl_804D0600,lbl_804D0618,lbl_804D0630,field);
}
void *fn_802C59B8(void *object){
 fn_802C5B1C();
 return fn_8006546C(lbl_80534C20,object);
}
void *fn_802C59F8(){
 if(!lbl_80534C20 || !(reinterpret_cast<unsigned int *>(lbl_80534C20)[0x24/4]&4)) fn_802C5B1C();
 return lbl_80534C20;
}
}
#pragma pop
