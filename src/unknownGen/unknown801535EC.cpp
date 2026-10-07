#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_800BB7B8();
void fn_8012FC48();
void *fn_8013496C();
void *fn_80135970();
void fn_80145C0C();
void *fn_801B74F0();
extern char lbl_804A0298[];
extern char lbl_804A02A4[];
extern char lbl_804A02B0[];
extern char lbl_8055FD88[8];
extern char lbl_8055FD90[8];
extern char lbl_8055FD98[8];
extern char lbl_8055FDA0[8];
extern void *lbl_80564594;
extern void *lbl_805645A0;
void *fn_801535EC();
void fn_80153628();
void fn_80153650();
void *fn_801536C4();
void fn_801536E4();
void *fn_8015377C();
void fn_801537B8();
void fn_801537E0();
void *fn_80153844();
}
extern "C" {
void *fn_801535EC(){
 if(!lbl_80564594 || !(reinterpret_cast<unsigned int *>(lbl_80564594)[0x24/4]&4)) fn_80153628();
 return lbl_80564594;
}
void fn_80153628(){
 fn_80066188((int)fn_80153650);
}
void fn_80153650(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564594,(int)fn_801537E0,(int)fn_80135970,(int)fn_801536C4,(int)lbl_804A02A4,40,0,(int)fn_801536E4,0,(int)lbl_804A0298);
}
void *fn_801536C4(){return fn_801535EC();}
void fn_801536E4(){
 void *value0=lbl_80564594;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FD88,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B74F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800BB7B8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_8055FD90,lbl_8055FD98,lbl_8055FDA0,value1);
}
void *fn_8015377C(){
 if(!lbl_805645A0 || !(reinterpret_cast<unsigned int *>(lbl_805645A0)[0x24/4]&4)) fn_801537B8();
 return lbl_805645A0;
}
void fn_801537B8(){
 fn_80066188((int)fn_801537E0);
}
void fn_801537E0(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805645A0,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_80153844,(int)lbl_804A02B0,32,0,0,0,0);
}
void *fn_80153844(){return fn_8015377C();}
void fn_80153864(){}
}
#pragma pop
