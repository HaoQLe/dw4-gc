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
void *fn_802E4FB4();
void fn_802E5000();
void fn_802E5410();
extern char lbl_80420E98[];
extern char lbl_804D2EB4[];
extern char lbl_804D2EC8[];
extern char lbl_804D2EDC[];
extern char lbl_804D2EF0[];
extern void *lbl_80535748;
extern void *lbl_80535760;
extern void *lbl_805621F4;
void fn_802E510C();
void *fn_802E5180();
void fn_802E51A0();
}
extern "C" {
void fn_802E50E4(){
 fn_80066188((int)fn_802E510C);
}
void fn_802E510C(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80535748,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802E5180,(int)lbl_80420E98,36,(int)fn_802E5000,(int)fn_802E51A0,0,0);
}
void *fn_802E5180(){return fn_802E4FB4();}
void fn_802E51A0(){
 void *meta=lbl_80535748;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2EB4,0x5);
 fn_800659C0(meta,lbl_804D2EC8,lbl_804D2EDC,lbl_804D2EF0,field);
}
void *fn_802E5220(void *object){
 fn_802E5410();
 return fn_8006546C(lbl_80535760,object);
}
void *fn_802E5260(){
 if(!lbl_80535760) lbl_80535760=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535760;
}
void *fn_802E52B4(){
 if(!lbl_80535760 || !(reinterpret_cast<unsigned int *>(lbl_80535760)[0x24/4]&4)) fn_802E5410();
 return lbl_80535760;
}
}
#pragma pop
