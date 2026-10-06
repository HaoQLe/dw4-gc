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
void *fn_802C556C();
void fn_802C55B8();
void fn_802C587C();
void fn_802C5CE0();
extern char lbl_8041E970[];
extern char lbl_804D05C8[];
extern char lbl_804D05D0[];
extern char lbl_804D05D8[];
extern char lbl_804D05E0[];
extern void *lbl_80534BF8;
extern void *lbl_80534C04;
extern void *lbl_80534C40;
void fn_802C5678();
void *fn_802C56EC();
void *fn_802C570C();
void fn_802C571C();
}
extern "C" {
void fn_802C5650(){
 fn_80066188((int)fn_802C5678);
}
void fn_802C5678(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534BF8,(int)fn_802C5CE0,(int)fn_802C570C,(int)fn_802C56EC,(int)lbl_8041E970,32,(int)fn_802C55B8,(int)fn_802C571C,0,0);
}
void *fn_802C56EC(){return fn_802C556C();}
void *fn_802C570C(){return lbl_80534C40;}
void fn_802C571C(){
 void *meta=lbl_80534BF8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D05C8,0x2);
 fn_800659C0(meta,lbl_804D05D0,lbl_804D05D8,lbl_804D05E0,field);
}
void *fn_802C579C(void *object){
 fn_802C587C();
 return fn_8006546C(lbl_80534C04,object);
}
void *fn_802C57DC(){
 if(!lbl_80534C04 || !(reinterpret_cast<unsigned int *>(lbl_80534C04)[0x24/4]&4)) fn_802C587C();
 return lbl_80534C04;
}
}
#pragma pop
