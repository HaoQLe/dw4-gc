#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_800330A8();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_8010CBD4();
void *fn_8010E038();
void fn_8010E074();
void fn_8010E37C();
extern char lbl_80494880[];
extern char lbl_804948A8[];
extern char lbl_8055EF5C[8];
extern char lbl_8055EF64[8];
extern void *lbl_80561D14;
extern void *lbl_805635D8;
extern void *lbl_805635E0;
void fn_8010E1F4();
void *fn_8010E260();
void *fn_8010E280();
void *fn_8010E288();
void fn_8010E2C4();
void fn_8010E2EC();
void *fn_8010E35C();
}
extern "C" {
void fn_8010E1CC(){
 fn_80066188((int)fn_8010E1F4);
}
void fn_8010E1F4(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635D8,(int)fn_800330A8,(int)fn_8010E280,(int)fn_8010E260,(int)lbl_80494880,28,(int)fn_8010E074,0,0,(int)lbl_8055EF5C);
}
void *fn_8010E260(){return fn_8010E038();}
void *fn_8010E280(){return lbl_80561D14;}
void *fn_8010E288(){
 if(!lbl_805635E0 || !(reinterpret_cast<unsigned int *>(lbl_805635E0)[0x24/4]&4)) fn_8010E2C4();
 return lbl_805635E0;
}
void fn_8010E2C4(){
 fn_80066188((int)fn_8010E2EC);
}
void fn_8010E2EC(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_805635E0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010E35C,(int)lbl_804948A8,12,0,(int)fn_8010E37C,0,(int)lbl_8055EF64);
}
void *fn_8010E35C(){return fn_8010E288();}
}
#pragma pop
