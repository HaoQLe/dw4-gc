#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void fn_8002907C();
void fn_80029D58();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E3F0C();
void fn_802E3F58();
void fn_802E42F4();
extern char lbl_80420DD4[];
extern char lbl_80420DE8[];
extern char lbl_804D2E4C[];
extern char lbl_804D2E54[];
extern char lbl_804D2E58[];
extern char lbl_804D2E5C[];
extern char lbl_804D2E60[];
extern char lbl_80535718[];
extern void *lbl_8053571C;
extern void *lbl_80535724;
void fn_802E3FF4();
void *fn_802E4068();
void *fn_802E4088();
void fn_802E40D4();
void fn_802E40FC();
void *fn_802E416C();
void fn_802E418C();
}
extern "C" {
void fn_802E3FCC(){
 fn_80066188((int)fn_802E3FF4);
}
void fn_802E3FF4(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535718,(int)fn_8002907C,(int)fn_80024180,(int)fn_802E4068,(int)lbl_80420DD4,20,(int)fn_802E3F58,0,0,(int)lbl_804D2E4C);
}
void *fn_802E4068(){return fn_802E3F0C();}
void *fn_802E4088(){
 if(!lbl_8053571C || !(reinterpret_cast<unsigned int *>(lbl_8053571C)[0x24/4]&4)) fn_802E40D4();
 return lbl_8053571C;
}
void fn_802E40D4(){
 fn_80066188((int)fn_802E40FC);
}
void fn_802E40FC(){
 fn_802B1AC8();
 fn_80066204(1,(int)&lbl_8053571C,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802E416C,(int)lbl_80420DE8,16,0,(int)fn_802E418C,0,0);
}
void *fn_802E416C(){return fn_802E4088();}
void fn_802E418C(){
 void *meta=lbl_8053571C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2E54,0x1);
 fn_800659C0(meta,lbl_804D2E58,lbl_804D2E5C,lbl_804D2E60,field);
}
void *fn_802E420C(){
 if(!lbl_80535724 || !(reinterpret_cast<unsigned int *>(lbl_80535724)[0x24/4]&4)) fn_802E42F4();
 return lbl_80535724;
}
}
#pragma pop
