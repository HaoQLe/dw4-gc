#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_80325C6C();
void *fn_803287A8();
void *fn_8032B8A4();
void *fn_80333940();
void fn_8033398C();
void fn_803342BC();
extern char lbl_80453438[];
extern char lbl_80453D1C[];
extern char lbl_80453D3C[];
extern char lbl_80453D64[];
extern char lbl_804E2064[];
extern char lbl_804E2068[];
extern char lbl_804E206C[];
extern char lbl_804E2070[];
extern char lbl_804E2074[];
extern char lbl_804E2080[];
extern char lbl_804E208C[];
extern char lbl_804E2098[];
extern char lbl_804E20A4[];
extern char lbl_804E20A8[];
extern char lbl_804E20AC[];
extern char lbl_804E20B0[];
extern char lbl_804E20B4[];
extern char lbl_804E20D0[];
extern void *lbl_80535F94;
extern void *lbl_80535F9C;
extern void *lbl_80535FAC;
extern void *lbl_80535FB4;
extern void *lbl_80535FB8;
extern void *lbl_805621F4;
void fn_80333BB4();
void *fn_80333C28();
void fn_80333C48();
void *fn_80333CC8();
void fn_80333D14();
void fn_80333D3C();
void *fn_80333DAC();
void fn_80333DCC();
void *fn_80333EA0();
void fn_80333EEC();
void fn_80333F14();
void *fn_80333F84();
void fn_80333FA4();
}
extern "C" {
void fn_80333B8C(){
 fn_80066188((int)fn_80333BB4);
}
void fn_80333BB4(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80535F94,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80333C28,(int)lbl_80453D1C,88,(int)fn_8033398C,(int)fn_80333C48,0,0);
}
void *fn_80333C28(){return fn_80333940();}
void fn_80333C48(){
 void *meta=lbl_80535F94;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E2064,0x1);
 fn_800659C0(meta,lbl_804E2068,lbl_804E206C,lbl_804E2070,field);
}
void *fn_80333CC8(){
 if(!lbl_80535F9C || !(reinterpret_cast<unsigned int *>(lbl_80535F9C)[0x24/4]&4)) fn_80333D14();
 return lbl_80535F9C;
}
void fn_80333D14(){
 fn_80066188((int)fn_80333D3C);
}
void fn_80333D3C(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80535F9C,(int)fn_80333F14,(int)fn_8032B8A4,(int)fn_80333DAC,(int)lbl_80453D3C,96,0,(int)fn_80333DCC,0,0);
}
void *fn_80333DAC(){return fn_80333CC8();}
void fn_80333DCC(){
 void *meta=lbl_80535F9C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E2074,0x3);
 fn_800659C0(meta,lbl_804E2080,lbl_804E208C,lbl_804E2098,field);
}
void *fn_80333E4C(){
 if(!lbl_80535FAC) lbl_80535FAC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535FAC;
}
void *fn_80333EA0(){
 if(!lbl_80535FAC || !(reinterpret_cast<unsigned int *>(lbl_80535FAC)[0x24/4]&4)) fn_80333EEC();
 return lbl_80535FAC;
}
void fn_80333EEC(){
 fn_80066188((int)fn_80333F14);
}
void fn_80333F14(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80535FAC,(int)fn_80325C6C,(int)fn_803287A8,(int)fn_80333F84,(int)lbl_80453D64,84,0,(int)fn_80333FA4,0,0);
}
void *fn_80333F84(){return fn_80333EA0();}
void fn_80333FA4(){
 void *meta=lbl_80535FAC;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E20A4,0x1);
 fn_800659C0(meta,lbl_804E20A8,lbl_804E20AC,lbl_804E20B0,field);
}
void *fn_80334024(){
 if(!lbl_80535FB4) lbl_80535FB4=fn_800635C8(lbl_80453438,lbl_804E20B4,lbl_804E20D0,0x7);
 return lbl_80535FB4;
}
void *fn_80334084(void *object){
 fn_803342BC();
 return fn_8006546C(lbl_80535FB8,object);
}
void *fn_803340C4(){
 if(!lbl_80535FB8) lbl_80535FB8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535FB8;
}
void *fn_80334118(){
 if(!lbl_80535FB8 || !(reinterpret_cast<unsigned int *>(lbl_80535FB8)[0x24/4]&4)) fn_803342BC();
 return lbl_80535FB8;
}
}
#pragma pop
